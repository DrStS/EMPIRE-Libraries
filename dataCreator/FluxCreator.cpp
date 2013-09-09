#include "FluxCreator.h"
#include <math.h>

using namespace std;

FluxCreator::FluxCreator(int _numNodes, int _numElems, int _nodesPerElem,
		double *_nodeCoors, int *_nodeNumbers, int *_elemTable,
		string _function, bool _perpendicularToSurface) :
		AbstractDataCreator(_numNodes, _numElems, _nodesPerElem, _nodeCoors,
				_nodeNumbers, _elemTable, _function), perpendicularToSurface(
				_perpendicularToSurface) {
	// empty
}

FluxCreator::~FluxCreator() {
	// empty
}

void FluxCreator::create(double *data) {
	calculateFluxByIntegration(data, funcZ);
}

void FluxCreator::calculateFluxByIntegration(double *fluxes,
		double(*pressure)(double, double, double)) {

	double p[nodesPerElem][COOR_DIM];
	double elemFluxes[nodesPerElem * DOF_DIM];

	for (int i = 0; i < numNodes * DOF_DIM; i++)
		fluxes[i] = 0.0;

	int nodeIds[nodesPerElem];
	for (int i = 0; i < numElems; i++) {
		for (int j = 0; j < nodesPerElem; j++) {
			int pos;
			nodeIds[j] = elemTable[i * nodesPerElem + j];
			getCoorsByNodeID(nodeIds[j], &pos, p[j]);
			nodeIds[j] = pos; // now nodeIds is node positions
		}
		if (nodesPerElem == 3)
			gaussQuadratureOnTriangle(p[0], p[1], p[2], pressure, elemFluxes);
		else if (nodesPerElem == 4)
			gaussQuadratureOnQuad(p[0], p[1], p[2], p[3], pressure, elemFluxes);

		for (int j = 0; j < nodesPerElem; j++)
			for (int k = 0; k < DOF_DIM; k++)
				fluxes[nodeIds[j] * DOF_DIM + k] += elemFluxes[j * DOF_DIM + k];
	}
}

void FluxCreator::gaussQuadratureOnTriangle(double *p0, double *p1, double *p2,
		double(*pressure)(double, double, double), double *fluxes) {

	double area = 0.0;
	double normal[3];
	normal[0] = (p2[1] - p0[1]) * (p2[2] - p1[2])
			- (p2[1] - p1[1]) * (p2[2] - p0[2]);
	area += normal[0] * normal[0];
	normal[1] = -((p2[0] - p0[0]) * (p2[2] - p1[2])
			- (p2[0] - p1[0]) * (p2[2] - p0[2]));
	area += normal[1] * normal[1];
	normal[2] = (p2[0] - p0[0]) * (p2[1] - p1[1])
			- (p2[0] - p1[0]) * (p2[1] - p0[1]);
	area += normal[2] * normal[2];

	area = sqrt(area);
	for (int i = 0; i < 3; i++)
		normal[i] /= area;

	area = 0.5 * area;

	const double w[3] = { 1.0 / 3.0, 1.0 / 3.0, 1.0 / 3.0 };
	const double xi[3][3] = { { 2.0 / 3.0, 1.0 / 6.0, 1.0 / 6.0 }, // Gauss points isoparametric coordinates
			{ 1.0 / 6.0, 2.0 / 3.0, 1.0 / 6.0 }, { 1.0 / 6.0, 1.0 / 6.0, 2.0
					/ 3.0 } };
	double g_p[3][3]; // Gauss points global coordinates

	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			///Global Gauss points
			g_p[i][j] = xi[i][0] * p0[j] + xi[i][1] * p1[j] + xi[i][2] * p2[j];

	double press[3];
	for (int i = 0; i < 3; i++) {
		press[i] = pressure(g_p[i][0], g_p[i][1], g_p[i][2]);
		press[i] *= w[i];
	}

	double fluxLengths[3];
	for (int i = 0; i < 3; i++)
		fluxLengths[i] = 0.0;

	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			fluxLengths[i] += press[j] * xi[j][i];

	for (int i = 0; i < 3; i++)
		fluxLengths[i] *= area;

	if (perpendicularToSurface) {
		for (int i = 0; i < 3; i++)
			for (int j = 0; j < DOF_DIM; j++)
				fluxes[i * DOF_DIM + j] = fluxLengths[i] * normal[j];
	} else {
		for (int i = 0; i < 3; i++)
			for (int j = 0; j < DOF_DIM; j++) {
				if (j == 2)
					fluxes[i * DOF_DIM + j] = fluxLengths[i]; // set force only in z direction
				else
					fluxes[i * DOF_DIM + j] = 0.0;
			}
	}
}

