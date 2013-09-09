/******************************************************************************//**
 * \file FluxCreator.h
 * This file holds the class of the FluxCreator
 * \author Tianyang Wang
 * \date 15/3/2012
 *********************************************************************************/

#ifndef FLUXCREATOR_H_
#define FLUXCREATOR_H_

#include "AbstractDataCreator.h"
#include <string>

/********//**
 * \brief This class uses Gauss integration to compute the fluxes on the mesh
 ***********/
class FluxCreator: public AbstractDataCreator {
public:
	/********//**
	 **********************************************************************************
	 * \brief Constructor
	 ***********/
	FluxCreator(int _numNodes, int _numElems, int _nodesPerElem,
			double *_nodeCoors, int *_nodeNumbers, int *_elemTable,
			std::string _function, bool _perpendicularToSurface);

	/********//**
	 **********************************************************************************
	 * \brief Destructor
	 ***********/
	virtual ~FluxCreator();

    /********//**
     **********************************************************************************
     * \brief Create data on a mesh
     * \param[out] data is the created (it is specified to be vector instead of scalar)
     ***********/
	void create(double *data);
	using AbstractDataCreator::create;

private:
	static const int COOR_DIM = 3;
	static const int DOF_DIM = 3;
	/// Whether the pressure field is perpendicular to the surface or just in z direction
	bool perpendicularToSurface;

	/********//**
	 **********************************************************************************
	 * \brief Calculate the fluxes by integrating the pressure on the surface mesh.
	 * \param[in] pressure is the pressure function
	 * \param[out] fluxes is the fluxes on all nodes
	 * \limit Only support triangular mesh and 4-nodes quadrilateral mesh.
	 ***********/
	void calculateFluxByIntegration(double *fluxes,
			double(*pressure)(double, double, double));

	/********//**
	 **********************************************************************************
	 * \brief Use Gauss quadrature to calculate the fluxes on nodes of a triangle element
	 * \param[in] p0 is node 0 of the triangle
	 * \param[in] p1 is node 1 of the triangle
	 * \param[in] p2 is node 2 of the triangle
	 * \param[in] pressure is the pressure function
	 * \param[out] fluxes is the fluxes on the nodes of the triangle
	 ***********/
	void gaussQuadratureOnTriangle(double *p0, double *p1, double *p2,
			double(*pressure)(double, double, double), double *fluxes);

	/********//**
	 **********************************************************************************
	 * \brief Use Gauss quadrature to calculate the fluxes on nodes of a 4-nodes quadrilateral element
	 * \param[in] p0 is node 0 of the quad
	 * \param[in] p1 is node 1 of the quad
	 * \param[in] p2 is node 2 of the quad
	 * \param[in] p3 is node 3 of the quad
	 * \param[in] pressure is the pressure function
	 * \param[out] fluxes is the fluxes on the nodes of the quad
	 ***********/
	void gaussQuadratureOnQuad(double *p0, double *p1, double *p2, double *p3,
			double(*pressure)(double, double, double), double *fluxes);

	/********//**
	 **********************************************************************************
	 * \brief Compute the determinant of the Jacobian of a certain point (xi, eta) in the quad
	 * \param[in] p0 is node 0 of the quad
	 * \param[in] p1 is node 1 of the quad
	 * \param[in] p2 is node 2 of the quad
	 * \param[in] p3 is node 3 of the quad
	 * \param[in] xi_eta contains xi and eta at a point
	 * \param[out] detJ is the determinat of Jacobian
	 * \param[out] normal is the normal vector on this point
	 ***********/
	static void computeQuadDetJ(double *p0, double *p1, double *p2, double *p3,
			double *xi_eta, double *detJ, double *normal);

	/********//**
	 **********************************************************************************
	 * \brief Compute the shape function (with a certain id) value of a certain point (xi, eta) in the quad
	 * \param[in] id defines which shape function
	 * \param[in] xi_eta contains xi and eta at a point
	 * \return the shape function value
	 ***********/
	static double computeQuadShapeFunc(int id, double *xi_eta);

	/********//**
	 **********************************************************************************
	 * \brief Search the coordinates of a node by its ID
	 * \param[in] id is the ID of the node
	 * \param[out] pos is the position of the node in the node array
	 * \param[out] coors is the coordinates
	 ***********/
	void getCoorsByNodeID(int id, int *pos, double *coors);
};

#endif /* FLUXCREATOR_H_ */
