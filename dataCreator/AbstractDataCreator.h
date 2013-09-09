/******************************************************************************//**
 * \file AbstractDataCreator.h
 * This file holds the class of the AbstractDataCreator
 * \author Tianyang Wang
 * \date 15/3/2012
 *********************************************************************************/

#ifndef ABSTRACTDATACREATOR_H_
#define ABSTRACTDATACREATOR_H_

#include <string>

/********//**
 * \brief This is the superclass of all solvers of the testAdapter
 ***********/
class AbstractDataCreator {
protected:
    int numNodes;
    int numElems;
    int nodesPerElem;
    double *nodeCoors;
    int *nodeNumbers;
    int *elemTable;

    double (*funcX)(double, double, double);
    double (*funcY)(double, double, double);
    double (*funcZ)(double, double, double);
    double (*funcT)(double, int);
    double (*funcXT)(double, double, double, double);
    double (*funcYT)(double, double, double, double);
    double (*funcZT)(double, double, double, double);

    double (*funcXTV)(double, double, double, double, double, double, double, double, double, double, double, double, double);
    double (*funcYTV)(double, double, double, double, double, double, double, double, double, double, double, double, double);
    double (*funcZTV)(double, double, double, double, double, double, double, double, double, double, double, double, double);

public:
    /********//**
     **********************************************************************************
     * \brief Constructor
     ***********/
    AbstractDataCreator(int _numNodes, int _numElems, int _nodesPerElem, double *_nodeCoors,
            int *_nodeNumbers, int *_elemTable, std::string function);
    /********//**
     **********************************************************************************
     * \brief Destructor
     ***********/
    virtual ~AbstractDataCreator() {
        //empty
    }
    /********//**
     **********************************************************************************
     * \brief Create data on a mesh
     * \param[out] data is the created (it is specified to be vector instead of scalar)
     ***********/
    virtual void create(double *data) {
        //empty
    }
    /********//**
     **********************************************************************************
     * \brief Create data on a mesh
     * \param[out] data is the created (it is specified to be vector instead of scalar)
     * \param[in] time step
     ***********/
    virtual void create(double *data, int timestep) {
        //empty
    }
    /********//**
     **********************************************************************************
     * \brief Create data on a mesh
     * \param[out] data is the created (it is specified to be vector instead of scalar)
     * \param[in] current Time
     ***********/
    virtual void create(double *data, double tau) {
        //empty
    }

    /********//**
     **********************************************************************************
     * \brief Create data on a mesh
     * \param[out] data is the created (it is specified to be vector instead of scalar)
     * \param[in] current Time
     ***********/
    virtual void create(double *data, double tau, double Lx, double Ly, double Thickness, double E, double nu, double rho, double Sprestress1, double Sprestress2, double bound) {
        //empty
    }
};
#endif /* ABSTRACTDATACREATOR_H_ */