void FluxCreator::gaussQuadratureOnQuad(double *p0, double *p1, double *p2,
		double *p3, double(*pressure)(double, double, double), double *fluxes) {
	double v = sqrt(3.0) / 3.0;
	double xi_eta[4][2] = { { -v, -v }, // Gauss points isoparametric coordinates
			{ v, -v }, { v, v }, { -v, v } };

	double g_p[4][3]; // Gauss points global coordinates

	double shapeFuncs[4][4];
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++)
			shapeFuncs[i][j] = computeQuadShapeFunc(j, xi_eta[i]);

	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 3; j++)
			g_p[i][j] = shapeFuncs[i][0] * p0[j] + shapeFuncs[i][1] * p1[j]
					+ shapeFuncs[i][2] * p2[j] + shapeFuncs[i][3] * p3[j];

	double press[4];
	for (int i = 0; i < 4; i++)
		press[i] = pressure(g_p[i][0], g_p[i][1], g_p[i][2]);

	double detJ[4];
	double normal[4][3];
	for (int i = 0; i < 4; i++)
		computeQuadDetJ(p0, p1, p2, p3, xi_eta[i], &detJ[i], normal[i]);

	double fluxLengths[4];
	for (int i = 0; i < 4; i++)
		fluxLengths[i] = 0.0;

	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++)
			fluxLengths[i] += press[j] * shapeFuncs[j][i] * detJ[j];

	if (perpendicularToSurface) {
		for (int i = 0; i < 4; i++)
			for (int j = 0; j < DOF_DIM; j++)
				fluxes[i * DOF_DIM + j] = fluxLengths[i] * normal[i][j];
	} else {
		for (int i = 0; i < 4; i++)
			for (int j = 0; j < DOF_DIM; j++) {
				if (j == 2)
					fluxes[i * DOF_DIM + j] = fluxLengths[i]; // set force only in z direction
				else
					fluxes[i * DOF_DIM + j] = 0.0;
			}
	}
}

void FluxCreator::computeQuadDetJ(double *p0, double *p1, double *p2, double *p3,
		double *xi_eta, double *detJ, double *normal) {
	// d_N_d_xi[4] contains the partial derivative w.r.t. xi of the shape functions
	double d_N_d_xi[4];
	// d_N_d_eta[4] contains the partial derivative w.r.t. eta of the shape functions
	double d_N_d_eta[4];

	d_N_d_xi[0] = -0.25 * (1 - xi_eta[1]);
	d_N_d_xi[1] = -d_N_d_xi[0];
	d_N_d_xi[2] = 0.25 * (1 + xi_eta[1]);
	d_N_d_xi[3] = -d_N_d_xi[2];

	d_N_d_eta[0] = -0.25 * (1 - xi_eta[0]);
	d_N_d_eta[1] = -0.25 * (1 + xi_eta[0]);
	d_N_d_eta[2] = -d_N_d_eta[1];
	d_N_d_eta[3] = -d_N_d_eta[0];

	// pts is an aggregation of p0, p1, p2, p3, which makes the formula below neater
	double pts[4][3];
	for (int i = 0; i < COOR_DIM; i++) {
		pts[0][i] = p0[i];
		pts[1][i] = p1[i];
		pts[2][i] = p2[i];
		pts[3][i] = p3[i];
	}

	// g1 and g2 are the local basis vectors, and det(J)=||g1 x g2||
	double g1[3] = { 0, 0, 0 };
	double g2[3] = { 0, 0, 0 };

	for (int i = 0; i < COOR_DIM; i++) {
		for (int j = 0; j < 4; j++) {
			g1[i] += pts[j][i] * d_N_d_xi[j];
			g2[i] += pts[j][i] * d_N_d_eta[j];
		}
	}

	*detJ = 0.0;
	normal[0] = g1[1] * g2[2] - g2[1] * g1[2];
	*detJ += normal[0] * normal[0];
	normal[1] = -(g1[0] * g2[2] - g2[0] * g1[2]);
	*detJ += normal[1] * normal[1];
	normal[2] = g1[0] * g2[1] - g2[0] * g1[1];
	*detJ += normal[2] * normal[2];

	*detJ = sqrt(*detJ);
	for (int i = 0; i < 3; i++)
		normal[i] /= (*detJ);
}

double FluxCreator::computeQuadShapeFunc(int id, double *xi_eta) {
	if (id == 0) {
		return 0.25 * (1.0 - xi_eta[0]) * (1.0 - xi_eta[1]);
	} else if (id == 1) {
		return 0.25 * (1.0 + xi_eta[0]) * (1.0 - xi_eta[1]);
	} else if (id == 2) {
		return 0.25 * (1.0 + xi_eta[0]) * (1.0 + xi_eta[1]);
	} else if (id == 3) {
		return 0.25 * (1.0 - xi_eta[0]) * (1.0 + xi_eta[1]);
	}
	return -100000000.0;
}

void FluxCreator::getCoorsByNodeID(int id, int *pos, double *coors) {
	*pos = -1;
	bool regularNumbering = false;
	if (id <= numNodes)
		if (nodeNumbers[id - 1] == id) {
			*pos = id - 1;
			regularNumbering = true;
		}

	if (!regularNumbering) {
		for (int i = 0; i < numNodes; i++)
			if (nodeNumbers[i] == id) {
				*pos = i;
				break;
			}
	}

	coors[0] = nodeCoors[(*pos) * COOR_DIM];
	coors[1] = nodeCoors[(*pos) * COOR_DIM + 1];
	coors[2] = nodeCoors[(*pos) * COOR_DIM + 2];
}
