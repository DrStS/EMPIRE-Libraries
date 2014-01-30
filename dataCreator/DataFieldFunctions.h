#ifndef DATAFIELDFUNCTIONS_H_
#define DATAFIELDFUNCTIONS_H_

#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <string>

static double zeroFunction(double x, double y, double z) {
    return 0.0;
}

static double sinFunction(double x, double y, double z) {
    return sin(6.285 * x) + sin(6.285 * y) + sin(6.285 * z);
}

static double constantFunction(double x, double y, double z) {
    return 1.0;
}

static double meshClientTurbomachineryX(double x, double y, double z) {
    return 0.0;
}

static double meshClientTurbomachineryY(double x, double y, double z) {
    // for NREL UAE Phase VI Windturbine
    double uMax = -1;
    double xMin = 0.25; // > 0 !!!
    double xMax = 5.10; // > 0 !!!
    double deltaY;

    if ((x >= xMin) && (x <= xMax)) {
        deltaY = uMax
                * (1 / ((xMax - xMin) * (xMax - xMin)) * x * x
                        - (2 * xMin) / ((xMax - xMin) * (xMax - xMin)) * x
                        + (xMin * xMin) / ((xMax - xMin) * (xMax - xMin)));
    } else if ((x <= -xMin) && (x >= -xMax)) {
        x = -x;
        deltaY = uMax
                * (1 / ((xMax - xMin) * (xMax - xMin)) * x * x
                        - (2 * xMin) / ((xMax - xMin) * (xMax - xMin)) * x
                        + (xMin * xMin) / ((xMax - xMin) * (xMax - xMin)));
    } else {
        deltaY = 0;
    }

    /*      // for own-3D-Propeller-CSMDummy (normal and 4xAMI)
     double uMax = -0.3;
     double zMin = 0.0; // > 0 !!!
     double zMax = 2.1; // > 0 !!!
     double deltaY;

     if ((z >= zMin) && (z <= zMax)){
     deltaY = uMax * (1 / ((zMax - zMin) * (zMax - zMin)) * z * z - (2 * zMin) / ((zMax - zMin) * (zMax - zMin)) * z + (zMin * zMin) / ((zMax - zMin) * (zMax - zMin)));
     }
     else if ((z <= -zMin) && (x >= -zMax)){
     z = -z;
     deltaY = uMax * (1 / ((zMax - zMin) * (zMax - zMin)) * z * z - (2 * zMin) / ((zMax - zMin) * (zMax - zMin)) * z + (zMin * zMin) / ((zMax - zMin) * (zMax - zMin)));
     }
     else {
     deltaY = 0;
     }*/

    /*        // for own-3D-Propeller-CSMDummy (normal and 4xAMI) --> constant displacement
     double deltaY = -0.3; // = uMax*/

    return deltaY;
}
static double meshClientTurbomachineryZ(double x, double y, double z) {
    // for NREL UAE Phase VI Windturbine
    double deltaZ = 0.0;

    /*      // for own-3D-Propeller-CSMDummy (normal and 4xAMI)
     double uMax = -0.3;
     double zMin = 0.0; // > 0 !!!
     double zMax = 2.1; // > 0 !!!
     double deltaY;
     double deltaZ;

     if ((z >= zMin) && (z <= zMax)){
     deltaY = uMax * (1 / ((zMax - zMin) * (zMax - zMin)) * z * z - (2 * zMin) / ((zMax - zMin) * (zMax - zMin)) * z + (zMin * zMin) / ((zMax - zMin) * (zMax - zMin)));
     deltaZ = 10 * (-z + sqrt(z * z - 2 * y * deltaY - deltaY * deltaY));
     }
     else if ((z <= -zMin) && (x >= -zMax)){
     z = -z;
     deltaY = uMax * (1 / ((zMax - zMin) * (zMax - zMin)) * z * z - (2 * zMin) / ((zMax - zMin) * (zMax - zMin)) * z + (zMin * zMin) / ((zMax - zMin) * (zMax - zMin)));
     deltaZ = - 10 * (-z + sqrt(z * z - 2 * y * deltaY - deltaY * deltaY));
     }
     else {
     deltaY = 0;
     deltaZ = 0;
     }*/

    /*        // for own-3D-Propeller-CSMDummy (normal and 4xAMI) --> constant displacement
     double deltaZ = 0.0;*/

    return deltaZ;
}

