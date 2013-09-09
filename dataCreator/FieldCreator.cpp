#include "FieldCreator.h"
#include <math.h>

using namespace std;

FieldCreator::FieldCreator(int _numNodes, int _numElems, int _nodesPerElem,
		double *_nodeCoors, int *_nodeNumbers, int *_elemTable,
		string _function) :
		AbstractDataCreator(_numNodes, _numElems, _nodesPerElem, _nodeCoors,
				_nodeNumbers, _elemTable,_function) {
	// empty
}

FieldCreator::~FieldCreator() {
	// empty
}

void FieldCreator::create(double *data) {
	for (int i = 0; i < numNodes; i++) {
	    data[i * DOF_DIM] = 0;
	    data[i * DOF_DIM + 1] = 0;
		double x = nodeCoors[i * COOR_DIM];
		double y = nodeCoors[i * COOR_DIM + 1];
		double z = nodeCoors[i * COOR_DIM + 2];
		data[i * DOF_DIM + 0] = funcX(x, y, z);
		data[i * DOF_DIM + 1] = funcY(x, y, z);
		data[i * DOF_DIM + 2] = funcZ(x, y, z);
	}
}

void FieldCreator::create(double *data, int timestep) {
    for (int i = 0; i < numNodes; i++) {
        data[i * DOF_DIM] = 0;
        data[i * DOF_DIM + 1] = 0;
        double x = nodeCoors[i * COOR_DIM];
        double y = nodeCoors[i * COOR_DIM + 1];
        double z = nodeCoors[i * COOR_DIM + 2];
        data[i * DOF_DIM + 0] = funcT(funcX(x, y, z),timestep);
        data[i * DOF_DIM + 1] = funcT(funcY(x, y, z),timestep);
        data[i * DOF_DIM + 2] = funcT(funcZ(x, y, z),timestep);
    }
}

void FieldCreator::create(double *data, double currentTime) {
    for (int i = 0; i < numNodes; i++) {
        data[i * DOF_DIM] = 0;
        data[i * DOF_DIM + 1] = 0;
        double x = nodeCoors[i * COOR_DIM];
        double y = nodeCoors[i * COOR_DIM + 1];
        double z = nodeCoors[i * COOR_DIM + 2];
        data[i * DOF_DIM + 0] = funcXT(x, y, z,currentTime);
        data[i * DOF_DIM + 1] = funcYT(x, y, z,currentTime);
        data[i * DOF_DIM + 2] = funcZT(x, y, z,currentTime);
    }
}



void FieldCreator::create(double *data, double currentTime, double Lx, double Ly, double Thickness, double E, double nu, double rho, double Sprestress1, double Sprestress2, double bound){
for (int i = 0; i < numNodes; i++) {
    data[i * DOF_DIM] = 0;
    data[i * DOF_DIM + 1] = 0;
    double x = nodeCoors[i * COOR_DIM];
    double y = nodeCoors[i * COOR_DIM + 1];
    double z = nodeCoors[i * COOR_DIM + 2];
    data[i * DOF_DIM + 0] = funcXTV(x, y, z, currentTime, Lx, Ly, Thickness, E, nu, rho, Sprestress1, Sprestress2, bound);
    data[i * DOF_DIM + 1] = funcYTV(x, y, z, currentTime, Lx, Ly, Thickness, E, nu, rho, Sprestress1, Sprestress2, bound);
    data[i * DOF_DIM + 2] = funcZTV(x, y, z, currentTime, Lx, Ly, Thickness, E, nu, rho, Sprestress1, Sprestress2, bound);
}
}





