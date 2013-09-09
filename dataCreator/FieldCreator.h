#ifndef FIELDCREATOR_H_
#define FIELDCREATOR_H_

#include "AbstractDataCreator.h"
#include <string>

class FieldCreator: public AbstractDataCreator {
public:
    FieldCreator(int _numNodes, int _numElems, int _nodesPerElem, double *_nodeCoors,
            int *_nodeNumbers, int *_elemTable, std::string _function);
    virtual ~FieldCreator();
    void create(double *data);
    void create(double *data, int timestep);
    void create(double *data, double tau);
    void create(double *data, double tau, double Lx, double Ly, double Thickness, double E, double nu, double rho, double Sprestress1, double Sprestress2, double bound);

private:
    static const int COOR_DIM = 3;
    static const int DOF_DIM = 3;
};

#endif /* FIELDCREATOR_H_ */