static double meshClientTurbomachineryT(double space, int timestep) {
    double timestepfac = 0.02;
    double deltaXYZofT;

    if (timestep <= 0) {
        deltaXYZofT = 0;
    } else {
        deltaXYZofT = space * (timestep - 0) * timestepfac;
    }
    return deltaXYZofT;
}

static double EmperorMapperTest_02sin2pix_001cos2pix(double x, double y, double z) {
    return 0.01 * cos(2 * M_PI * x);
}

static double EmperorMapperTest_sphere_sin4xPlus4y(double x, double y, double z) {
    return sin(4.0 * x) + sin(4.0 * y);
}

static double EmperorMapperTest_sphere_sin3xPlus3y(double x, double y, double z) {
    return sin(3.0 * x) + sin(3.0 * y);
}

static double EmperorMapperTest_sphere_sin4xy(double x, double y, double z) {
    return sin(4.0 * x * y);
}

static double EmperorMapperTest_sphere_sin3xy(double x, double y, double z) {
    return sin(3.0 * x * y);
}

static double EmperorMapperTest_quarterCylinder_surfaceNormal_x(double x, double y, double z) {
    return -x;
}

static double EmperorMapperTest_quarterCylinder_surfaceNormal_y(double x, double y, double z) {
    return -y;
}

static double EmperorMapperTest_bladeRotation90_x(double x, double y, double z) {
    double r = sqrt(x * x + z * z);
    double alpha;
    if (fabs(x) < 1e-15)
        if (z > 0.0)
            alpha = M_PI / 2.0;
        else
            alpha = - M_PI / 2.0;
    else if (x > 0)
        alpha = atan(z/x);
    else
        alpha = atan(z/x) + M_PI;
    alpha += M_PI / 2.0; // rotation angle
    return r * cos(alpha) - x;
}

static double EmperorMapperTest_bladeRotation90_z(double x, double y, double z) {
    double r = sqrt(x * x + z * z);
    double alpha;
    if (fabs(x) < 1e-15)
        if (z > 0.0)
            alpha = M_PI / 2.0;
        else
            alpha = - M_PI / 2.0;
    else if (x > 0)
        alpha = atan(z/x);
    else
        alpha = atan(z/x) + M_PI;
    alpha += M_PI / 2.0; // rotation angle
    return r * sin(alpha) - z;
}
static double WindTurbine_Parabola_Y(double x, double y, double z) {
// for NREL UAE Phase VI Windturbine
	double uMax = 0.1;
	double xMin = 0.32; // > 0 !!!
	double xMax = 5.029; // > 0 !!!
	int n_tsteps = 500;
	double dt = 1e-3;
	double deltaY;
	double p = pow(xMax-xMin,2)/(4*uMax/n_tsteps/dt);

	    if ((x >= xMin) && (x <= xMax)) {
	    	deltaY = - pow(x-xMin,2)/(4*p);
	    } else if ((x <= -xMin) && (x >= -xMax)) {
	        x = -x;
	        deltaY = - pow(x-xMin,2)/(4*p);
	    } else {
	        deltaY = 0;
	    }
	    return deltaY;
}
static double WindTurbine_Parabola_T(double space, int timestep) {
    double timestepfac = 0.001;
    double deltaXYZofT;

    if (timestep <= 0) {
        deltaXYZofT = 0;
    } else {
        deltaXYZofT = space * timestep * timestepfac;
    }
    return deltaXYZofT;
}

#endif /* DATAFIELDFUNCTIONS_H_ */
