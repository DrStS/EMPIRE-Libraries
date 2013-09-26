#ifndef MMSFUNCTIONS_H_
#define MMSFUNCTIONS_H_

#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <string>

using namespace std;


static double mmsStructureCSourceX(double x, double y, double z) {
    double value=0.0;
        //value=0.02255;
    return value;
}
static double mmsStructureCSourceY(double x, double y, double z) {
    return 0.0;
}
static double mmsStructureCSourceZ(double x, double y, double z) {
    return 0.0;
}

static double mmsStructureCTargetX(double x, double y, double z) {
    double value=0.1*x;
    return value;
}
static double mmsStructureCTargetY(double x, double y, double z) {
    return 0.0;
}
static double mmsStructureCTargetZ(double x, double y, double z) {
    return 0.0;
}


static double mmsStructure00SourceX(double x, double y, double z) {
    double field=0.00;
        field=sin(x *M_PI) *M_PI *M_PI * fabs(0.1e1 + 0.1e0 * cos(x *M_PI) *M_PI) / (0.1e1 + 0.1e0 * cos(x *M_PI) *M_PI) * (0.350e5 * pow(0.1e1 + cos(x *M_PI) *M_PI * 0.100000000000000006e0, 0.2e1) - 0.100e5) * 0.250000000000000014e-1 + (0.1e1 + cos(x *M_PI) *M_PI * 0.100000000000000006e0) * fabs(0.1e1 + 0.1e0 * cos(x *M_PI) *M_PI) / (0.1e1 + 0.1e0 * cos(x *M_PI) *M_PI) * sin(x *M_PI) *M_PI *M_PI / (0.1e1 + 0.1e0 * cos(x *M_PI) *M_PI) * (0.350e5 * pow(0.1e1 + cos(x *M_PI) *M_PI * 0.100000000000000006e0, 0.2e1) - 0.100e5) * 0.250000000000000014e-1 + (0.1e1 + cos(x *M_PI) *M_PI * 0.100000000000000006e0) * fabs(0.1e1 + 0.1e0 * cos(x *M_PI) *M_PI) * pow(0.1e1 + 0.1e0 * cos(x *M_PI) *M_PI, -0.2e1) * (0.350e5 * pow(0.1e1 + cos(x *M_PI) *M_PI * 0.100000000000000006e0, 0.2e1) - 0.100e5) * sin(x *M_PI) *M_PI *M_PI * (-0.250000000000000014e-1) + pow(0.1e1 + cos(x *M_PI) *M_PI * 0.100000000000000006e0, 0.2e1) * fabs(0.1e1 + 0.1e0 * cos(x *M_PI) *M_PI) / (0.1e1 + 0.1e0 * cos(x *M_PI) *M_PI) * sin(x *M_PI) *M_PI *M_PI * 0.1750e4;
    return field;
}
static double mmsStructure00SourceY(double x, double y, double z) {
    return 0.0;
}
static double mmsStructure00SourceZ(double x, double y, double z) {
    return 0.0;
}

static double mmsStructure00TargetX(double x, double y, double z) {
    return 0.1*sin(x *M_PI);
}
static double mmsStructure00TargetY(double x, double y, double z) {
    return 0.0;
}
static double mmsStructure00TargetZ(double x, double y, double z) {
    return 0.0;
}

static double mmsStructure01SourceX(double x, double y, double z) {
    double value=0.0;
     value=cos(x * M_PI) * pow(M_PI, 0.3e1) * sin(x * M_PI) * 0.62500000000e-1;
    return value;
}
static double mmsStructure01SourceY(double x, double y, double z) {
    return 0.0;
}
static double mmsStructure01SourceZ(double x, double y, double z) {
    double value=0.0;
    value=sin(x * M_PI) * M_PI * M_PI * (pow(cos(x * M_PI), 0.2e1) * M_PI * M_PI * 0.31250000000e2 + 0.5e1) * 0.250000000000000005e-3 + pow(cos(x * M_PI), 0.2e1) * pow(M_PI, 0.4e1) * sin(x * M_PI) * 0.15625000000e-1;
    return value;
}
static double mmsStructure01TargetX(double x, double y, double z) {
    return 0.0;
}
static double mmsStructure01TargetY(double x, double y, double z) {
    return 0.0;
}
static double mmsStructure01TargetZ(double x, double y, double z) {
    return 0.25*sin(x *M_PI);
}

    static double mmsStructure03SourceX(double x, double y, double z) {
        double value=0.0;
        double pi=M_PI;
        value = 0.6868131868e-1 * cos(x * pi) * pow(pi, 0.3e1) * sin(x * pi);
        return value;
       }
    static double mmsStructure03SourceY(double x, double y, double z) {
           return 0.0;
       }
    static double mmsStructure03SourceZ(double x, double y, double z) {
        double value=0.0;
        double pi=M_PI;
        value= 0.1717032967e-1 * pow(pi, 0.4e1) * pow(cos(x * pi), 0.2e1) * sin(x * pi) + 0.5000000000e-11 * pi * pi * (0.1717032967e10 * pow(cos(x * pi), 0.2e1) * pi * pi + 0.250000000e9) * sin(x * pi);
        return value;
       }
    static double mmsStructure03TargetX(double x, double y, double z) {
           return 0.0;
       }
    static double mmsStructure03TargetY(double x, double y, double z) {
           return 0.0;
       }
    static double mmsStructure03TargetZ(double x, double y, double z) {
           return 0.25*sin(x *M_PI);
       }

     static double mmsStructure04SourceX(double x, double y, double z) {
     double value=0.0;
     double pi=M_PI;
     value = 0.6868131868e-1 * pow(pi, 0.3e1) * cos(x * pi) * sin(x * pi) - 0.1133241758e0 * pow(pi, 0.3e1) * cos(x * pi) * pow(cos(y * pi), 0.2e1) * sin(x * pi) + 0.2403846154e-1 * cos(x * pi) * pow(pi, 0.3e1) * pow(sin(y * pi), 0.2e1) * sin(x * pi);
         return value;
     }
  static double mmsStructure04SourceY(double x, double y, double z) {
      double pi=M_PI;
         return 0.2403846154e-1 * pow(sin(x * pi), 0.2e1) * pow(pi, 0.3e1) * sin(y * pi) * cos(y * pi) - 0.1133241758e0 * pow(cos(x * pi), 0.2e1) * pow(pi, 0.3e1) * sin(y * pi) * cos(y * pi) + 0.6868131868e-1 * pow(pi, 0.3e1) * cos(y * pi) * sin(y * pi);
     }
  static double mmsStructure04SourceZ(double x, double y, double z) {
     double value=0.0;
     double pi=M_PI;
     value= -0.1000000000e-10 * sin(x * pi) * pi * pi * sin(y * pi) * (-0.1717032967e10 * pi * pi * pow(cos(x * pi), 0.2e1) + 0.3434065933e10 * pi * pi * pow(cos(x * pi), 0.2e1) * pow(cos(y * pi), 0.2e1) - 0.1717032967e10 * pi * pi * pow(cos(y * pi), 0.2e1) - 0.250000000e9) + 0.5000000000e-11 * cos(x * pi) * pi * sin(y * pi) * (0.3434065934e10 * pow(pi, 0.3e1) * cos(x * pi) * sin(x * pi) - 0.6868131866e10 * pow(pi, 0.3e1) * cos(x * pi) * pow(cos(y * pi), 0.2e1) * sin(x * pi)) + 0.5000000000e-11 * pi * sin(x * pi) * cos(y * pi) * (-0.6868131866e10 * pow(cos(x * pi), 0.2e1) * pow(pi, 0.3e1) * sin(y * pi) * cos(y * pi) + 0.3434065934e10 * pow(pi, 0.3e1) * cos(y * pi) * sin(y * pi));
     return value;
     }
  static double mmsStructure04TargetX(double x, double y, double z) {
         return 0.0;
     }
  static double mmsStructure04TargetY(double x, double y, double z) {
         return 0.0;
     }
  static double mmsStructure04TargetZ(double x, double y, double z) {
      double pi=M_PI;
         return 0.25e0 * sin(x * pi) * sin(y * pi);
     }

    static double mmsStructure05SourceX(double x, double y, double z) {
        double value=0.0;
        value = cos(x * M_PI) * pow(M_PI, 0.3e1) * sin(x * M_PI) * 0.62500000000e-1 + cos(x * M_PI) * pow(M_PI, 0.3e1) * sin(y * M_PI) * 0.31250000000e-1;
        return value;
       }
    static double mmsStructure05SourceY(double x, double y, double z) {
        double value=0.0;
        value = sin(x * M_PI) * pow(M_PI, 0.3e1) * cos(y * M_PI) * 0.31250000000e-1 + cos(y * M_PI) * pow(M_PI, 0.3e1) * sin(y * M_PI) * 0.62500000000e-1;
        return value;
       }
    static double mmsStructure05SourceZ(double x, double y, double z) {
        double value=0.0;
        value = sin(x * M_PI) * M_PI * M_PI * (pow(cos(x * M_PI), 0.2e1) * M_PI * M_PI * 0.31250000000e2 + 0.5e1) * 0.250000000000000005e-3 + pow(cos(x * M_PI), 0.2e1) * pow(M_PI, 0.4e1) * sin(x * M_PI) * 0.15625000000e-1 + pow(cos(y * M_PI), 0.2e1) * pow(M_PI, 0.4e1) * sin(x * M_PI) * 0.78125000000e-2 + pow(cos(x * M_PI), 0.2e1) * pow(M_PI, 0.4e1) * sin(y * M_PI) * 0.78125000000e-2 + sin(y * M_PI) * M_PI * M_PI * (pow(cos(y * M_PI), 0.2e1) * M_PI * M_PI * 0.31250000000e2 + 0.5e1) * 0.250000000000000005e-3 + pow(cos(y * M_PI), 0.2e1) * pow(M_PI, 0.4e1) * sin(y * M_PI) * 0.15625000000e-1;
        return value;
       }
    static double mmsStructure05TargetX(double x, double y, double z) {
           return 0.0;
       }
    static double mmsStructure05TargetY(double x, double y, double z) {
           return 0.0;
       }
    static double mmsStructure05TargetZ(double x, double y, double z) {
           return 0.25*sin(x *M_PI)+0.25*sin(y*M_PI);
       }

    static double mmsStructure06SourceX(double x, double y, double z) {
        double value=0.0;
        value =cos(x * M_PI) * pow(M_PI, 0.3e1) * sin(x * M_PI) * 0.686813186812499921e-1 + pow(0.1e1 + 0.625e-1 * pow(fabs(cos(x * M_PI) * M_PI), 0.2e1) + 0.625e-1 * pow(fabs(cos(y * M_PI) * M_PI), 0.2e1), -0.2e1) * pow(cos(x * M_PI), 0.2e1) * pow(M_PI, 0.4e1) * fabs(cos(x * M_PI) * M_PI) * fabs(cos(x * M_PI) * M_PI) / (cos(x * M_PI) * M_PI) * sin(x * M_PI) * (-0.128777472539062516e-2) + 0.1e1 / (0.1e1 + 0.625e-1 * pow(fabs(cos(x * M_PI) * M_PI), 0.2e1) + 0.625e-1 * pow(fabs(cos(y * M_PI) * M_PI), 0.2e1)) * cos(x * M_PI) * pow(M_PI, 0.3e1) * sin(x * M_PI) * 0.206043956062500026e-1 + pow(0.1e1 + 0.625e-1 * pow(fabs(cos(x * M_PI) * M_PI), 0.2e1) + 0.625e-1 * pow(fabs(cos(y * M_PI) * M_PI), 0.2e1), -0.2e1) * pow(cos(y * M_PI), 0.2e1) * pow(M_PI, 0.4e1) * fabs(cos(x * M_PI) * M_PI) * fabs(cos(x * M_PI) * M_PI) / (cos(x * M_PI) * M_PI) * sin(x * M_PI) * (-0.128777472539062516e-2) + pow(0.1e1 + 0.625e-1 * pow(fabs(cos(x * M_PI) * M_PI), 0.2e1) + 0.625e-1 * pow(fabs(cos(y * M_PI) * M_PI), 0.2e1), -0.2e1) * fabs(cos(x * M_PI) * M_PI) * fabs(cos(x * M_PI) * M_PI) / (cos(x * M_PI) * M_PI) * sin(x * M_PI) * M_PI * M_PI * (-0.206043956062500026e-1) + cos(x * M_PI) * pow(M_PI, 0.3e1) * sin(y * M_PI) * 0.240384615374999999e-1;
        return value;
       }
    static double mmsStructure06SourceY(double x, double y, double z) {
        double value=0.0;
        value =sin(x * M_PI) * pow(M_PI, 0.3e1) * cos(y * M_PI) * 0.240384615374999999e-1 + cos(y * M_PI) * pow(M_PI, 0.3e1) * sin(y * M_PI) * 0.686813186812499921e-1 + pow(0.1e1 + 0.625e-1 * pow(fabs(cos(x * M_PI) * M_PI), 0.2e1) + 0.625e-1 * pow(fabs(cos(y * M_PI) * M_PI), 0.2e1), -0.2e1) * pow(cos(x * M_PI), 0.2e1) * pow(M_PI, 0.4e1) * fabs(cos(y * M_PI) * M_PI) * fabs(cos(y * M_PI) * M_PI) / (cos(y * M_PI) * M_PI) * sin(y * M_PI) * (-0.128777472539062516e-2) + pow(0.1e1 + 0.625e-1 * pow(fabs(cos(x * M_PI) * M_PI), 0.2e1) + 0.625e-1 * pow(fabs(cos(y * M_PI) * M_PI), 0.2e1), -0.2e1) * pow(cos(y * M_PI), 0.2e1) * pow(M_PI, 0.4e1) * fabs(cos(y * M_PI) * M_PI) * fabs(cos(y * M_PI) * M_PI) / (cos(y * M_PI) * M_PI) * sin(y * M_PI) * (-0.128777472539062516e-2) + 0.1e1 / (0.1e1 + 0.625e-1 * pow(fabs(cos(x * M_PI) * M_PI), 0.2e1) + 0.625e-1 * pow(fabs(cos(y * M_PI) * M_PI), 0.2e1)) * cos(y * M_PI) * pow(M_PI, 0.3e1) * sin(y * M_PI) * 0.206043956062500026e-1 + pow(0.1e1 + 0.625e-1 * pow(fabs(cos(x * M_PI) * M_PI), 0.2e1) + 0.625e-1 * pow(fabs(cos(y * M_PI) * M_PI), 0.2e1), -0.2e1) * fabs(cos(y * M_PI) * M_PI) * fabs(cos(y * M_PI) * M_PI) / (cos(y * M_PI) * M_PI) * sin(y * M_PI) * M_PI * M_PI * (-0.206043956062500026e-1);
        return value;
       }
    static double mmsStructure06SourceZ(double x, double y, double z) {
        double value=0.0;
        value =sin(x * M_PI) * M_PI * M_PI * (pow(cos(x * M_PI), 0.2e1) * M_PI * M_PI * 0.343406593406249954e2 + pow(cos(y * M_PI), 0.2e1) * M_PI * M_PI * 0.103021978031250008e2 + 0.1e1 / (0.1e1 + 0.625e-1 * pow(fabs(cos(x * M_PI) * M_PI), 0.2e1) + 0.625e-1 * pow(fabs(cos(y * M_PI) * M_PI), 0.2e1)) * pow(cos(x * M_PI), 0.2e1) * M_PI * M_PI * 0.103021978031250008e2 + 0.1e1 / (0.1e1 + 0.625e-1 * pow(fabs(cos(x * M_PI) * M_PI), 0.2e1) + 0.625e-1 * pow(fabs(cos(y * M_PI) * M_PI), 0.2e1)) * pow(cos(y * M_PI), 0.2e1) * M_PI * M_PI * 0.103021978031250008e2 + 0.1e1 / (0.1e1 + 0.625e-1 * pow(fabs(cos(x * M_PI) * M_PI), 0.2e1) + 0.625e-1 * pow(fabs(cos(y * M_PI) * M_PI), 0.2e1)) * 0.164835164850000012e3 - 0.1598351648e3) * 0.250000000000000005e-3 + cos(x * M_PI) * M_PI * (cos(x * M_PI) * pow(M_PI, 0.3e1) * sin(x * M_PI) * (-0.686813186812499907e2) + pow(0.1e1 + 0.625e-1 * pow(fabs(cos(x * M_PI) * M_PI), 0.2e1) + 0.625e-1 * pow(fabs(cos(y * M_PI) * M_PI), 0.2e1), -0.2e1) * pow(cos(x * M_PI), 0.2e1) * pow(M_PI, 0.4e1) * fabs(cos(x * M_PI) * M_PI) * fabs(cos(x * M_PI) * M_PI) / (cos(x * M_PI) * M_PI) * sin(x * M_PI) * 0.128777472539062510e1 + 0.1e1 / (0.1e1 + 0.625e-1 * pow(fabs(cos(x * M_PI) * M_PI), 0.2e1) + 0.625e-1 * pow(fabs(cos(y * M_PI) * M_PI), 0.2e1)) * cos(x * M_PI) * pow(M_PI, 0.3e1) * sin(x * M_PI) * (-0.206043956062500015e2) + pow(0.1e1 + 0.625e-1 * pow(fabs(cos(x * M_PI) * M_PI), 0.2e1) + 0.625e-1 * pow(fabs(cos(y * M_PI) * M_PI), 0.2e1), -0.2e1) * pow(cos(y * M_PI), 0.2e1) * pow(M_PI, 0.4e1) * fabs(cos(x * M_PI) * M_PI) * fabs(cos(x * M_PI) * M_PI) / (cos(x * M_PI) * M_PI) * sin(x * M_PI) * 0.128777472539062510e1 + pow(0.1e1 + 0.625e-1 * pow(fabs(cos(x * M_PI) * M_PI), 0.2e1) + 0.625e-1 * pow(fabs(cos(y * M_PI) * M_PI), 0.2e1), -0.2e1) * fabs(cos(x * M_PI) * M_PI) * fabs(cos(x * M_PI) * M_PI) / (cos(x * M_PI) * M_PI) * sin(x * M_PI) * M_PI * M_PI * 0.206043956062500015e2) * (-0.250000000000000005e-3) + pow(cos(y * M_PI), 0.2e1) * pow(M_PI, 0.4e1) * sin(x * M_PI) * 0.600961538437499998e-2 + pow(cos(x * M_PI), 0.2e1) * pow(M_PI, 0.4e1) * sin(y * M_PI) * 0.600961538437499998e-2 + sin(y * M_PI) * M_PI * M_PI * (pow(cos(x * M_PI), 0.2e1) * M_PI * M_PI * 0.103021978031250008e2 + pow(cos(y * M_PI), 0.2e1) * M_PI * M_PI * 0.343406593406249954e2 + 0.1e1 / (0.1e1 + 0.625e-1 * pow(fabs(cos(x * M_PI) * M_PI), 0.2e1) + 0.625e-1 * pow(fabs(cos(y * M_PI) * M_PI), 0.2e1)) * pow(cos(x * M_PI), 0.2e1) * M_PI * M_PI * 0.103021978031250008e2 + 0.1e1 / (0.1e1 + 0.625e-1 * pow(fabs(cos(x * M_PI) * M_PI), 0.2e1) + 0.625e-1 * pow(fabs(cos(y * M_PI) * M_PI), 0.2e1)) * pow(cos(y * M_PI), 0.2e1) * M_PI * M_PI * 0.103021978031250008e2 + 0.1e1 / (0.1e1 + 0.625e-1 * pow(fabs(cos(x * M_PI) * M_PI), 0.2e1) + 0.625e-1 * pow(fabs(cos(y * M_PI) * M_PI), 0.2e1)) * 0.164835164850000012e3 - 0.1598351648e3) * 0.250000000000000005e-3 + cos(y * M_PI) * M_PI * (cos(y * M_PI) * pow(M_PI, 0.3e1) * sin(y * M_PI) * (-0.686813186812499907e2) + pow(0.1e1 + 0.625e-1 * pow(fabs(cos(x * M_PI) * M_PI), 0.2e1) + 0.625e-1 * pow(fabs(cos(y * M_PI) * M_PI), 0.2e1), -0.2e1) * pow(cos(x * M_PI), 0.2e1) * pow(M_PI, 0.4e1) * fabs(cos(y * M_PI) * M_PI) * fabs(cos(y * M_PI) * M_PI) / (cos(y * M_PI) * M_PI) * sin(y * M_PI) * 0.128777472539062510e1 + pow(0.1e1 + 0.625e-1 * pow(fabs(cos(x * M_PI) * M_PI), 0.2e1) + 0.625e-1 * pow(fabs(cos(y * M_PI) * M_PI), 0.2e1), -0.2e1) * pow(cos(y * M_PI), 0.2e1) * pow(M_PI, 0.4e1) * fabs(cos(y * M_PI) * M_PI) * fabs(cos(y * M_PI) * M_PI) / (cos(y * M_PI) * M_PI) * sin(y * M_PI) * 0.128777472539062510e1 + 0.1e1 / (0.1e1 + 0.625e-1 * pow(fabs(cos(x * M_PI) * M_PI), 0.2e1) + 0.625e-1 * pow(fabs(cos(y * M_PI) * M_PI), 0.2e1)) * cos(y * M_PI) * pow(M_PI, 0.3e1) * sin(y * M_PI) * (-0.206043956062500015e2) + pow(0.1e1 + 0.625e-1 * pow(fabs(cos(x * M_PI) * M_PI), 0.2e1) + 0.625e-1 * pow(fabs(cos(y * M_PI) * M_PI), 0.2e1), -0.2e1) * fabs(cos(y * M_PI) * M_PI) * fabs(cos(y * M_PI) * M_PI) / (cos(y * M_PI) * M_PI) * sin(y * M_PI) * M_PI * M_PI * 0.206043956062500015e2) * (-0.250000000000000005e-3);
        return value;
       }
    static double mmsStructure06TargetX(double x, double y, double z) {
           return 0.0;
       }
    static double mmsStructure06TargetY(double x, double y, double z) {
           return 0.0;
       }
    static double mmsStructure06TargetZ(double x, double y, double z) {
           return 0.25*sin(x *M_PI)+0.25*sin(y*M_PI);
       }

       static double mmsStructure14SourceX(double x, double y, double z, double tau) {
              double value=0.0;
              double pi=M_PI;
              value=0.10e-1 * cos(x * pi) * pow(pi, 0.3e1) * sin(x * pi) - 0.10e-1 * cos(x * pi) * pow(pi, 0.3e1) * pow(cos(0.2500000000e0 * tau * pi), 0.2e1) * sin(x * pi);
              return value;
       }
      static double mmsStructure14SourceY(double x, double y, double z, double tau) {
             return 0.0;
       }
      static double mmsStructure14SourceZ(double x, double y, double z, double tau) {
             double value=0.0;
             double pi=M_PI;
             value=0.5e-3 * pi * (0.2e1 * cos(x * pi) * pow(pi, 0.3e1) * sin(x * pi) - 0.2e1 * cos(x * pi) * pow(pi, 0.3e1) * pow(cos(0.2500000000e0 * tau * pi), 0.2e1) * sin(x * pi)) * cos(x * pi) * sin(0.2500000000e0 * tau * pi) - 0.5e-3 * pi * pi * (-0.1e1 * pow(cos(x * pi), 0.2e1) * pi * pi + pow(cos(x * pi), 0.2e1) * pi * pi * pow(cos(0.2500000000e0 * tau * pi), 0.2e1) - 0.5e1) * sin(x * pi) * sin(0.2500000000e0 * tau * pi) - 0.6250000000e-2 * sin(x * pi) * pi * pi * sin(0.2500000000e0 * tau * pi);
             return value;
      }
     static double mmsStructure14TargetX(double x, double y, double z, double tau) {
                         return 0.0;
                     }
     static double mmsStructure14TargetY(double x, double y, double z, double tau) {
                         return 0.0;
                     }
     static double mmsStructure14TargetZ(double x, double y, double z, double tau) {
                         return 0.10*sin( x * M_PI )*sin( tau / 4. * M_PI );
                     }

     static double mmsStructure15SourceX(double x, double y, double z, double tau) {
                       double value=0.0;
                       value= cos(x * M_PI) * pow(M_PI, 0.3e1) * pow(sin(0.250e0 * tau * M_PI), 0.2e1) * sin(x * M_PI) * 0.109890109890000021e-1 + pow(0.1e1 + 0.1e-1 * pow(fabs(cos(x * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)), 0.2e1), -0.2e1) * pow(cos(x * M_PI), 0.2e1) * pow(M_PI, 0.4e1) * pow(sin(0.250e0 * tau * M_PI), 0.3e1) * fabs(cos(x * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)) * fabs(cos(x * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)) / (cos(x * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)) * sin(x * M_PI) * (-0.329670329700000123e-4) + 0.1e1 / (0.1e1 + 0.1e-1 * pow(fabs(cos(x * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)), 0.2e1)) * cos(x * M_PI) * pow(M_PI, 0.3e1) * pow(sin(0.250e0 * tau * M_PI), 0.2e1) * sin(x * M_PI) * 0.329670329700000120e-2 + pow(0.1e1 + 0.1e-1 * pow(fabs(cos(x * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)), 0.2e1), -0.2e1) * fabs(cos(x * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)) * fabs(cos(x * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)) / (cos(x * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)) * sin(x * M_PI) * M_PI * M_PI * sin(0.250e0 * tau * M_PI) * (-0.329670329700000077e-2);
                       return value;
                }
     static double mmsStructure15SourceY(double x, double y, double z, double tau) {
                      return 0.0;
        }
     static double mmsStructure15SourceZ(double x, double y, double z, double tau) {
                      double value=0.0;
                      value= sin(x * M_PI) * M_PI * M_PI * sin(0.250e0 * tau * M_PI) * (-0.139835164850000012e3 + pow(cos(x * M_PI), 0.2e1) * M_PI * M_PI * pow(sin(0.250e0 * tau * M_PI), 0.2e1) * 0.549450549450000114e1 + 0.1e1 / (0.1e1 + 0.1e-1 * pow(fabs(cos(x * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)), 0.2e1)) * pow(cos(x * M_PI), 0.2e1) * M_PI * M_PI * pow(sin(0.250e0 * tau * M_PI), 0.2e1) * 0.164835164850000049e1 + 0.1e1 / (0.1e1 + 0.1e-1 * pow(fabs(cos(x * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)), 0.2e1)) * 0.164835164850000012e3) * 0.100000000000000005e-3 + cos(x * M_PI) * M_PI * sin(0.250e0 * tau * M_PI) * (cos(x * M_PI) * pow(M_PI, 0.3e1) * pow(sin(0.250e0 * tau * M_PI), 0.2e1) * sin(x * M_PI) * (-0.109890109890000023e2) + pow(0.1e1 + 0.1e-1 * pow(fabs(cos(x * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)), 0.2e1), -0.2e1) * pow(cos(x * M_PI), 0.2e1) * pow(M_PI, 0.4e1) * pow(sin(0.250e0 * tau * M_PI), 0.3e1) * fabs(cos(x * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)) * fabs(cos(x * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)) / (cos(x * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)) * sin(x * M_PI) * 0.329670329700000111e-1 + 0.1e1 / (0.1e1 + 0.1e-1 * pow(fabs(cos(x * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)), 0.2e1)) * cos(x * M_PI) * pow(M_PI, 0.3e1) * pow(sin(0.250e0 * tau * M_PI), 0.2e1) * sin(x * M_PI) * (-0.329670329700000098e1) + pow(0.1e1 + 0.1e-1 * pow(fabs(cos(x * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)), 0.2e1), -0.2e1) * fabs(cos(x * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)) * fabs(cos(x * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)) / (cos(x * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)) * sin(x * M_PI) * M_PI * M_PI * sin(0.250e0 * tau * M_PI) * 0.329670329700000053e1) * (-0.100000000000000005e-3) - 0.625e-2 * sin(x * M_PI) * M_PI * M_PI * sin(0.250e0 * tau * M_PI);
                      return value;
               }
     static double mmsStructure15TargetX(double x, double y, double z, double tau) {
                                  return 0.0;
                              }
     static double mmsStructure15TargetY(double x, double y, double z, double tau) {
                                  return 0.0;
                              }
     static double mmsStructure15TargetZ(double x, double y, double z, double tau) {
                                  return 0.10*sin( x * M_PI )*sin( tau / 4. * M_PI );
                              }

     static double mmsStructure16SourceX(double x, double y, double z, double tau) {
        double value=0.0;
        double pi=M_PI;
          value=0.1098901099e-1 * pow(pi, 0.3e1) * cos(x * pi) * sin(x * pi) - 0.1098901099e-1 * pow(pi, 0.3e1) * cos(x * pi) * pow(cos(0.2500000000e0 * tau * pi), 0.2e1) * sin(x * pi) - 0.3846153846e-2 * pow(pi, 0.3e1) * cos(x * pi) * (-0.1e1 + pow(cos(0.2500000000e0 * tau * pi), 0.2e1)) * sin(y * pi);
            return value;
        }
     static double mmsStructure16SourceY(double x, double y, double z, double tau) {
         double value=0.0;
        double pi=M_PI;
          value=-0.3846153846e-2 * pow(pi, 0.3e1) * sin(x * pi) * (-0.1e1 + pow(cos(0.2500000000e0 * tau * pi), 0.2e1)) * cos(y * pi) + 0.1098901099e-1 * pow(pi, 0.3e1) * cos(y * pi) * sin(y * pi) - 0.1098901099e-1 * pow(pi, 0.3e1) * cos(y * pi) * pow(cos(0.2500000000e0 * tau * pi), 0.2e1) * sin(y * pi);
        return value;
        }
     static double mmsStructure16SourceZ(double x, double y, double z, double tau) {
        double value=0.0;
        double pi=M_PI;
        value=-0.2000000000e-12 * sin(x * pi) * pi * pi * sin(0.2500000000e0 * tau * pi) * (-0.2747252747e10 * pi * pi * pow(cos(x * pi), 0.2e1) + 0.2747252747e10 * pi * pi * pow(cos(x * pi), 0.2e1) * pow(cos(0.2500000000e0 * tau * pi), 0.2e1) - 0.2747252747e10 * pi * pi * pow(cos(y * pi), 0.2e1) + 0.2747252747e10 * pi * pi * pow(cos(y * pi), 0.2e1) * pow(cos(0.2500000000e0 * tau * pi), 0.2e1) - 0.1250000000e11) + 0.2000000000e-12 * cos(x * pi) * pi * sin(0.2500000000e0 * tau * pi) * (0.5494505494e10 * pow(pi, 0.3e1) * cos(x * pi) * sin(x * pi) - 0.5494505494e10 * pow(pi, 0.3e1) * cos(x * pi) * pow(cos(0.2500000000e0 * tau * pi), 0.2e1) * sin(x * pi)) - 0.2000000000e-12 * pi * pi * sin(y * pi) * sin(0.2500000000e0 * tau * pi) * (-0.2747252747e10 * pi * pi * pow(cos(x * pi), 0.2e1) + 0.2747252747e10 * pi * pi * pow(cos(x * pi), 0.2e1) * pow(cos(0.2500000000e0 * tau * pi), 0.2e1) - 0.2747252747e10 * pi * pi * pow(cos(y * pi), 0.2e1) + 0.2747252747e10 * pi * pi * pow(cos(y * pi), 0.2e1) * pow(cos(0.2500000000e0 * tau * pi), 0.2e1) - 0.1250000000e11) + 0.2000000000e-12 * pi * cos(y * pi) * sin(0.2500000000e0 * tau * pi) * (0.5494505494e10 * pow(pi, 0.3e1) * cos(y * pi) * sin(y * pi) - 0.5494505494e10 * pow(pi, 0.3e1) * cos(y * pi) * pow(cos(0.2500000000e0 * tau * pi), 0.2e1) * sin(y * pi)) - 0.6250000000e-2 * sin(x * pi) * sin(0.2500000000e0 * tau * pi) * pi * pi - 0.6250000000e-2 * sin(y * pi) * sin(0.2500000000e0 * tau * pi) * pi * pi;
        return value;
        }
     static double mmsStructure16TargetX(double x, double y, double z, double tau) {
            return 0.0;
        }
     static double mmsStructure16TargetY(double x, double y, double z, double tau) {
            return 0.0;
        }
     static double mmsStructure16TargetZ(double x, double y, double z, double tau) {
            return sin( tau / 4. * M_PI )*(0.1*sin(x *M_PI)+0.1*sin(y*M_PI));
        }

     static double mmsStructure17SourceX(double x, double y, double z, double tau) {
                double value=0.0;
                value=cos(x * M_PI) * pow(M_PI, 0.3e1) * pow(sin(0.250e0 * tau * M_PI), 0.2e1) * sin(x * M_PI) * 0.109890109890000021e-1 + pow(0.1e1 + 0.1e-1 * pow(fabs(cos(x * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)), 0.2e1) + 0.1e-1 * pow(fabs(cos(y * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)), 0.2e1), -0.2e1) * pow(cos(x * M_PI), 0.2e1) * pow(M_PI, 0.4e1) * pow(sin(0.250e0 * tau * M_PI), 0.3e1) * fabs(cos(x * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)) * fabs(cos(x * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)) / (cos(x * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)) * sin(x * M_PI) * (-0.329670329700000123e-4) + 0.1e1 / (0.1e1 + 0.1e-1 * pow(fabs(cos(x * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)), 0.2e1) + 0.1e-1 * pow(fabs(cos(y * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)), 0.2e1)) * cos(x * M_PI) * pow(M_PI, 0.3e1) * pow(sin(0.250e0 * tau * M_PI), 0.2e1) * sin(x * M_PI) * 0.329670329700000120e-2 + pow(0.1e1 + 0.1e-1 * pow(fabs(cos(x * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)), 0.2e1) + 0.1e-1 * pow(fabs(cos(y * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)), 0.2e1), -0.2e1) * pow(cos(y * M_PI), 0.2e1) * pow(M_PI, 0.4e1) * pow(sin(0.250e0 * tau * M_PI), 0.3e1) * fabs(cos(x * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)) * fabs(cos(x * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)) / (cos(x * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)) * sin(x * M_PI) * (-0.329670329700000123e-4) + pow(0.1e1 + 0.1e-1 * pow(fabs(cos(x * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)), 0.2e1) + 0.1e-1 * pow(fabs(cos(y * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)), 0.2e1), -0.2e1) * fabs(cos(x * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)) * fabs(cos(x * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)) / (cos(x * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)) * sin(x * M_PI) * M_PI * M_PI * sin(0.250e0 * tau * M_PI) * (-0.329670329700000077e-2) + cos(x * M_PI) * pow(M_PI, 0.3e1) * pow(sin(0.250e0 * tau * M_PI), 0.2e1) * sin(y * M_PI) * 0.384615384600000068e-2;
                    return value;
                }
    static double mmsStructure17SourceY(double x, double y, double z, double tau) {
                 double value=0.0;
                value=sin(x * M_PI) * pow(M_PI, 0.3e1) * pow(sin(0.250e0 * tau * M_PI), 0.2e1) * cos(y * M_PI) * 0.384615384600000068e-2 + cos(y * M_PI) * pow(M_PI, 0.3e1) * pow(sin(0.250e0 * tau * M_PI), 0.2e1) * sin(y * M_PI) * 0.109890109890000021e-1 + pow(0.1e1 + 0.1e-1 * pow(fabs(cos(x * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)), 0.2e1) + 0.1e-1 * pow(fabs(cos(y * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)), 0.2e1), -0.2e1) * pow(cos(x * M_PI), 0.2e1) * pow(M_PI, 0.4e1) * pow(sin(0.250e0 * tau * M_PI), 0.3e1) * fabs(cos(y * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)) * fabs(cos(y * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)) / (cos(y * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)) * sin(y * M_PI) * (-0.329670329700000123e-4) + pow(0.1e1 + 0.1e-1 * pow(fabs(cos(x * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)), 0.2e1) + 0.1e-1 * pow(fabs(cos(y * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)), 0.2e1), -0.2e1) * pow(cos(y * M_PI), 0.2e1) * pow(M_PI, 0.4e1) * pow(sin(0.250e0 * tau * M_PI), 0.3e1) * fabs(cos(y * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)) * fabs(cos(y * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)) / (cos(y * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)) * sin(y * M_PI) * (-0.329670329700000123e-4) + 0.1e1 / (0.1e1 + 0.1e-1 * pow(fabs(cos(x * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)), 0.2e1) + 0.1e-1 * pow(fabs(cos(y * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)), 0.2e1)) * cos(y * M_PI) * pow(M_PI, 0.3e1) * pow(sin(0.250e0 * tau * M_PI), 0.2e1) * sin(y * M_PI) * 0.329670329700000120e-2 + pow(0.1e1 + 0.1e-1 * pow(fabs(cos(x * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)), 0.2e1) + 0.1e-1 * pow(fabs(cos(y * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)), 0.2e1), -0.2e1) * fabs(cos(y * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)) * fabs(cos(y * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)) / (cos(y * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)) * sin(y * M_PI) * M_PI * M_PI * sin(0.250e0 * tau * M_PI) * (-0.329670329700000077e-2);
                return value;
                }
    static double mmsStructure17SourceZ(double x, double y, double z, double tau) {
                double value=0.0;
                value=sin(x * M_PI) * M_PI * M_PI * sin(0.250e0 * tau * M_PI) * (pow(cos(x * M_PI), 0.2e1) * M_PI * M_PI * pow(sin(0.250e0 * tau * M_PI), 0.2e1) * 0.549450549450000114e1 + pow(cos(y * M_PI), 0.2e1) * M_PI * M_PI * pow(sin(0.250e0 * tau * M_PI), 0.2e1) * 0.164835164850000049e1 + 0.1e1 / (0.1e1 + 0.1e-1 * pow(fabs(cos(x * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)), 0.2e1) + 0.1e-1 * pow(fabs(cos(y * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)), 0.2e1)) * pow(cos(x * M_PI), 0.2e1) * M_PI * M_PI * pow(sin(0.250e0 * tau * M_PI), 0.2e1) * 0.164835164850000049e1 + 0.1e1 / (0.1e1 + 0.1e-1 * pow(fabs(cos(x * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)), 0.2e1) + 0.1e-1 * pow(fabs(cos(y * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)), 0.2e1)) * pow(cos(y * M_PI), 0.2e1) * M_PI * M_PI * pow(sin(0.250e0 * tau * M_PI), 0.2e1) * 0.164835164850000049e1 + 0.1e1 / (0.1e1 + 0.1e-1 * pow(fabs(cos(x * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)), 0.2e1) + 0.1e-1 * pow(fabs(cos(y * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)), 0.2e1)) * 0.164835164850000012e3 - 0.1398351648e3) * 0.100000000000000005e-3 + cos(x * M_PI) * M_PI * sin(0.250e0 * tau * M_PI) * (cos(x * M_PI) * pow(M_PI, 0.3e1) * pow(sin(0.250e0 * tau * M_PI), 0.2e1) * sin(x * M_PI) * (-0.109890109890000023e2) + pow(0.1e1 + 0.1e-1 * pow(fabs(cos(x * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)), 0.2e1) + 0.1e-1 * pow(fabs(cos(y * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)), 0.2e1), -0.2e1) * pow(cos(x * M_PI), 0.2e1) * pow(M_PI, 0.4e1) * pow(sin(0.250e0 * tau * M_PI), 0.3e1) * fabs(cos(x * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)) * fabs(cos(x * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)) / (cos(x * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)) * sin(x * M_PI) * 0.329670329700000111e-1 + 0.1e1 / (0.1e1 + 0.1e-1 * pow(fabs(cos(x * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)), 0.2e1) + 0.1e-1 * pow(fabs(cos(y * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)), 0.2e1)) * cos(x * M_PI) * pow(M_PI, 0.3e1) * pow(sin(0.250e0 * tau * M_PI), 0.2e1) * sin(x * M_PI) * (-0.329670329700000098e1) + pow(0.1e1 + 0.1e-1 * pow(fabs(cos(x * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)), 0.2e1) + 0.1e-1 * pow(fabs(cos(y * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)), 0.2e1), -0.2e1) * pow(cos(y * M_PI), 0.2e1) * pow(M_PI, 0.4e1) * pow(sin(0.250e0 * tau * M_PI), 0.3e1) * fabs(cos(x * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)) * fabs(cos(x * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)) / (cos(x * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)) * sin(x * M_PI) * 0.329670329700000111e-1 + pow(0.1e1 + 0.1e-1 * pow(fabs(cos(x * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)), 0.2e1) + 0.1e-1 * pow(fabs(cos(y * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)), 0.2e1), -0.2e1) * fabs(cos(x * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)) * fabs(cos(x * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)) / (cos(x * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)) * sin(x * M_PI) * M_PI * M_PI * sin(0.250e0 * tau * M_PI) * 0.329670329700000053e1) * (-0.100000000000000005e-3) + pow(cos(y * M_PI), 0.2e1) * pow(M_PI, 0.4e1) * pow(sin(0.250e0 * tau * M_PI), 0.3e1) * sin(x * M_PI) * 0.384615384600000057e-3 + pow(cos(x * M_PI), 0.2e1) * pow(M_PI, 0.4e1) * pow(sin(0.250e0 * tau * M_PI), 0.3e1) * sin(y * M_PI) * 0.384615384600000057e-3 + sin(y * M_PI) * M_PI * M_PI * sin(0.250e0 * tau * M_PI) * (pow(cos(x * M_PI), 0.2e1) * M_PI * M_PI * pow(sin(0.250e0 * tau * M_PI), 0.2e1) * 0.164835164850000049e1 + pow(cos(y * M_PI), 0.2e1) * M_PI * M_PI * pow(sin(0.250e0 * tau * M_PI), 0.2e1) * 0.549450549450000114e1 + 0.1e1 / (0.1e1 + 0.1e-1 * pow(fabs(cos(x * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)), 0.2e1) + 0.1e-1 * pow(fabs(cos(y * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)), 0.2e1)) * pow(cos(x * M_PI), 0.2e1) * M_PI * M_PI * pow(sin(0.250e0 * tau * M_PI), 0.2e1) * 0.164835164850000049e1 + 0.1e1 / (0.1e1 + 0.1e-1 * pow(fabs(cos(x * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)), 0.2e1) + 0.1e-1 * pow(fabs(cos(y * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)), 0.2e1)) * pow(cos(y * M_PI), 0.2e1) * M_PI * M_PI * pow(sin(0.250e0 * tau * M_PI), 0.2e1) * 0.164835164850000049e1 + 0.1e1 / (0.1e1 + 0.1e-1 * pow(fabs(cos(x * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)), 0.2e1) + 0.1e-1 * pow(fabs(cos(y * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)), 0.2e1)) * 0.164835164850000012e3 - 0.1398351648e3) * 0.100000000000000005e-3 + cos(y * M_PI) * M_PI * sin(0.250e0 * tau * M_PI) * (cos(y * M_PI) * pow(M_PI, 0.3e1) * pow(sin(0.250e0 * tau * M_PI), 0.2e1) * sin(y * M_PI) * (-0.109890109890000023e2) + pow(0.1e1 + 0.1e-1 * pow(fabs(cos(x * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)), 0.2e1) + 0.1e-1 * pow(fabs(cos(y * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)), 0.2e1), -0.2e1) * pow(cos(x * M_PI), 0.2e1) * pow(M_PI, 0.4e1) * pow(sin(0.250e0 * tau * M_PI), 0.3e1) * fabs(cos(y * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)) * fabs(cos(y * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)) / (cos(y * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)) * sin(y * M_PI) * 0.329670329700000111e-1 + pow(0.1e1 + 0.1e-1 * pow(fabs(cos(x * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)), 0.2e1) + 0.1e-1 * pow(fabs(cos(y * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)), 0.2e1), -0.2e1) * pow(cos(y * M_PI), 0.2e1) * pow(M_PI, 0.4e1) * pow(sin(0.250e0 * tau * M_PI), 0.3e1) * fabs(cos(y * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)) * fabs(cos(y * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)) / (cos(y * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)) * sin(y * M_PI) * 0.329670329700000111e-1 + 0.1e1 / (0.1e1 + 0.1e-1 * pow(fabs(cos(x * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)), 0.2e1) + 0.1e-1 * pow(fabs(cos(y * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)), 0.2e1)) * cos(y * M_PI) * pow(M_PI, 0.3e1) * pow(sin(0.250e0 * tau * M_PI), 0.2e1) * sin(y * M_PI) * (-0.329670329700000098e1) + pow(0.1e1 + 0.1e-1 * pow(fabs(cos(x * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)), 0.2e1) + 0.1e-1 * pow(fabs(cos(y * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)), 0.2e1), -0.2e1) * fabs(cos(y * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)) * fabs(cos(y * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)) / (cos(y * M_PI) * M_PI * sin(0.250e0 * tau * M_PI)) * sin(y * M_PI) * M_PI * M_PI * sin(0.250e0 * tau * M_PI) * 0.329670329700000053e1) * (-0.100000000000000005e-3) - 0.625e-2 * sin(x * M_PI) * M_PI * M_PI * sin(0.250e0 * tau * M_PI) - 0.625e-2 * sin(y * M_PI) * M_PI * M_PI * sin(0.250e0 * tau * M_PI) + 0.250e-2 * sin(x * M_PI) * cos(0.250e0 * tau * M_PI) * M_PI + 0.250e-2 * sin(y * M_PI) * cos(0.250e0 * tau * M_PI) * M_PI;
                return value;
                }

    static double mmsStructure17TargetX(double x, double y, double z, double tau) {
                    return 0.0;
                }
    static double mmsStructure17TargetY(double x, double y, double z, double tau) {
                    return 0.0;
                }
    static double mmsStructure17TargetZ(double x, double y, double z, double tau) {
                    return sin( tau / 4. * M_PI )*(0.1*sin(x *M_PI)+0.1*sin(y*M_PI));
                }

    static double mmsStructure19SourceX(double x, double y, double z, double tau) {
         double value=0.0;
         double pi=M_PI;
         double bound=0.0;
         //with deformation: krätzig/basar 242/eq 5.2.7
         value= -0.1e-2 * pow(pow(0.2e1 + 0.4e1 * x * x - 0.4e1 * x, 0.2e1) / (0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1)), -0.1e1 / 0.2e1) * (pow(pow(0.2e1 + 0.4e1 * x * x - 0.4e1 * x, 0.2e1) / (0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1)), -0.1e1 / 0.2e1) * (-0.1250000000e1 * pow(0.1e1 + 0.2e1 * x * x - 0.2e1 * x, -0.2e1) * cos(x * pi) * pi * (-0.20e2 * sin(0.2500000000e0 * tau * pi) + 0.40e2 * x * sin(0.2500000000e0 * tau * pi) - 0.1e1 * cos(x * pi) * pi + cos(x * pi) * pi * pow(cos(0.2500000000e0 * tau * pi), 0.2e1)) + 0.1e1 * (0.25e2 / (0.2e1 + 0.4e1 * x * x - 0.4e1 * x) * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1) + 0.25e2 / (0.2e1 + 0.4e1 * x * x - 0.4e1 * x) * pow(0.1e1 - 0.2e1 * x, 0.2e1) * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1)) * (0.1e1 / (0.2e1 + 0.4e1 * x * x - 0.4e1 * x) * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1) + 0.1e1 / (0.2e1 + 0.4e1 * x * x - 0.4e1 * x) * pow(0.1e1 - 0.2e1 * x, 0.2e1) * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1))) * (0.2e1 * (0.2e1 + 0.4e1 * x * x - 0.4e1 * x) / (0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1)) * (0.8e1 * x - 0.4e1) - 0.4e1 * pow(0.2e1 + 0.4e1 * x * x - 0.4e1 * x, 0.2e1) * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.2e1) * fabs(0.2e1 * x - 0.1e1) * fabs(0.2e1 * x - 0.1e1) / (0.2e1 * x - 0.1e1)) / 0.2e1 + sqrt(pow(0.2e1 + 0.4e1 * x * x - 0.4e1 * x, 0.2e1) / (0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1))) * (0.2500000000e1 * pow(0.1e1 + 0.2e1 * x * x - 0.2e1 * x, -0.3e1) * cos(x * pi) * pi * (-0.20e2 * sin(0.2500000000e0 * tau * pi) + 0.40e2 * x * sin(0.2500000000e0 * tau * pi) - 0.1e1 * cos(x * pi) * pi + cos(x * pi) * pi * pow(cos(0.2500000000e0 * tau * pi), 0.2e1)) * (0.4e1 * x - 0.2e1) + 0.1250000000e1 * pow(0.1e1 + 0.2e1 * x * x - 0.2e1 * x, -0.2e1) * sin(x * pi) * pi * pi * (-0.20e2 * sin(0.2500000000e0 * tau * pi) + 0.40e2 * x * sin(0.2500000000e0 * tau * pi) - 0.1e1 * cos(x * pi) * pi + cos(x * pi) * pi * pow(cos(0.2500000000e0 * tau * pi), 0.2e1)) - 0.1250000000e1 * pow(0.1e1 + 0.2e1 * x * x - 0.2e1 * x, -0.2e1) * cos(x * pi) * pi * (0.40e2 * sin(0.2500000000e0 * tau * pi) + 0.1e1 * sin(x * pi) * pi * pi - sin(x * pi) * pi * pi * pow(cos(0.2500000000e0 * tau * pi), 0.2e1)) + 0.1e1 * (-0.25e2 * pow(0.2e1 + 0.4e1 * x * x - 0.4e1 * x, -0.2e1) * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1) * (0.8e1 * x - 0.4e1) - 0.5000000000e2 / (0.2e1 + 0.4e1 * x * x - 0.4e1 * x) * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.3e1 / 0.2e1) * fabs(0.2e1 * x - 0.1e1) * fabs(0.2e1 * x - 0.1e1) / (0.2e1 * x - 0.1e1) - 0.25e2 * pow(0.2e1 + 0.4e1 * x * x - 0.4e1 * x, -0.2e1) * pow(0.1e1 - 0.2e1 * x, 0.2e1) * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1) * (0.8e1 * x - 0.4e1) - 0.100e3 / (0.2e1 + 0.4e1 * x * x - 0.4e1 * x) * (0.1e1 - 0.2e1 * x) * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1) - 0.5000000000e2 / (0.2e1 + 0.4e1 * x * x - 0.4e1 * x) * pow(0.1e1 - 0.2e1 * x, 0.2e1) * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.3e1 / 0.2e1) * fabs(0.2e1 * x - 0.1e1) * fabs(0.2e1 * x - 0.1e1) / (0.2e1 * x - 0.1e1)) * (0.1e1 / (0.2e1 + 0.4e1 * x * x - 0.4e1 * x) * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1) + 0.1e1 / (0.2e1 + 0.4e1 * x * x - 0.4e1 * x) * pow(0.1e1 - 0.2e1 * x, 0.2e1) * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1)) + 0.1e1 * (0.25e2 / (0.2e1 + 0.4e1 * x * x - 0.4e1 * x) * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1) + 0.25e2 / (0.2e1 + 0.4e1 * x * x - 0.4e1 * x) * pow(0.1e1 - 0.2e1 * x, 0.2e1) * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1)) * (-0.1e1 * pow(0.2e1 + 0.4e1 * x * x - 0.4e1 * x, -0.2e1) * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1) * (0.8e1 * x - 0.4e1) - 0.2000000000e1 / (0.2e1 + 0.4e1 * x * x - 0.4e1 * x) * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.3e1 / 0.2e1) * fabs(0.2e1 * x - 0.1e1) * fabs(0.2e1 * x - 0.1e1) / (0.2e1 * x - 0.1e1) - pow(0.2e1 + 0.4e1 * x * x - 0.4e1 * x, -0.2e1) * pow(0.1e1 - 0.2e1 * x, 0.2e1) * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1) * (0.8e1 * x - 0.4e1) - 0.4e1 / (0.2e1 + 0.4e1 * x * x - 0.4e1 * x) * (0.1e1 - 0.2e1 * x) * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1) - 0.2000000000e1 / (0.2e1 + 0.4e1 * x * x - 0.4e1 * x) * pow(0.1e1 - 0.2e1 * x, 0.2e1) * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.3e1 / 0.2e1) * fabs(0.2e1 * x - 0.1e1) * fabs(0.2e1 * x - 0.1e1) / (0.2e1 * x - 0.1e1))));
         if (isnormal(value)==0){
         cout << "fx(x,y,z) value is bounded to "<< bound <<" at x=" << x << " and y= " <<y<<endl;
         return bound;}
         cout <<" fx(x,y,z) value is " << value << endl;
             return value;
           }
          static double mmsStructure19SourceY(double x, double y, double z, double tau) {
                       double value=0.0;
                       value=0.0;
                    return value;
                      }
          static double mmsStructure19SourceZ(double x, double y, double z, double tau) {
           double value=0.0;
           double pi=M_PI;
           double boundM=0.05;
           double boundB=0.0;
           //with deformation: krätzig/basar 242/eq 5.2.7
           value=-0.1e-2 * pow(pow(0.2e1 + 0.4e1 * x * x - 0.4e1 * x, 0.2e1) / (0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1)), -0.1e1 / 0.2e1) * (pow(pow(0.2e1 + 0.4e1 * x * x - 0.4e1 * x, 0.2e1) / (0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1)), -0.1e1 / 0.2e1) * (-0.1250000000e1 * pow(0.1e1 + 0.2e1 * x * x - 0.2e1 * x, -0.2e1) * cos(x * pi) * pi * (-0.20e2 * sin(0.2500000000e0 * tau * pi) + 0.40e2 * x * sin(0.2500000000e0 * tau * pi) - 0.1e1 * cos(x * pi) * pi + cos(x * pi) * pi * pow(cos(0.2500000000e0 * tau * pi), 0.2e1)) + (0.25e2 / (0.2e1 + 0.4e1 * x * x - 0.4e1 * x) * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1) + 0.25e2 / (0.2e1 + 0.4e1 * x * x - 0.4e1 * x) * pow(0.1e1 - 0.2e1 * x, 0.2e1) * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1)) * (0.1e1 / (0.2e1 + 0.4e1 * x * x - 0.4e1 * x) * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1) + 0.1e1 / (0.2e1 + 0.4e1 * x * x - 0.4e1 * x) * pow(0.1e1 - 0.2e1 * x, 0.2e1) * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1))) * (-0.2e1 * x + 0.1e1 + 0.1e0 * cos(x * pi) * pi * sin(0.2500000000e0 * tau * pi)) * (0.2e1 * (0.2e1 + 0.4e1 * x * x - 0.4e1 * x) / (0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1)) * (0.8e1 * x - 0.4e1) - 0.4e1 * pow(0.2e1 + 0.4e1 * x * x - 0.4e1 * x, 0.2e1) * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.2e1) * fabs(0.2e1 * x - 0.1e1) * fabs(0.2e1 * x - 0.1e1) / (0.2e1 * x - 0.1e1)) / 0.2e1 + sqrt(pow(0.2e1 + 0.4e1 * x * x - 0.4e1 * x, 0.2e1) / (0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1))) * (0.2500000000e1 * pow(0.1e1 + 0.2e1 * x * x - 0.2e1 * x, -0.3e1) * cos(x * pi) * pi * (-0.20e2 * sin(0.2500000000e0 * tau * pi) + 0.40e2 * x * sin(0.2500000000e0 * tau * pi) - 0.1e1 * cos(x * pi) * pi + cos(x * pi) * pi * pow(cos(0.2500000000e0 * tau * pi), 0.2e1)) * (0.4e1 * x - 0.2e1) + 0.1250000000e1 * pow(0.1e1 + 0.2e1 * x * x - 0.2e1 * x, -0.2e1) * sin(x * pi) * pi * pi * (-0.20e2 * sin(0.2500000000e0 * tau * pi) + 0.40e2 * x * sin(0.2500000000e0 * tau * pi) - 0.1e1 * cos(x * pi) * pi + cos(x * pi) * pi * pow(cos(0.2500000000e0 * tau * pi), 0.2e1)) - 0.1250000000e1 * pow(0.1e1 + 0.2e1 * x * x - 0.2e1 * x, -0.2e1) * cos(x * pi) * pi * (0.40e2 * sin(0.2500000000e0 * tau * pi) + 0.1e1 * sin(x * pi) * pi * pi - sin(x * pi) * pi * pi * pow(cos(0.2500000000e0 * tau * pi), 0.2e1)) + (-0.25e2 * pow(0.2e1 + 0.4e1 * x * x - 0.4e1 * x, -0.2e1) * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1) * (0.8e1 * x - 0.4e1) - 0.5000000000e2 / (0.2e1 + 0.4e1 * x * x - 0.4e1 * x) * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.3e1 / 0.2e1) * fabs(0.2e1 * x - 0.1e1) * fabs(0.2e1 * x - 0.1e1) / (0.2e1 * x - 0.1e1) - 0.25e2 * pow(0.2e1 + 0.4e1 * x * x - 0.4e1 * x, -0.2e1) * pow(0.1e1 - 0.2e1 * x, 0.2e1) * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1) * (0.8e1 * x - 0.4e1) - 0.100e3 / (0.2e1 + 0.4e1 * x * x - 0.4e1 * x) * (0.1e1 - 0.2e1 * x) * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1) - 0.5000000000e2 / (0.2e1 + 0.4e1 * x * x - 0.4e1 * x) * pow(0.1e1 - 0.2e1 * x, 0.2e1) * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.3e1 / 0.2e1) * fabs(0.2e1 * x - 0.1e1) * fabs(0.2e1 * x - 0.1e1) / (0.2e1 * x - 0.1e1)) * (0.1e1 / (0.2e1 + 0.4e1 * x * x - 0.4e1 * x) * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1) + 0.1e1 / (0.2e1 + 0.4e1 * x * x - 0.4e1 * x) * pow(0.1e1 - 0.2e1 * x, 0.2e1) * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1)) + (0.25e2 / (0.2e1 + 0.4e1 * x * x - 0.4e1 * x) * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1) + 0.25e2 / (0.2e1 + 0.4e1 * x * x - 0.4e1 * x) * pow(0.1e1 - 0.2e1 * x, 0.2e1) * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1)) * (-0.1e1 * pow(0.2e1 + 0.4e1 * x * x - 0.4e1 * x, -0.2e1) * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1) * (0.8e1 * x - 0.4e1) - 0.2000000000e1 / (0.2e1 + 0.4e1 * x * x - 0.4e1 * x) * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.3e1 / 0.2e1) * fabs(0.2e1 * x - 0.1e1) * fabs(0.2e1 * x - 0.1e1) / (0.2e1 * x - 0.1e1) - pow(0.2e1 + 0.4e1 * x * x - 0.4e1 * x, -0.2e1) * pow(0.1e1 - 0.2e1 * x, 0.2e1) * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1) * (0.8e1 * x - 0.4e1) - 0.4e1 / (0.2e1 + 0.4e1 * x * x - 0.4e1 * x) * (0.1e1 - 0.2e1 * x) * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1) - 0.2000000000e1 / (0.2e1 + 0.4e1 * x * x - 0.4e1 * x) * pow(0.1e1 - 0.2e1 * x, 0.2e1) * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.3e1 / 0.2e1) * fabs(0.2e1 * x - 0.1e1) * fabs(0.2e1 * x - 0.1e1) / (0.2e1 * x - 0.1e1))) * (-0.2e1 * x + 0.1e1 + 0.1e0 * cos(x * pi) * pi * sin(0.2500000000e0 * tau * pi)) + sqrt(pow(0.2e1 + 0.4e1 * x * x - 0.4e1 * x, 0.2e1) / (0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1))) * (-0.1250000000e1 * pow(0.1e1 + 0.2e1 * x * x - 0.2e1 * x, -0.2e1) * cos(x * pi) * pi * (-0.20e2 * sin(0.2500000000e0 * tau * pi) + 0.40e2 * x * sin(0.2500000000e0 * tau * pi) - 0.1e1 * cos(x * pi) * pi + cos(x * pi) * pi * pow(cos(0.2500000000e0 * tau * pi), 0.2e1)) + (0.25e2 / (0.2e1 + 0.4e1 * x * x - 0.4e1 * x) * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1) + 0.25e2 / (0.2e1 + 0.4e1 * x * x - 0.4e1 * x) * pow(0.1e1 - 0.2e1 * x, 0.2e1) * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1)) * (0.1e1 / (0.2e1 + 0.4e1 * x * x - 0.4e1 * x) * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1) + 0.1e1 / (0.2e1 + 0.4e1 * x * x - 0.4e1 * x) * pow(0.1e1 - 0.2e1 * x, 0.2e1) * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1))) * (-0.2e1 - 0.1e0 * sin(x * pi) * pi * pi * sin(0.2500000000e0 * tau * pi))) - 0.6250000000e-2 * sin(x * pi) * pi * pi * sin(0.2500000000e0 * tau * pi);
           if (isnormal(value)==0){
               if(x==0.0 || x==1.0){
                   cout << "fz(x,y,z) value is bounded to " << boundB <<" at x=" << x << " and y= " <<y<<endl;
               return boundB;
               }
               else{
           cout << "fz(x,y,z) value is bounded to " << boundM <<" at x=" << x << " and y= " <<y<<endl;
           return boundM;}}
           cout <<"fz(x,y,z) value is " << value << endl;
           return value;
             }

          static double mmsStructure19TargetX(double x, double y, double z, double tau) {
                          return 0.0;
                      }
          static double mmsStructure19TargetY(double x, double y, double z, double tau) {
                          return 0.0;
                      }
          static double mmsStructure19TargetZ(double x, double y, double z, double tau) {
                          return sin( tau / 4. * M_PI )*0.1*sin(x *M_PI);
                          //return 0;
                      }
          static double mmsStructure20SourceX(double x, double y, double z, double tau) {
                    return 0.0;
                      }
          static double mmsStructure20SourceY(double x, double y, double z, double tau) {
                       double value=0.0;
                    value=0.0;
                    return value;
                      }
          static double mmsStructure20SourceZ(double x, double y, double z, double tau) {
                    double value=0.0;
                    double pi=M_PI;
                    value= -0.6250000000e-2 * x * sin(0.2500000000e0 * tau * pi) * pi * pi;
                    return value;
                      }
          static double mmsStructure20TargetX(double x, double y, double z, double tau) {
                          return 0.0;
                      }
          static double mmsStructure20TargetY(double x, double y, double z, double tau) {
                          return 0.0;
                      }
          static double mmsStructure20TargetZ(double x, double y, double z, double tau) {
                          return 0.10*x* sin( tau / 4. * M_PI );
                      }

          static double mmsStructure21SourceX(double x, double y, double z, double tau) {
                      double value=0.0;
                      double pi=M_PI;
                      value= sin(x * pi) * pi * pi * (0.10e2 * sin(0.2500000000e0 * tau * pi) + cos(x * pi) * pi - 0.1e1 * cos(x * pi) * pi * pow(cos(0.2500000000e0 * tau * pi), 0.2e1)) * 0.351648351600000004e-2 + cos(x * pi) * pi * (-sin(x * pi) * pi * pi + 0.1e1 * sin(x * pi) * pi * pi * pow(cos(0.2500000000e0 * tau * pi), 0.2e1)) * (-0.351648351600000004e-2);
                      if (isnormal(value)==0){
                      cout << "x value is bounded to 0.0" <<endl;
                      return 0.0;}
                      cout <<" xvalue is " << value << endl;
                          return value;
                      }
          static double mmsStructure21SourceY(double x, double y, double z, double tau) {
                       double value=0.0;
                      value=0.0;
                      return value;
                      }
          static double mmsStructure21SourceZ(double x, double y, double z, double tau) {
                      double value=0.0;
                      double pi=M_PI;
                      value= (-0.3516483516e1 * sin(x * pi) * pi * pi * (0.10e2 * sin(0.2500000000e0 * tau * pi) + cos(x * pi) * pi - 0.1e1 * cos(x * pi) * pi * pow(cos(0.2500000000e0 * tau * pi), 0.2e1)) + 0.3516483516e1 * cos(x * pi) * pi * (-sin(x * pi) * pi * pi + 0.1e1 * sin(x * pi) * pi * pi * pow(cos(0.2500000000e0 * tau * pi), 0.2e1))) * (0.5e0 + 0.1e0 * cos(x * pi) * pi * sin(0.2500000000e0 * tau * pi)) * (-0.100000000000000002e-2) + (0.3516483516e1 * cos(x * pi) * pi * (0.10e2 * sin(0.2500000000e0 * tau * pi) + cos(x * pi) * pi - 0.1e1 * cos(x * pi) * pi * pow(cos(0.2500000000e0 * tau * pi), 0.2e1)) + 0.799999999642379862e2) * sin(x * pi) * sin(0.2500000000e0 * tau * pi) * pi * pi * 0.100000000000000005e-3 - 0.6250000000e-2 * sin(x * pi) * pi * pi * sin(0.2500000000e0 * tau * pi);
                      if (isnormal(value)==0){
                      cout << "z value is bounded to 0.0" <<endl;
                      return 0.0;}
                      cout <<"z value is " << value << endl;
                      return value;
                      }
          static double mmsStructure21TargetX(double x, double y, double z, double tau) {
                          return 0.0;
                      }
          static double mmsStructure21TargetY(double x, double y, double z, double tau) {
                          return 0.0;
                      }
          static double mmsStructure21TargetZ(double x, double y, double z, double tau) {
                          return sin( tau / 4. * M_PI )*0.1*sin(x *M_PI);
                      }

          static double mmsStructure22SourceX(double x, double y, double z, double tau) {
                      double value=0.0;
                      double pi=M_PI;
                      //with Sps=25
                      value= -0.1e-2 * pow(pow(0.2e1 + 0.4e1 * x * x - 0.4e1 * x, 0.2e1) / (0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1)), -0.1e1 / 0.2e1) * (pow(pow(0.2e1 + 0.4e1 * x * x - 0.4e1 * x, 0.2e1) / (0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1)), -0.1e1 / 0.2e1) * (-0.1250000000e1 * pow(0.1e1 + 0.2e1 * x * x - 0.2e1 * x, -0.2e1) * cos(x * pi) * pi * (-0.20e2 * sin(0.2500000000e0 * tau * pi) + 0.40e2 * x * sin(0.2500000000e0 * tau * pi) - 0.1e1 * cos(x * pi) * pi + cos(x * pi) * pi * pow(cos(0.2500000000e0 * tau * pi), 0.2e1)) + 0.1e1 * (0.250e2 * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1) / (0.2e1 + 0.4e1 * x * x - 0.4e1 * x) + 0.250e2 * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1) * pow(-0.2e1 * x + 0.1e1, 0.2e1) / (0.2e1 + 0.4e1 * x * x - 0.4e1 * x)) * (0.1e1 * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1) / (0.2e1 + 0.4e1 * x * x - 0.4e1 * x) + pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1) * pow(-0.2e1 * x + 0.1e1, 0.2e1) / (0.2e1 + 0.4e1 * x * x - 0.4e1 * x))) * (0.2e1 * (0.2e1 + 0.4e1 * x * x - 0.4e1 * x) / (0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1)) * (0.8e1 * x - 0.4e1) - 0.4e1 * pow(0.2e1 + 0.4e1 * x * x - 0.4e1 * x, 0.2e1) * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.2e1) * fabs(0.2e1 * x - 0.1e1) * fabs(0.2e1 * x - 0.1e1) / (0.2e1 * x - 0.1e1)) / 0.2e1 + sqrt(pow(0.2e1 + 0.4e1 * x * x - 0.4e1 * x, 0.2e1) / (0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1))) * (0.2500000000e1 * pow(0.1e1 + 0.2e1 * x * x - 0.2e1 * x, -0.3e1) * cos(x * pi) * pi * (-0.20e2 * sin(0.2500000000e0 * tau * pi) + 0.40e2 * x * sin(0.2500000000e0 * tau * pi) - 0.1e1 * cos(x * pi) * pi + cos(x * pi) * pi * pow(cos(0.2500000000e0 * tau * pi), 0.2e1)) * (0.4e1 * x - 0.2e1) + 0.1250000000e1 * pow(0.1e1 + 0.2e1 * x * x - 0.2e1 * x, -0.2e1) * sin(x * pi) * pi * pi * (-0.20e2 * sin(0.2500000000e0 * tau * pi) + 0.40e2 * x * sin(0.2500000000e0 * tau * pi) - 0.1e1 * cos(x * pi) * pi + cos(x * pi) * pi * pow(cos(0.2500000000e0 * tau * pi), 0.2e1)) - 0.1250000000e1 * pow(0.1e1 + 0.2e1 * x * x - 0.2e1 * x, -0.2e1) * cos(x * pi) * pi * (0.40e2 * sin(0.2500000000e0 * tau * pi) + 0.1e1 * sin(x * pi) * pi * pi - sin(x * pi) * pi * pi * pow(cos(0.2500000000e0 * tau * pi), 0.2e1)) + 0.1e1 * (-0.5000000000e2 * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.3e1 / 0.2e1) / (0.2e1 + 0.4e1 * x * x - 0.4e1 * x) * fabs(0.2e1 * x - 0.1e1) * fabs(0.2e1 * x - 0.1e1) / (0.2e1 * x - 0.1e1) - 0.250e2 * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1) * pow(0.2e1 + 0.4e1 * x * x - 0.4e1 * x, -0.2e1) * (0.8e1 * x - 0.4e1) - 0.5000000000e2 * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.3e1 / 0.2e1) * pow(-0.2e1 * x + 0.1e1, 0.2e1) / (0.2e1 + 0.4e1 * x * x - 0.4e1 * x) * fabs(0.2e1 * x - 0.1e1) * fabs(0.2e1 * x - 0.1e1) / (0.2e1 * x - 0.1e1) - 0.1000e3 * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1) * (-0.2e1 * x + 0.1e1) / (0.2e1 + 0.4e1 * x * x - 0.4e1 * x) - 0.250e2 * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1) * pow(-0.2e1 * x + 0.1e1, 0.2e1) * pow(0.2e1 + 0.4e1 * x * x - 0.4e1 * x, -0.2e1) * (0.8e1 * x - 0.4e1)) * (0.1e1 * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1) / (0.2e1 + 0.4e1 * x * x - 0.4e1 * x) + pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1) * pow(-0.2e1 * x + 0.1e1, 0.2e1) / (0.2e1 + 0.4e1 * x * x - 0.4e1 * x)) + 0.1e1 * (0.250e2 * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1) / (0.2e1 + 0.4e1 * x * x - 0.4e1 * x) + 0.250e2 * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1) * pow(-0.2e1 * x + 0.1e1, 0.2e1) / (0.2e1 + 0.4e1 * x * x - 0.4e1 * x)) * (-0.2000000000e1 * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.3e1 / 0.2e1) / (0.2e1 + 0.4e1 * x * x - 0.4e1 * x) * fabs(0.2e1 * x - 0.1e1) * fabs(0.2e1 * x - 0.1e1) / (0.2e1 * x - 0.1e1) - 0.1e1 * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1) * pow(0.2e1 + 0.4e1 * x * x - 0.4e1 * x, -0.2e1) * (0.8e1 * x - 0.4e1) - 0.2000000000e1 * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.3e1 / 0.2e1) * pow(-0.2e1 * x + 0.1e1, 0.2e1) / (0.2e1 + 0.4e1 * x * x - 0.4e1 * x) * fabs(0.2e1 * x - 0.1e1) * fabs(0.2e1 * x - 0.1e1) / (0.2e1 * x - 0.1e1) - 0.4e1 * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1) * (-0.2e1 * x + 0.1e1) / (0.2e1 + 0.4e1 * x * x - 0.4e1 * x) - pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1) * pow(-0.2e1 * x + 0.1e1, 0.2e1) * pow(0.2e1 + 0.4e1 * x * x - 0.4e1 * x, -0.2e1) * (0.8e1 * x - 0.4e1))));
                      if (isnormal(value)==0){
                      cout << "fx(x,y,z) value is bounded to 0.0 at x=" << x << " and y= " <<y<<endl;
                      return 0.0;}
                      cout <<" fx(x,y,z) value is " << value << endl;
                      return value;
                     }
         static double mmsStructure22SourceY(double x, double y, double z, double tau) {
                      double value=0.0;
                      value=0.0;
                      return value;
                     }
         static double mmsStructure22SourceZ(double x, double y, double z, double tau) {
                      double value=0.0;
                      double pi=M_PI;
                      value=-0.1e-2 * pow(pow(0.2e1 + 0.4e1 * x * x - 0.4e1 * x, 0.2e1) / (0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1)), -0.1e1 / 0.2e1) * (pow(pow(0.2e1 + 0.4e1 * x * x - 0.4e1 * x, 0.2e1) / (0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1)), -0.1e1 / 0.2e1) * (-0.1250000000e1 * pow(0.1e1 + 0.2e1 * x * x - 0.2e1 * x, -0.2e1) * cos(x * pi) * pi * (-0.20e2 * sin(0.2500000000e0 * tau * pi) + 0.40e2 * x * sin(0.2500000000e0 * tau * pi) - 0.1e1 * cos(x * pi) * pi + cos(x * pi) * pi * pow(cos(0.2500000000e0 * tau * pi), 0.2e1)) + (0.250e2 * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1) / (0.2e1 + 0.4e1 * x * x - 0.4e1 * x) + 0.250e2 * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1) * pow(-0.2e1 * x + 0.1e1, 0.2e1) / (0.2e1 + 0.4e1 * x * x - 0.4e1 * x)) * (0.1e1 * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1) / (0.2e1 + 0.4e1 * x * x - 0.4e1 * x) + pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1) * pow(-0.2e1 * x + 0.1e1, 0.2e1) / (0.2e1 + 0.4e1 * x * x - 0.4e1 * x))) * (-0.2e1 * x + 0.1e1 + 0.1e0 * cos(x * pi) * pi * sin(0.2500000000e0 * tau * pi)) * (0.2e1 * (0.2e1 + 0.4e1 * x * x - 0.4e1 * x) / (0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1)) * (0.8e1 * x - 0.4e1) - 0.4e1 * pow(0.2e1 + 0.4e1 * x * x - 0.4e1 * x, 0.2e1) * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.2e1) * fabs(0.2e1 * x - 0.1e1) * fabs(0.2e1 * x - 0.1e1) / (0.2e1 * x - 0.1e1)) / 0.2e1 + sqrt(pow(0.2e1 + 0.4e1 * x * x - 0.4e1 * x, 0.2e1) / (0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1))) * (0.2500000000e1 * pow(0.1e1 + 0.2e1 * x * x - 0.2e1 * x, -0.3e1) * cos(x * pi) * pi * (-0.20e2 * sin(0.2500000000e0 * tau * pi) + 0.40e2 * x * sin(0.2500000000e0 * tau * pi) - 0.1e1 * cos(x * pi) * pi + cos(x * pi) * pi * pow(cos(0.2500000000e0 * tau * pi), 0.2e1)) * (0.4e1 * x - 0.2e1) + 0.1250000000e1 * pow(0.1e1 + 0.2e1 * x * x - 0.2e1 * x, -0.2e1) * sin(x * pi) * pi * pi * (-0.20e2 * sin(0.2500000000e0 * tau * pi) + 0.40e2 * x * sin(0.2500000000e0 * tau * pi) - 0.1e1 * cos(x * pi) * pi + cos(x * pi) * pi * pow(cos(0.2500000000e0 * tau * pi), 0.2e1)) - 0.1250000000e1 * pow(0.1e1 + 0.2e1 * x * x - 0.2e1 * x, -0.2e1) * cos(x * pi) * pi * (0.40e2 * sin(0.2500000000e0 * tau * pi) + 0.1e1 * sin(x * pi) * pi * pi - sin(x * pi) * pi * pi * pow(cos(0.2500000000e0 * tau * pi), 0.2e1)) + (-0.5000000000e2 * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.3e1 / 0.2e1) / (0.2e1 + 0.4e1 * x * x - 0.4e1 * x) * fabs(0.2e1 * x - 0.1e1) * fabs(0.2e1 * x - 0.1e1) / (0.2e1 * x - 0.1e1) - 0.250e2 * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1) * pow(0.2e1 + 0.4e1 * x * x - 0.4e1 * x, -0.2e1) * (0.8e1 * x - 0.4e1) - 0.5000000000e2 * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.3e1 / 0.2e1) * pow(-0.2e1 * x + 0.1e1, 0.2e1) / (0.2e1 + 0.4e1 * x * x - 0.4e1 * x) * fabs(0.2e1 * x - 0.1e1) * fabs(0.2e1 * x - 0.1e1) / (0.2e1 * x - 0.1e1) - 0.1000e3 * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1) * (-0.2e1 * x + 0.1e1) / (0.2e1 + 0.4e1 * x * x - 0.4e1 * x) - 0.250e2 * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1) * pow(-0.2e1 * x + 0.1e1, 0.2e1) * pow(0.2e1 + 0.4e1 * x * x - 0.4e1 * x, -0.2e1) * (0.8e1 * x - 0.4e1)) * (0.1e1 * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1) / (0.2e1 + 0.4e1 * x * x - 0.4e1 * x) + pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1) * pow(-0.2e1 * x + 0.1e1, 0.2e1) / (0.2e1 + 0.4e1 * x * x - 0.4e1 * x)) + (0.250e2 * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1) / (0.2e1 + 0.4e1 * x * x - 0.4e1 * x) + 0.250e2 * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1) * pow(-0.2e1 * x + 0.1e1, 0.2e1) / (0.2e1 + 0.4e1 * x * x - 0.4e1 * x)) * (-0.2000000000e1 * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.3e1 / 0.2e1) / (0.2e1 + 0.4e1 * x * x - 0.4e1 * x) * fabs(0.2e1 * x - 0.1e1) * fabs(0.2e1 * x - 0.1e1) / (0.2e1 * x - 0.1e1) - 0.1e1 * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1) * pow(0.2e1 + 0.4e1 * x * x - 0.4e1 * x, -0.2e1) * (0.8e1 * x - 0.4e1) - 0.2000000000e1 * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.3e1 / 0.2e1) * pow(-0.2e1 * x + 0.1e1, 0.2e1) / (0.2e1 + 0.4e1 * x * x - 0.4e1 * x) * fabs(0.2e1 * x - 0.1e1) * fabs(0.2e1 * x - 0.1e1) / (0.2e1 * x - 0.1e1) - 0.4e1 * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1) * (-0.2e1 * x + 0.1e1) / (0.2e1 + 0.4e1 * x * x - 0.4e1 * x) - pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1) * pow(-0.2e1 * x + 0.1e1, 0.2e1) * pow(0.2e1 + 0.4e1 * x * x - 0.4e1 * x, -0.2e1) * (0.8e1 * x - 0.4e1))) * (-0.2e1 * x + 0.1e1 + 0.1e0 * cos(x * pi) * pi * sin(0.2500000000e0 * tau * pi)) + sqrt(pow(0.2e1 + 0.4e1 * x * x - 0.4e1 * x, 0.2e1) / (0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1))) * (-0.1250000000e1 * pow(0.1e1 + 0.2e1 * x * x - 0.2e1 * x, -0.2e1) * cos(x * pi) * pi * (-0.20e2 * sin(0.2500000000e0 * tau * pi) + 0.40e2 * x * sin(0.2500000000e0 * tau * pi) - 0.1e1 * cos(x * pi) * pi + cos(x * pi) * pi * pow(cos(0.2500000000e0 * tau * pi), 0.2e1)) + (0.250e2 * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1) / (0.2e1 + 0.4e1 * x * x - 0.4e1 * x) + 0.250e2 * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1) * pow(-0.2e1 * x + 0.1e1, 0.2e1) / (0.2e1 + 0.4e1 * x * x - 0.4e1 * x)) * (0.1e1 * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1) / (0.2e1 + 0.4e1 * x * x - 0.4e1 * x) + pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1) * pow(-0.2e1 * x + 0.1e1, 0.2e1) / (0.2e1 + 0.4e1 * x * x - 0.4e1 * x))) * (-0.2e1 - 0.1e0 * sin(x * pi) * sin(0.2500000000e0 * tau * pi) * pi * pi));
                      if (isnormal(value)==0){
                      cout << "fz(x,y,z) value is bounded to 0.0 at x=" << x << " and y= " <<y<<endl;
                      return 0.0;}
                      cout <<"fz(x,y,z) value is " << value << endl;
                      return value;
                     }

         static double mmsStructure22TargetX(double x, double y, double z, double tau) {
                         return 0.0;
                     }
         static double mmsStructure22TargetY(double x, double y, double z, double tau) {
                         return 0.0;
                     }
         static double mmsStructure22TargetZ(double x, double y, double z, double tau) {
                 return sin( tau / 4. * M_PI )*0.1*sin(x *M_PI);
            //return 0;
                     }

         static double mmsStructure23SourceX(double x, double y, double z, double tau) {
          double value=0.0;
             return value;
         }
         static double mmsStructure23SourceY(double x, double y, double z, double tau) {
             return 0.0;
         }
         static double mmsStructure23SourceZ(double x, double y, double z, double tau) {
             return 0.0;
         }
         static double mmsStructure23TargetX(double x, double y, double z, double tau) {
             double value=0;
             return value;
         }
         static double mmsStructure23TargetY(double x, double y, double z, double tau) {
             return 0.0;
         }
         static double mmsStructure23TargetZ(double x, double y, double z, double tau) {
             return 0.1*x;
         }

         static double mmsStructure24SourceX(double x, double y, double z, double tau) {
             double pi=M_PI;
              double value;
              value=   pi * pi * (-0.3434065934e10 * cos(x * pi) * sin(x * pi) * pi + 0.3434065934e10 * cos(x * pi) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * sin(x * pi) * pi + 0.4464285714e10 * cos(x * pi) * pow(cos(y * pi), 0.2e1) * sin(x * pi) * pi - 0.4464285714e10 * cos(x * pi) * pow(cos(y * pi), 0.2e1) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * sin(x * pi) * pi) * (-0.200000000000000020e-10) + pow(pi, 0.3e1) * cos(x * pi) * pow(cos(y * pi), 0.2e1) * (-0.1e1 + pow(cos(0.5000000000e0 * pi * tau), 0.2e1)) * sin(x * pi) * 0.240384615400000001e-1 + pow(pi, 0.3e1) * cos(x * pi) * pow(sin(y * pi), 0.2e1) * (-0.1e1 + pow(cos(0.5000000000e0 * pi * tau), 0.2e1)) * sin(x * pi) * (-0.240384615400000001e-1);
              return value;
          }
          static double mmsStructure24SourceY(double x, double y, double z, double tau) {
              double pi=M_PI;
              double value;
              value=   pow(pi, 0.3e1) * pow(sin(x * pi), 0.2e1) * sin(y * pi) * (-0.1e1 + pow(cos(0.5000000000e0 * pi * tau), 0.2e1)) * cos(y * pi) * (-0.240384615400000001e-1) + pow(pi, 0.3e1) * pow(cos(x * pi), 0.2e1) * sin(y * pi) * (-0.1e1 + pow(cos(0.5000000000e0 * pi * tau), 0.2e1)) * cos(y * pi) * 0.240384615400000001e-1 + pi * pi * (0.4464285714e10 * pow(cos(x * pi), 0.2e1) * cos(y * pi) * sin(y * pi) * pi - 0.4464285714e10 * pow(cos(x * pi), 0.2e1) * cos(y * pi) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * sin(y * pi) * pi - 0.3434065934e10 * cos(y * pi) * sin(y * pi) * pi + 0.3434065934e10 * cos(y * pi) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * sin(y * pi) * pi) * (-0.200000000000000020e-10);
              return value;
          }
          static double mmsStructure24SourceZ(double x, double y, double z, double tau) {
              double pi=M_PI;
              double value;
              value= pow(pi, 0.3e1) * (-0.3434065934e10 * cos(x * pi) * sin(x * pi) * pi + 0.3434065934e10 * cos(x * pi) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * sin(x * pi) * pi + 0.4464285714e10 * cos(x * pi) * pow(cos(y * pi), 0.2e1) * sin(x * pi) * pi - 0.4464285714e10 * cos(x * pi) * pow(cos(y * pi), 0.2e1) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * sin(x * pi) * pi) * cos(x * pi) * sin(y * pi) * sin(pi * tau / 0.2e1) * (-0.500000000000000051e-11) + (0.2000000000e-7 * pi * pi * (0.1717032967e10 * pow(cos(x * pi), 0.2e1) - 0.1717032967e10 * pow(cos(x * pi), 0.2e1) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) - 0.2232142857e10 * pow(cos(x * pi), 0.2e1) * pow(cos(y * pi), 0.2e1) + 0.2232142857e10 * pow(cos(x * pi), 0.2e1) * pow(cos(y * pi), 0.2e1) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) + 0.515109890e9 * pow(cos(y * pi), 0.2e1) - 0.515109890e9 * pow(cos(y * pi), 0.2e1) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1)) + 0.25e2) * sin(x * pi) * pi * pi * sin(y * pi) * sin(pi * tau / 0.2e1) * 0.250000000000000005e-3 + pow(pi, 0.4e1) * pow(sin(x * pi), 0.3e1) * sin(y * pi) * (-0.1e1 + pow(cos(0.5000000000e0 * pi * tau), 0.2e1)) * pow(cos(y * pi), 0.2e1) * sin(pi * tau / 0.2e1) * (-0.600961538500000003e-2) + pow(pi, 0.4e1) * pow(cos(x * pi), 0.2e1) * sin(y * pi) * (-0.1e1 + pow(cos(0.5000000000e0 * pi * tau), 0.2e1)) * sin(x * pi) * pow(cos(y * pi), 0.2e1) * sin(pi * tau / 0.2e1) * 0.240384615400000001e-1 + pow(pi, 0.4e1) * pow(cos(x * pi), 0.2e1) * pow(sin(y * pi), 0.3e1) * (-0.1e1 + pow(cos(0.5000000000e0 * pi * tau), 0.2e1)) * sin(x * pi) * sin(pi * tau / 0.2e1) * (-0.600961538500000003e-2) + pow(pi, 0.3e1) * (0.4464285714e10 * pow(cos(x * pi), 0.2e1) * cos(y * pi) * sin(y * pi) * pi - 0.4464285714e10 * pow(cos(x * pi), 0.2e1) * cos(y * pi) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * sin(y * pi) * pi - 0.3434065934e10 * cos(y * pi) * sin(y * pi) * pi + 0.3434065934e10 * cos(y * pi) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * sin(y * pi) * pi) * sin(x * pi) * cos(y * pi) * sin(pi * tau / 0.2e1) * (-0.500000000000000051e-11) + (0.2000000000e-7 * pi * pi * (0.515109890e9 * pow(cos(x * pi), 0.2e1) - 0.515109890e9 * pow(cos(x * pi), 0.2e1) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) - 0.2232142857e10 * pow(cos(x * pi), 0.2e1) * pow(cos(y * pi), 0.2e1) + 0.2232142857e10 * pow(cos(x * pi), 0.2e1) * pow(cos(y * pi), 0.2e1) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) + 0.1717032967e10 * pow(cos(y * pi), 0.2e1) - 0.1717032967e10 * pow(cos(y * pi), 0.2e1) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1)) + 0.25e2) * sin(x * pi) * sin(y * pi) * pi * pi * sin(pi * tau / 0.2e1) * 0.250000000000000005e-3 - 0.6250000000e-1 * sin(x * pi) * sin(y * pi) * sin(pi * tau / 0.2e1) * pi * pi;
              return value;
          }
          static double mmsStructure24TargetX(double x, double y, double z, double tau) {
              double value=0;
              return value;
          }
          static double mmsStructure24TargetY(double x, double y, double z, double tau) {
              return 0.0;
          }
          static double mmsStructure24TargetZ(double x, double y, double z, double tau) {
              double pi=M_PI;
              return 0.25e0 * sin(x * pi) * sin(y * pi) * sin(pi * tau * 0.50);
          }

          static double mmsStructure25SourceX(double x, double y, double z, double tau) {
                 double pi=M_PI;
                  double value;
                  if(x==0.5) x=0.4999999999;
                  value=   -0.1e-2 * pow(pow(0.2e1 + 0.4e1 * x * x - 0.4e1 * x, 0.2e1) / (0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1)), -0.1e1 / 0.2e1) * (pow(pow(0.2e1 + 0.4e1 * x * x - 0.4e1 * x, 0.2e1) / (0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1)), -0.1e1 / 0.2e1) * (0.5000000000e-8 * pi * (0.2747252747e10 * pow(cos(x * pi), 0.2e1) * pi * pow(cos(y * pi), 0.2e1) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) - 0.5494505495e11 * cos(x * pi) * sin(y * pi) * sin(0.5000000000e0 * pi * tau) * pow(x, 0.3e1) + 0.8241758245e11 * cos(x * pi) * sin(y * pi) * sin(0.5000000000e0 * pi * tau) * x * x - 0.3434065934e10 * pow(cos(x * pi), 0.2e1) * pi * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * x * x + 0.3434065934e10 * pow(cos(x * pi), 0.2e1) * pi * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * x - 0.1167582417e11 * pow(cos(x * pi), 0.2e1) * pi * pow(cos(y * pi), 0.2e1) * x * x + 0.7554945054e10 * pow(cos(x * pi), 0.2e1) * pi * pow(cos(y * pi), 0.2e1) * x - 0.8241758240e10 * pi * pow(cos(y * pi), 0.2e1) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * x * x + 0.4120879120e10 * pi * pow(cos(y * pi), 0.2e1) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * x - 0.4120879120e10 * pi * pow(cos(y * pi), 0.2e1) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * pow(x, 0.4e1) + 0.8241758240e10 * pi * pow(cos(y * pi), 0.2e1) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * pow(x, 0.3e1) - 0.4120879120e10 * pi * pow(cos(y * pi), 0.2e1) * pow(cos(x * pi), 0.2e1) * pow(x, 0.4e1) + 0.8241758240e10 * pi * pow(cos(y * pi), 0.2e1) * pow(cos(x * pi), 0.2e1) * pow(x, 0.3e1) + 0.1167582417e11 * pow(cos(x * pi), 0.2e1) * pi * pow(cos(y * pi), 0.2e1) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * x * x - 0.7554945054e10 * pow(cos(x * pi), 0.2e1) * pi * pow(cos(y * pi), 0.2e1) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * x + 0.4120879120e10 * pi * pow(cos(y * pi), 0.2e1) * pow(cos(x * pi), 0.2e1) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * pow(x, 0.4e1) - 0.8241758240e10 * pi * pow(cos(y * pi), 0.2e1) * pow(cos(x * pi), 0.2e1) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * pow(x, 0.3e1) - 0.3434065934e10 * pow(cos(x * pi), 0.2e1) * pi * x + 0.4120879120e10 * pi * pow(cos(y * pi), 0.2e1) * pow(x, 0.4e1) + 0.1373626374e11 * cos(x * pi) * sin(y * pi) * sin(0.5000000000e0 * pi * tau) - 0.1030219780e10 * pi * pow(cos(y * pi), 0.2e1) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) + 0.8241758240e10 * pi * pow(cos(y * pi), 0.2e1) * x * x - 0.4120879120e10 * pi * pow(cos(y * pi), 0.2e1) * x - 0.8241758240e10 * pi * pow(cos(y * pi), 0.2e1) * pow(x, 0.3e1) - 0.1717032967e10 * pow(cos(x * pi), 0.2e1) * pi * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) + 0.3434065934e10 * pow(cos(x * pi), 0.2e1) * pi * x * x - 0.2747252747e10 * pow(cos(x * pi), 0.2e1) * pi * pow(cos(y * pi), 0.2e1) + 0.1030219780e10 * pi * pow(cos(y * pi), 0.2e1) + 0.1717032967e10 * pow(cos(x * pi), 0.2e1) * pi - 0.5494505495e11 * cos(x * pi) * sin(y * pi) * sin(0.5000000000e0 * pi * tau) * x) * pow(0.1e1 + 0.2e1 * x * x - 0.2e1 * x, -0.3e1) + 0.1e1 * (0.250e2 * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1) / (0.2e1 + 0.4e1 * x * x - 0.4e1 * x) + 0.250e2 * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1) * pow(-0.2e1 * x + 0.1e1, 0.2e1) / (0.2e1 + 0.4e1 * x * x - 0.4e1 * x)) * (0.1e1 * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1) / (0.2e1 + 0.4e1 * x * x - 0.4e1 * x) + pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1) * pow(-0.2e1 * x + 0.1e1, 0.2e1) / (0.2e1 + 0.4e1 * x * x - 0.4e1 * x))) * (0.2e1 * (0.2e1 + 0.4e1 * x * x - 0.4e1 * x) / (0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1)) * (0.8e1 * x - 0.4e1) - 0.4e1 * pow(0.2e1 + 0.4e1 * x * x - 0.4e1 * x, 0.2e1) * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.2e1) * fabs(0.2e1 * x - 0.1e1) * fabs(0.2e1 * x - 0.1e1) / (0.2e1 * x - 0.1e1)) / 0.2e1 + sqrt(pow(0.2e1 + 0.4e1 * x * x - 0.4e1 * x, 0.2e1) / (0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1))) * (0.5000000000e-8 * pi * (-0.7554945054e10 * pow(cos(x * pi), 0.2e1) * pi * pow(cos(y * pi), 0.2e1) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) - 0.1648351648e12 * cos(x * pi) * sin(y * pi) * sin(0.5000000000e0 * pi * tau) * x * x - 0.6868131868e10 * pow(cos(x * pi), 0.2e1) * pi * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * x + 0.2472527472e11 * pow(cos(x * pi), 0.2e1) * pi * pow(cos(y * pi), 0.2e1) * x * x - 0.2335164834e11 * pow(cos(x * pi), 0.2e1) * pi * pow(cos(y * pi), 0.2e1) * x + 0.2472527472e11 * pi * pow(cos(y * pi), 0.2e1) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * x * x - 0.1648351648e11 * pi * pow(cos(y * pi), 0.2e1) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * x - 0.1648351648e11 * pi * pow(cos(y * pi), 0.2e1) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * pow(x, 0.3e1) - 0.1648351648e11 * pi * pow(cos(y * pi), 0.2e1) * pow(cos(x * pi), 0.2e1) * pow(x, 0.3e1) - 0.1373626374e11 * sin(x * pi) * pi * sin(y * pi) * sin(0.5000000000e0 * pi * tau) - 0.6868131868e10 * cos(x * pi) * pi * pi * x * x * sin(x * pi) + 0.6868131868e10 * cos(x * pi) * pi * pi * x * sin(x * pi) + 0.3434065934e10 * cos(x * pi) * pi * pi * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * sin(x * pi) + 0.5494505494e10 * cos(x * pi) * pi * pi * pow(cos(y * pi), 0.2e1) * sin(x * pi) - 0.2472527472e11 * pow(cos(x * pi), 0.2e1) * pi * pow(cos(y * pi), 0.2e1) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * x * x + 0.2335164834e11 * pow(cos(x * pi), 0.2e1) * pi * pow(cos(y * pi), 0.2e1) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * x + 0.1648351648e11 * pi * pow(cos(y * pi), 0.2e1) * pow(cos(x * pi), 0.2e1) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * pow(x, 0.3e1) - 0.5494505494e10 * cos(x * pi) * pi * pi * pow(cos(y * pi), 0.2e1) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * sin(x * pi) + 0.5494505495e11 * sin(x * pi) * pi * sin(y * pi) * sin(0.5000000000e0 * pi * tau) * pow(x, 0.3e1) - 0.8241758245e11 * sin(x * pi) * pi * sin(y * pi) * sin(0.5000000000e0 * pi * tau) * x * x + 0.6868131868e10 * cos(x * pi) * pi * pi * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * x * x * sin(x * pi) - 0.6868131868e10 * cos(x * pi) * pi * pi * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * x * sin(x * pi) + 0.2335164834e11 * cos(x * pi) * pi * pi * pow(cos(y * pi), 0.2e1) * x * x * sin(x * pi) - 0.1510989011e11 * cos(x * pi) * pi * pi * pow(cos(y * pi), 0.2e1) * x * sin(x * pi) + 0.8241758240e10 * pi * pi * pow(cos(y * pi), 0.2e1) * cos(x * pi) * pow(x, 0.4e1) * sin(x * pi) - 0.1648351648e11 * pi * pi * pow(cos(y * pi), 0.2e1) * cos(x * pi) * pow(x, 0.3e1) * sin(x * pi) + 0.5494505495e11 * sin(x * pi) * pi * sin(y * pi) * sin(0.5000000000e0 * pi * tau) * x + 0.6868131868e10 * pow(cos(x * pi), 0.2e1) * pi * x - 0.5494505495e11 * cos(x * pi) * sin(y * pi) * sin(0.5000000000e0 * pi * tau) + 0.4120879120e10 * pi * pow(cos(y * pi), 0.2e1) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) - 0.2472527472e11 * pi * pow(cos(y * pi), 0.2e1) * x * x + 0.1648351648e11 * pi * pow(cos(y * pi), 0.2e1) * x + 0.1648351648e11 * pi * pow(cos(y * pi), 0.2e1) * pow(x, 0.3e1) + 0.3434065934e10 * pow(cos(x * pi), 0.2e1) * pi * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) + 0.7554945054e10 * pow(cos(x * pi), 0.2e1) * pi * pow(cos(y * pi), 0.2e1) - 0.3434065934e10 * cos(x * pi) * pi * pi * sin(x * pi) + 0.1648351648e11 * pi * pi * pow(cos(y * pi), 0.2e1) * cos(x * pi) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * pow(x, 0.3e1) * sin(x * pi) + 0.1510989011e11 * cos(x * pi) * pi * pi * pow(cos(y * pi), 0.2e1) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * x * sin(x * pi) - 0.8241758240e10 * pi * pi * pow(cos(y * pi), 0.2e1) * cos(x * pi) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * pow(x, 0.4e1) * sin(x * pi) - 0.2335164834e11 * cos(x * pi) * pi * pi * pow(cos(y * pi), 0.2e1) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * x * x * sin(x * pi) - 0.4120879120e10 * pi * pow(cos(y * pi), 0.2e1) - 0.3434065934e10 * pow(cos(x * pi), 0.2e1) * pi + 0.1648351649e12 * cos(x * pi) * sin(y * pi) * sin(0.5000000000e0 * pi * tau) * x) * pow(0.1e1 + 0.2e1 * x * x - 0.2e1 * x, -0.3e1) - 0.1500000000e-7 * pi * (0.2747252747e10 * pow(cos(x * pi), 0.2e1) * pi * pow(cos(y * pi), 0.2e1) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) - 0.5494505495e11 * cos(x * pi) * sin(y * pi) * sin(0.5000000000e0 * pi * tau) * pow(x, 0.3e1) + 0.8241758245e11 * cos(x * pi) * sin(y * pi) * sin(0.5000000000e0 * pi * tau) * x * x - 0.3434065934e10 * pow(cos(x * pi), 0.2e1) * pi * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * x * x + 0.3434065934e10 * pow(cos(x * pi), 0.2e1) * pi * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * x - 0.1167582417e11 * pow(cos(x * pi), 0.2e1) * pi * pow(cos(y * pi), 0.2e1) * x * x + 0.7554945054e10 * pow(cos(x * pi), 0.2e1) * pi * pow(cos(y * pi), 0.2e1) * x - 0.8241758240e10 * pi * pow(cos(y * pi), 0.2e1) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * x * x + 0.4120879120e10 * pi * pow(cos(y * pi), 0.2e1) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * x - 0.4120879120e10 * pi * pow(cos(y * pi), 0.2e1) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * pow(x, 0.4e1) + 0.8241758240e10 * pi * pow(cos(y * pi), 0.2e1) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * pow(x, 0.3e1) - 0.4120879120e10 * pi * pow(cos(y * pi), 0.2e1) * pow(cos(x * pi), 0.2e1) * pow(x, 0.4e1) + 0.8241758240e10 * pi * pow(cos(y * pi), 0.2e1) * pow(cos(x * pi), 0.2e1) * pow(x, 0.3e1) + 0.1167582417e11 * pow(cos(x * pi), 0.2e1) * pi * pow(cos(y * pi), 0.2e1) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * x * x - 0.7554945054e10 * pow(cos(x * pi), 0.2e1) * pi * pow(cos(y * pi), 0.2e1) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * x + 0.4120879120e10 * pi * pow(cos(y * pi), 0.2e1) * pow(cos(x * pi), 0.2e1) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * pow(x, 0.4e1) - 0.8241758240e10 * pi * pow(cos(y * pi), 0.2e1) * pow(cos(x * pi), 0.2e1) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * pow(x, 0.3e1) - 0.3434065934e10 * pow(cos(x * pi), 0.2e1) * pi * x + 0.4120879120e10 * pi * pow(cos(y * pi), 0.2e1) * pow(x, 0.4e1) + 0.1373626374e11 * cos(x * pi) * sin(y * pi) * sin(0.5000000000e0 * pi * tau) - 0.1030219780e10 * pi * pow(cos(y * pi), 0.2e1) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) + 0.8241758240e10 * pi * pow(cos(y * pi), 0.2e1) * x * x - 0.4120879120e10 * pi * pow(cos(y * pi), 0.2e1) * x - 0.8241758240e10 * pi * pow(cos(y * pi), 0.2e1) * pow(x, 0.3e1) - 0.1717032967e10 * pow(cos(x * pi), 0.2e1) * pi * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) + 0.3434065934e10 * pow(cos(x * pi), 0.2e1) * pi * x * x - 0.2747252747e10 * pow(cos(x * pi), 0.2e1) * pi * pow(cos(y * pi), 0.2e1) + 0.1030219780e10 * pi * pow(cos(y * pi), 0.2e1) + 0.1717032967e10 * pow(cos(x * pi), 0.2e1) * pi - 0.5494505495e11 * cos(x * pi) * sin(y * pi) * sin(0.5000000000e0 * pi * tau) * x) * pow(0.1e1 + 0.2e1 * x * x - 0.2e1 * x, -0.4e1) * (0.4e1 * x - 0.2e1) + 0.1e1 * (-0.5000000000e2 * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.3e1 / 0.2e1) / (0.2e1 + 0.4e1 * x * x - 0.4e1 * x) * fabs(0.2e1 * x - 0.1e1) * fabs(0.2e1 * x - 0.1e1) / (0.2e1 * x - 0.1e1) - 0.250e2 * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1) * pow(0.2e1 + 0.4e1 * x * x - 0.4e1 * x, -0.2e1) * (0.8e1 * x - 0.4e1) - 0.5000000000e2 * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.3e1 / 0.2e1) * pow(-0.2e1 * x + 0.1e1, 0.2e1) / (0.2e1 + 0.4e1 * x * x - 0.4e1 * x) * fabs(0.2e1 * x - 0.1e1) * fabs(0.2e1 * x - 0.1e1) / (0.2e1 * x - 0.1e1) - 0.1000e3 * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1) * (-0.2e1 * x + 0.1e1) / (0.2e1 + 0.4e1 * x * x - 0.4e1 * x) - 0.250e2 * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1) * pow(-0.2e1 * x + 0.1e1, 0.2e1) * pow(0.2e1 + 0.4e1 * x * x - 0.4e1 * x, -0.2e1) * (0.8e1 * x - 0.4e1)) * (0.1e1 * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1) / (0.2e1 + 0.4e1 * x * x - 0.4e1 * x) + pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1) * pow(-0.2e1 * x + 0.1e1, 0.2e1) / (0.2e1 + 0.4e1 * x * x - 0.4e1 * x)) + 0.1e1 * (0.250e2 * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1) / (0.2e1 + 0.4e1 * x * x - 0.4e1 * x) + 0.250e2 * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1) * pow(-0.2e1 * x + 0.1e1, 0.2e1) / (0.2e1 + 0.4e1 * x * x - 0.4e1 * x)) * (-0.2000000000e1 * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.3e1 / 0.2e1) / (0.2e1 + 0.4e1 * x * x - 0.4e1 * x) * fabs(0.2e1 * x - 0.1e1) * fabs(0.2e1 * x - 0.1e1) / (0.2e1 * x - 0.1e1) - 0.1e1 * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1) * pow(0.2e1 + 0.4e1 * x * x - 0.4e1 * x, -0.2e1) * (0.8e1 * x - 0.4e1) - 0.2000000000e1 * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.3e1 / 0.2e1) * pow(-0.2e1 * x + 0.1e1, 0.2e1) / (0.2e1 + 0.4e1 * x * x - 0.4e1 * x) * fabs(0.2e1 * x - 0.1e1) * fabs(0.2e1 * x - 0.1e1) / (0.2e1 * x - 0.1e1) - 0.4e1 * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1) * (-0.2e1 * x + 0.1e1) / (0.2e1 + 0.4e1 * x * x - 0.4e1 * x) - pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1) * pow(-0.2e1 * x + 0.1e1, 0.2e1) * pow(0.2e1 + 0.4e1 * x * x - 0.4e1 * x, -0.2e1) * (0.8e1 * x - 0.4e1))) + 0.1201923077e2 * sqrt(pow(0.2e1 + 0.4e1 * x * x - 0.4e1 * x, 0.2e1) / (0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1))) * pow(pi, 0.3e1) * cos(x * pi) * pow(cos(y * pi), 0.2e1) * pow(sin(0.5000000000e0 * pi * tau), 0.2e1) * sin(x * pi) / (0.1e1 + 0.2e1 * x * x - 0.2e1 * x) - 0.1201923077e2 * sqrt(pow(0.2e1 + 0.4e1 * x * x - 0.4e1 * x, 0.2e1) / (0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1))) * pi * pi * (0.4e1 - 0.8e1 * x + cos(x * pi) * pi * sin(y * pi) * sin(0.5000000000e0 * pi * tau)) * sin(x * pi) * sin(y * pi) * sin(0.5000000000e0 * pi * tau) / (0.1e1 + 0.2e1 * x * x - 0.2e1 * x));
                  if (isnormal(value)==0){
                                                              cout << "fx(x,y,z) value is bounded to 0.0 at x=" << x << " and y= " <<y<<endl;
                                                              return 0.0;}
                                                              cout <<"fx(x,y,z) value is " << value << endl;
                                                              return value;
                  return value;
              }
          static double mmsStructure25SourceY(double x, double y, double z, double tau) {
              double pi=M_PI;
              double value;
              if(x==0.5) x=0.4999999999;
              value=  -0.1e-2 * pow(pow(0.2e1 + 0.4e1 * x * x - 0.4e1 * x, 0.2e1) / (0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1)), -0.1e1 / 0.2e1) * (0.6009615385e1 * pow(pow(0.2e1 + 0.4e1 * x * x - 0.4e1 * x, 0.2e1) / (0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1)), -0.1e1 / 0.2e1) * pi * (0.4e1 - 0.8e1 * x + cos(x * pi) * pi * sin(y * pi) * sin(0.5000000000e0 * pi * tau)) * sin(x * pi) * cos(y * pi) * sin(0.5000000000e0 * pi * tau) / (0.1e1 + 0.2e1 * x * x - 0.2e1 * x) * (0.2e1 * (0.2e1 + 0.4e1 * x * x - 0.4e1 * x) / (0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1)) * (0.8e1 * x - 0.4e1) - 0.4e1 * pow(0.2e1 + 0.4e1 * x * x - 0.4e1 * x, 0.2e1) * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.2e1) * fabs(0.2e1 * x - 0.1e1) * fabs(0.2e1 * x - 0.1e1) / (0.2e1 * x - 0.1e1)) + 0.1201923077e2 * sqrt(pow(0.2e1 + 0.4e1 * x * x - 0.4e1 * x, 0.2e1) / (0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1))) * pi * (-0.8e1 - sin(x * pi) * pi * pi * sin(y * pi) * sin(0.5000000000e0 * pi * tau)) * sin(x * pi) * cos(y * pi) * sin(0.5000000000e0 * pi * tau) / (0.1e1 + 0.2e1 * x * x - 0.2e1 * x) + 0.1201923077e2 * sqrt(pow(0.2e1 + 0.4e1 * x * x - 0.4e1 * x, 0.2e1) / (0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1))) * pi * pi * (0.4e1 - 0.8e1 * x + cos(x * pi) * pi * sin(y * pi) * sin(0.5000000000e0 * pi * tau)) * cos(x * pi) * cos(y * pi) * sin(0.5000000000e0 * pi * tau) / (0.1e1 + 0.2e1 * x * x - 0.2e1 * x) - 0.1201923077e2 * sqrt(pow(0.2e1 + 0.4e1 * x * x - 0.4e1 * x, 0.2e1) / (0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1))) * pi * (0.4e1 - 0.8e1 * x + cos(x * pi) * pi * sin(y * pi) * sin(0.5000000000e0 * pi * tau)) * sin(x * pi) * cos(y * pi) * sin(0.5000000000e0 * pi * tau) * pow(0.1e1 + 0.2e1 * x * x - 0.2e1 * x, -0.2e1) * (0.4e1 * x - 0.2e1) + 0.1000000000e-7 * sqrt(pow(0.2e1 + 0.4e1 * x * x - 0.4e1 * x, 0.2e1) / (0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1))) * (-0.8241758240e10 * x * cos(x * pi) * pi * pi * cos(y * pi) * sin(0.5000000000e0 * pi * tau) + 0.4120879121e10 * cos(x * pi) * pi * pi * cos(y * pi) * sin(0.5000000000e0 * pi * tau) + 0.7898351648e10 * pow(cos(x * pi), 0.2e1) * pow(pi, 0.3e1) * cos(y * pi) * sin(y * pi) - 0.7898351648e10 * pow(cos(x * pi), 0.2e1) * pow(pi, 0.3e1) * cos(y * pi) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * sin(y * pi) - 0.6868131868e10 * cos(y * pi) * pow(pi, 0.3e1) * sin(y * pi) - 0.1373626374e11 * x * x * cos(y * pi) * pow(pi, 0.3e1) * sin(y * pi) + 0.1373626374e11 * x * cos(y * pi) * pow(pi, 0.3e1) * sin(y * pi) + 0.6868131868e10 * cos(y * pi) * pow(pi, 0.3e1) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * sin(y * pi) + 0.1373626374e11 * x * x * cos(y * pi) * pow(pi, 0.3e1) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * sin(y * pi) - 0.1373626374e11 * x * cos(y * pi) * pow(pi, 0.3e1) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * sin(y * pi) + 0.1373626374e11 * x * x * pow(cos(x * pi), 0.2e1) * pow(pi, 0.3e1) * cos(y * pi) * sin(y * pi) - 0.1373626374e11 * x * pow(cos(x * pi), 0.2e1) * pow(pi, 0.3e1) * cos(y * pi) * sin(y * pi) - 0.1373626374e11 * x * x * pow(cos(x * pi), 0.2e1) * pow(pi, 0.3e1) * cos(y * pi) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * sin(y * pi) + 0.1373626374e11 * x * pow(cos(x * pi), 0.2e1) * pow(pi, 0.3e1) * cos(y * pi) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * sin(y * pi)) / (0.1e1 + 0.2e1 * x * x - 0.2e1 * x));
              if (isnormal(value)==0){
                                                          cout << "fy(x,y,z) value is bounded to 0.0 at x=" << x << " and y= " <<y<<endl;
                                                          return 0.0;}
                                                          cout <<"fy(x,y,z) value is " << value << endl;
                                                          return value;
              return value;
          }
          static double mmsStructure25SourceZ(double x, double y, double z, double tau) {
              double pi=M_PI;
              double value;
              if(x==0.5) x=0.4999999999;
              value= -0.1e-2 * pow(pow(0.2e1 + 0.4e1 * x * x - 0.4e1 * x, 0.2e1) / (0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1)), -0.1e1 / 0.2e1) * (pow(pow(0.2e1 + 0.4e1 * x * x - 0.4e1 * x, 0.2e1) / (0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1)), -0.1e1 / 0.2e1) * ((0.5000000000e-8 * pi * (0.2747252747e10 * pow(cos(x * pi), 0.2e1) * pi * pow(cos(y * pi), 0.2e1) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) - 0.5494505495e11 * cos(x * pi) * sin(y * pi) * sin(0.5000000000e0 * pi * tau) * pow(x, 0.3e1) + 0.8241758245e11 * cos(x * pi) * sin(y * pi) * sin(0.5000000000e0 * pi * tau) * x * x - 0.3434065934e10 * pow(cos(x * pi), 0.2e1) * pi * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * x * x + 0.3434065934e10 * pow(cos(x * pi), 0.2e1) * pi * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * x - 0.1167582417e11 * pow(cos(x * pi), 0.2e1) * pi * pow(cos(y * pi), 0.2e1) * x * x + 0.7554945054e10 * pow(cos(x * pi), 0.2e1) * pi * pow(cos(y * pi), 0.2e1) * x - 0.8241758240e10 * pi * pow(cos(y * pi), 0.2e1) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * x * x + 0.4120879120e10 * pi * pow(cos(y * pi), 0.2e1) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * x - 0.4120879120e10 * pi * pow(cos(y * pi), 0.2e1) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * pow(x, 0.4e1) + 0.8241758240e10 * pi * pow(cos(y * pi), 0.2e1) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * pow(x, 0.3e1) - 0.4120879120e10 * pi * pow(cos(y * pi), 0.2e1) * pow(cos(x * pi), 0.2e1) * pow(x, 0.4e1) + 0.8241758240e10 * pi * pow(cos(y * pi), 0.2e1) * pow(cos(x * pi), 0.2e1) * pow(x, 0.3e1) + 0.1167582417e11 * pow(cos(x * pi), 0.2e1) * pi * pow(cos(y * pi), 0.2e1) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * x * x - 0.7554945054e10 * pow(cos(x * pi), 0.2e1) * pi * pow(cos(y * pi), 0.2e1) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * x + 0.4120879120e10 * pi * pow(cos(y * pi), 0.2e1) * pow(cos(x * pi), 0.2e1) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * pow(x, 0.4e1) - 0.8241758240e10 * pi * pow(cos(y * pi), 0.2e1) * pow(cos(x * pi), 0.2e1) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * pow(x, 0.3e1) - 0.3434065934e10 * pow(cos(x * pi), 0.2e1) * pi * x + 0.4120879120e10 * pi * pow(cos(y * pi), 0.2e1) * pow(x, 0.4e1) + 0.1373626374e11 * cos(x * pi) * sin(y * pi) * sin(0.5000000000e0 * pi * tau) - 0.1030219780e10 * pi * pow(cos(y * pi), 0.2e1) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) + 0.8241758240e10 * pi * pow(cos(y * pi), 0.2e1) * x * x - 0.4120879120e10 * pi * pow(cos(y * pi), 0.2e1) * x - 0.8241758240e10 * pi * pow(cos(y * pi), 0.2e1) * pow(x, 0.3e1) - 0.1717032967e10 * pow(cos(x * pi), 0.2e1) * pi * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) + 0.3434065934e10 * pow(cos(x * pi), 0.2e1) * pi * x * x - 0.2747252747e10 * pow(cos(x * pi), 0.2e1) * pi * pow(cos(y * pi), 0.2e1) + 0.1030219780e10 * pi * pow(cos(y * pi), 0.2e1) + 0.1717032967e10 * pow(cos(x * pi), 0.2e1) * pi - 0.5494505495e11 * cos(x * pi) * sin(y * pi) * sin(0.5000000000e0 * pi * tau) * x) * pow(0.1e1 + 0.2e1 * x * x - 0.2e1 * x, -0.3e1) + (0.250e2 * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1) / (0.2e1 + 0.4e1 * x * x - 0.4e1 * x) + 0.250e2 * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1) * pow(-0.2e1 * x + 0.1e1, 0.2e1) / (0.2e1 + 0.4e1 * x * x - 0.4e1 * x)) * (0.1e1 * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1) / (0.2e1 + 0.4e1 * x * x - 0.4e1 * x) + pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1) * pow(-0.2e1 * x + 0.1e1, 0.2e1) / (0.2e1 + 0.4e1 * x * x - 0.4e1 * x))) * (-0.2e1 * x + 0.1e1 + 0.25e0 * cos(x * pi) * pi * sin(y * pi) * sin(pi * tau / 0.2e1)) + 0.3004807692e1 * pi * pi * (0.4e1 - 0.8e1 * x + cos(x * pi) * pi * sin(y * pi) * sin(0.5000000000e0 * pi * tau)) * pow(sin(x * pi), 0.2e1) * pow(cos(y * pi), 0.2e1) * sin(0.5000000000e0 * pi * tau) / (0.1e1 + 0.2e1 * x * x - 0.2e1 * x) * sin(pi * tau / 0.2e1)) * (0.2e1 * (0.2e1 + 0.4e1 * x * x - 0.4e1 * x) / (0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1)) * (0.8e1 * x - 0.4e1) - 0.4e1 * pow(0.2e1 + 0.4e1 * x * x - 0.4e1 * x, 0.2e1) * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.2e1) * fabs(0.2e1 * x - 0.1e1) * fabs(0.2e1 * x - 0.1e1) / (0.2e1 * x - 0.1e1)) / 0.2e1 + sqrt(pow(0.2e1 + 0.4e1 * x * x - 0.4e1 * x, 0.2e1) / (0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1))) * ((0.5000000000e-8 * pi * (-0.7554945054e10 * pow(cos(x * pi), 0.2e1) * pi * pow(cos(y * pi), 0.2e1) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) - 0.1648351648e12 * cos(x * pi) * sin(y * pi) * sin(0.5000000000e0 * pi * tau) * x * x - 0.6868131868e10 * pow(cos(x * pi), 0.2e1) * pi * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * x + 0.2472527472e11 * pow(cos(x * pi), 0.2e1) * pi * pow(cos(y * pi), 0.2e1) * x * x - 0.2335164834e11 * pow(cos(x * pi), 0.2e1) * pi * pow(cos(y * pi), 0.2e1) * x + 0.2472527472e11 * pi * pow(cos(y * pi), 0.2e1) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * x * x - 0.1648351648e11 * pi * pow(cos(y * pi), 0.2e1) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * x - 0.1648351648e11 * pi * pow(cos(y * pi), 0.2e1) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * pow(x, 0.3e1) - 0.1648351648e11 * pi * pow(cos(y * pi), 0.2e1) * pow(cos(x * pi), 0.2e1) * pow(x, 0.3e1) - 0.1373626374e11 * sin(x * pi) * pi * sin(y * pi) * sin(0.5000000000e0 * pi * tau) - 0.6868131868e10 * cos(x * pi) * pi * pi * x * x * sin(x * pi) + 0.6868131868e10 * cos(x * pi) * pi * pi * x * sin(x * pi) + 0.3434065934e10 * cos(x * pi) * pi * pi * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * sin(x * pi) + 0.5494505494e10 * cos(x * pi) * pi * pi * pow(cos(y * pi), 0.2e1) * sin(x * pi) - 0.2472527472e11 * pow(cos(x * pi), 0.2e1) * pi * pow(cos(y * pi), 0.2e1) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * x * x + 0.2335164834e11 * pow(cos(x * pi), 0.2e1) * pi * pow(cos(y * pi), 0.2e1) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * x + 0.1648351648e11 * pi * pow(cos(y * pi), 0.2e1) * pow(cos(x * pi), 0.2e1) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * pow(x, 0.3e1) - 0.5494505494e10 * cos(x * pi) * pi * pi * pow(cos(y * pi), 0.2e1) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * sin(x * pi) + 0.5494505495e11 * sin(x * pi) * pi * sin(y * pi) * sin(0.5000000000e0 * pi * tau) * pow(x, 0.3e1) - 0.8241758245e11 * sin(x * pi) * pi * sin(y * pi) * sin(0.5000000000e0 * pi * tau) * x * x + 0.6868131868e10 * cos(x * pi) * pi * pi * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * x * x * sin(x * pi) - 0.6868131868e10 * cos(x * pi) * pi * pi * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * x * sin(x * pi) + 0.2335164834e11 * cos(x * pi) * pi * pi * pow(cos(y * pi), 0.2e1) * x * x * sin(x * pi) - 0.1510989011e11 * cos(x * pi) * pi * pi * pow(cos(y * pi), 0.2e1) * x * sin(x * pi) + 0.8241758240e10 * pi * pi * pow(cos(y * pi), 0.2e1) * cos(x * pi) * pow(x, 0.4e1) * sin(x * pi) - 0.1648351648e11 * pi * pi * pow(cos(y * pi), 0.2e1) * cos(x * pi) * pow(x, 0.3e1) * sin(x * pi) + 0.5494505495e11 * sin(x * pi) * pi * sin(y * pi) * sin(0.5000000000e0 * pi * tau) * x + 0.6868131868e10 * pow(cos(x * pi), 0.2e1) * pi * x - 0.5494505495e11 * cos(x * pi) * sin(y * pi) * sin(0.5000000000e0 * pi * tau) + 0.4120879120e10 * pi * pow(cos(y * pi), 0.2e1) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) - 0.2472527472e11 * pi * pow(cos(y * pi), 0.2e1) * x * x + 0.1648351648e11 * pi * pow(cos(y * pi), 0.2e1) * x + 0.1648351648e11 * pi * pow(cos(y * pi), 0.2e1) * pow(x, 0.3e1) + 0.3434065934e10 * pow(cos(x * pi), 0.2e1) * pi * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) + 0.7554945054e10 * pow(cos(x * pi), 0.2e1) * pi * pow(cos(y * pi), 0.2e1) - 0.3434065934e10 * cos(x * pi) * pi * pi * sin(x * pi) + 0.1648351648e11 * pi * pi * pow(cos(y * pi), 0.2e1) * cos(x * pi) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * pow(x, 0.3e1) * sin(x * pi) + 0.1510989011e11 * cos(x * pi) * pi * pi * pow(cos(y * pi), 0.2e1) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * x * sin(x * pi) - 0.8241758240e10 * pi * pi * pow(cos(y * pi), 0.2e1) * cos(x * pi) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * pow(x, 0.4e1) * sin(x * pi) - 0.2335164834e11 * cos(x * pi) * pi * pi * pow(cos(y * pi), 0.2e1) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * x * x * sin(x * pi) - 0.4120879120e10 * pi * pow(cos(y * pi), 0.2e1) - 0.3434065934e10 * pow(cos(x * pi), 0.2e1) * pi + 0.1648351649e12 * cos(x * pi) * sin(y * pi) * sin(0.5000000000e0 * pi * tau) * x) * pow(0.1e1 + 0.2e1 * x * x - 0.2e1 * x, -0.3e1) - 0.1500000000e-7 * pi * (0.2747252747e10 * pow(cos(x * pi), 0.2e1) * pi * pow(cos(y * pi), 0.2e1) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) - 0.5494505495e11 * cos(x * pi) * sin(y * pi) * sin(0.5000000000e0 * pi * tau) * pow(x, 0.3e1) + 0.8241758245e11 * cos(x * pi) * sin(y * pi) * sin(0.5000000000e0 * pi * tau) * x * x - 0.3434065934e10 * pow(cos(x * pi), 0.2e1) * pi * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * x * x + 0.3434065934e10 * pow(cos(x * pi), 0.2e1) * pi * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * x - 0.1167582417e11 * pow(cos(x * pi), 0.2e1) * pi * pow(cos(y * pi), 0.2e1) * x * x + 0.7554945054e10 * pow(cos(x * pi), 0.2e1) * pi * pow(cos(y * pi), 0.2e1) * x - 0.8241758240e10 * pi * pow(cos(y * pi), 0.2e1) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * x * x + 0.4120879120e10 * pi * pow(cos(y * pi), 0.2e1) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * x - 0.4120879120e10 * pi * pow(cos(y * pi), 0.2e1) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * pow(x, 0.4e1) + 0.8241758240e10 * pi * pow(cos(y * pi), 0.2e1) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * pow(x, 0.3e1) - 0.4120879120e10 * pi * pow(cos(y * pi), 0.2e1) * pow(cos(x * pi), 0.2e1) * pow(x, 0.4e1) + 0.8241758240e10 * pi * pow(cos(y * pi), 0.2e1) * pow(cos(x * pi), 0.2e1) * pow(x, 0.3e1) + 0.1167582417e11 * pow(cos(x * pi), 0.2e1) * pi * pow(cos(y * pi), 0.2e1) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * x * x - 0.7554945054e10 * pow(cos(x * pi), 0.2e1) * pi * pow(cos(y * pi), 0.2e1) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * x + 0.4120879120e10 * pi * pow(cos(y * pi), 0.2e1) * pow(cos(x * pi), 0.2e1) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * pow(x, 0.4e1) - 0.8241758240e10 * pi * pow(cos(y * pi), 0.2e1) * pow(cos(x * pi), 0.2e1) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * pow(x, 0.3e1) - 0.3434065934e10 * pow(cos(x * pi), 0.2e1) * pi * x + 0.4120879120e10 * pi * pow(cos(y * pi), 0.2e1) * pow(x, 0.4e1) + 0.1373626374e11 * cos(x * pi) * sin(y * pi) * sin(0.5000000000e0 * pi * tau) - 0.1030219780e10 * pi * pow(cos(y * pi), 0.2e1) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) + 0.8241758240e10 * pi * pow(cos(y * pi), 0.2e1) * x * x - 0.4120879120e10 * pi * pow(cos(y * pi), 0.2e1) * x - 0.8241758240e10 * pi * pow(cos(y * pi), 0.2e1) * pow(x, 0.3e1) - 0.1717032967e10 * pow(cos(x * pi), 0.2e1) * pi * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) + 0.3434065934e10 * pow(cos(x * pi), 0.2e1) * pi * x * x - 0.2747252747e10 * pow(cos(x * pi), 0.2e1) * pi * pow(cos(y * pi), 0.2e1) + 0.1030219780e10 * pi * pow(cos(y * pi), 0.2e1) + 0.1717032967e10 * pow(cos(x * pi), 0.2e1) * pi - 0.5494505495e11 * cos(x * pi) * sin(y * pi) * sin(0.5000000000e0 * pi * tau) * x) * pow(0.1e1 + 0.2e1 * x * x - 0.2e1 * x, -0.4e1) * (0.4e1 * x - 0.2e1) + (-0.5000000000e2 * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.3e1 / 0.2e1) / (0.2e1 + 0.4e1 * x * x - 0.4e1 * x) * fabs(0.2e1 * x - 0.1e1) * fabs(0.2e1 * x - 0.1e1) / (0.2e1 * x - 0.1e1) - 0.250e2 * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1) * pow(0.2e1 + 0.4e1 * x * x - 0.4e1 * x, -0.2e1) * (0.8e1 * x - 0.4e1) - 0.5000000000e2 * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.3e1 / 0.2e1) * pow(-0.2e1 * x + 0.1e1, 0.2e1) / (0.2e1 + 0.4e1 * x * x - 0.4e1 * x) * fabs(0.2e1 * x - 0.1e1) * fabs(0.2e1 * x - 0.1e1) / (0.2e1 * x - 0.1e1) - 0.1000e3 * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1) * (-0.2e1 * x + 0.1e1) / (0.2e1 + 0.4e1 * x * x - 0.4e1 * x) - 0.250e2 * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1) * pow(-0.2e1 * x + 0.1e1, 0.2e1) * pow(0.2e1 + 0.4e1 * x * x - 0.4e1 * x, -0.2e1) * (0.8e1 * x - 0.4e1)) * (0.1e1 * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1) / (0.2e1 + 0.4e1 * x * x - 0.4e1 * x) + pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1) * pow(-0.2e1 * x + 0.1e1, 0.2e1) / (0.2e1 + 0.4e1 * x * x - 0.4e1 * x)) + (0.250e2 * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1) / (0.2e1 + 0.4e1 * x * x - 0.4e1 * x) + 0.250e2 * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1) * pow(-0.2e1 * x + 0.1e1, 0.2e1) / (0.2e1 + 0.4e1 * x * x - 0.4e1 * x)) * (-0.2000000000e1 * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.3e1 / 0.2e1) / (0.2e1 + 0.4e1 * x * x - 0.4e1 * x) * fabs(0.2e1 * x - 0.1e1) * fabs(0.2e1 * x - 0.1e1) / (0.2e1 * x - 0.1e1) - 0.1e1 * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1) * pow(0.2e1 + 0.4e1 * x * x - 0.4e1 * x, -0.2e1) * (0.8e1 * x - 0.4e1) - 0.2000000000e1 * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.3e1 / 0.2e1) * pow(-0.2e1 * x + 0.1e1, 0.2e1) / (0.2e1 + 0.4e1 * x * x - 0.4e1 * x) * fabs(0.2e1 * x - 0.1e1) * fabs(0.2e1 * x - 0.1e1) / (0.2e1 * x - 0.1e1) - 0.4e1 * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1) * (-0.2e1 * x + 0.1e1) / (0.2e1 + 0.4e1 * x * x - 0.4e1 * x) - pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1) * pow(-0.2e1 * x + 0.1e1, 0.2e1) * pow(0.2e1 + 0.4e1 * x * x - 0.4e1 * x, -0.2e1) * (0.8e1 * x - 0.4e1))) * (-0.2e1 * x + 0.1e1 + 0.25e0 * cos(x * pi) * pi * sin(y * pi) * sin(pi * tau / 0.2e1)) + (0.5000000000e-8 * pi * (0.2747252747e10 * pow(cos(x * pi), 0.2e1) * pi * pow(cos(y * pi), 0.2e1) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) - 0.5494505495e11 * cos(x * pi) * sin(y * pi) * sin(0.5000000000e0 * pi * tau) * pow(x, 0.3e1) + 0.8241758245e11 * cos(x * pi) * sin(y * pi) * sin(0.5000000000e0 * pi * tau) * x * x - 0.3434065934e10 * pow(cos(x * pi), 0.2e1) * pi * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * x * x + 0.3434065934e10 * pow(cos(x * pi), 0.2e1) * pi * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * x - 0.1167582417e11 * pow(cos(x * pi), 0.2e1) * pi * pow(cos(y * pi), 0.2e1) * x * x + 0.7554945054e10 * pow(cos(x * pi), 0.2e1) * pi * pow(cos(y * pi), 0.2e1) * x - 0.8241758240e10 * pi * pow(cos(y * pi), 0.2e1) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * x * x + 0.4120879120e10 * pi * pow(cos(y * pi), 0.2e1) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * x - 0.4120879120e10 * pi * pow(cos(y * pi), 0.2e1) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * pow(x, 0.4e1) + 0.8241758240e10 * pi * pow(cos(y * pi), 0.2e1) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * pow(x, 0.3e1) - 0.4120879120e10 * pi * pow(cos(y * pi), 0.2e1) * pow(cos(x * pi), 0.2e1) * pow(x, 0.4e1) + 0.8241758240e10 * pi * pow(cos(y * pi), 0.2e1) * pow(cos(x * pi), 0.2e1) * pow(x, 0.3e1) + 0.1167582417e11 * pow(cos(x * pi), 0.2e1) * pi * pow(cos(y * pi), 0.2e1) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * x * x - 0.7554945054e10 * pow(cos(x * pi), 0.2e1) * pi * pow(cos(y * pi), 0.2e1) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * x + 0.4120879120e10 * pi * pow(cos(y * pi), 0.2e1) * pow(cos(x * pi), 0.2e1) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * pow(x, 0.4e1) - 0.8241758240e10 * pi * pow(cos(y * pi), 0.2e1) * pow(cos(x * pi), 0.2e1) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * pow(x, 0.3e1) - 0.3434065934e10 * pow(cos(x * pi), 0.2e1) * pi * x + 0.4120879120e10 * pi * pow(cos(y * pi), 0.2e1) * pow(x, 0.4e1) + 0.1373626374e11 * cos(x * pi) * sin(y * pi) * sin(0.5000000000e0 * pi * tau) - 0.1030219780e10 * pi * pow(cos(y * pi), 0.2e1) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) + 0.8241758240e10 * pi * pow(cos(y * pi), 0.2e1) * x * x - 0.4120879120e10 * pi * pow(cos(y * pi), 0.2e1) * x - 0.8241758240e10 * pi * pow(cos(y * pi), 0.2e1) * pow(x, 0.3e1) - 0.1717032967e10 * pow(cos(x * pi), 0.2e1) * pi * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) + 0.3434065934e10 * pow(cos(x * pi), 0.2e1) * pi * x * x - 0.2747252747e10 * pow(cos(x * pi), 0.2e1) * pi * pow(cos(y * pi), 0.2e1) + 0.1030219780e10 * pi * pow(cos(y * pi), 0.2e1) + 0.1717032967e10 * pow(cos(x * pi), 0.2e1) * pi - 0.5494505495e11 * cos(x * pi) * sin(y * pi) * sin(0.5000000000e0 * pi * tau) * x) * pow(0.1e1 + 0.2e1 * x * x - 0.2e1 * x, -0.3e1) + (0.250e2 * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1) / (0.2e1 + 0.4e1 * x * x - 0.4e1 * x) + 0.250e2 * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1) * pow(-0.2e1 * x + 0.1e1, 0.2e1) / (0.2e1 + 0.4e1 * x * x - 0.4e1 * x)) * (0.1e1 * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1) / (0.2e1 + 0.4e1 * x * x - 0.4e1 * x) + pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1) * pow(-0.2e1 * x + 0.1e1, 0.2e1) / (0.2e1 + 0.4e1 * x * x - 0.4e1 * x))) * (-0.2e1 - 0.25e0 * sin(x * pi) * sin(y * pi) * sin(pi * tau / 0.2e1) * pi * pi) + 0.3004807692e1 * pi * pi * (-0.8e1 - sin(x * pi) * pi * pi * sin(y * pi) * sin(0.5000000000e0 * pi * tau)) * pow(sin(x * pi), 0.2e1) * pow(cos(y * pi), 0.2e1) * sin(0.5000000000e0 * pi * tau) / (0.1e1 + 0.2e1 * x * x - 0.2e1 * x) * sin(pi * tau / 0.2e1) + 0.6009615384e1 * pow(pi, 0.3e1) * (0.4e1 - 0.8e1 * x + cos(x * pi) * pi * sin(y * pi) * sin(0.5000000000e0 * pi * tau)) * sin(x * pi) * pow(cos(y * pi), 0.2e1) * sin(0.5000000000e0 * pi * tau) / (0.1e1 + 0.2e1 * x * x - 0.2e1 * x) * sin(pi * tau / 0.2e1) * cos(x * pi) - 0.3004807692e1 * pi * pi * (0.4e1 - 0.8e1 * x + cos(x * pi) * pi * sin(y * pi) * sin(0.5000000000e0 * pi * tau)) * pow(sin(x * pi), 0.2e1) * pow(cos(y * pi), 0.2e1) * sin(0.5000000000e0 * pi * tau) * pow(0.1e1 + 0.2e1 * x * x - 0.2e1 * x, -0.2e1) * sin(pi * tau / 0.2e1) * (0.4e1 * x - 0.2e1)) + sqrt(pow(0.2e1 + 0.4e1 * x * x - 0.4e1 * x, 0.2e1) / (0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1))) * (0.1201923077e2 * pow(pi, 0.3e1) * cos(x * pi) * pow(cos(y * pi), 0.2e1) * pow(sin(0.5000000000e0 * pi * tau), 0.2e1) * sin(x * pi) / (0.1e1 + 0.2e1 * x * x - 0.2e1 * x) * (-0.2e1 * x + 0.1e1 + 0.25e0 * cos(x * pi) * pi * sin(y * pi) * sin(pi * tau / 0.2e1)) - 0.1201923077e2 * pi * pi * (0.4e1 - 0.8e1 * x + cos(x * pi) * pi * sin(y * pi) * sin(0.5000000000e0 * pi * tau)) * sin(x * pi) * sin(y * pi) * sin(0.5000000000e0 * pi * tau) / (0.1e1 + 0.2e1 * x * x - 0.2e1 * x) * (-0.2e1 * x + 0.1e1 + 0.25e0 * cos(x * pi) * pi * sin(y * pi) * sin(pi * tau / 0.2e1)) + 0.3004807692e1 * pow(pi, 0.3e1) * (0.4e1 - 0.8e1 * x + cos(x * pi) * pi * sin(y * pi) * sin(0.5000000000e0 * pi * tau)) * sin(x * pi) * pow(cos(y * pi), 0.2e1) * sin(0.5000000000e0 * pi * tau) / (0.1e1 + 0.2e1 * x * x - 0.2e1 * x) * sin(pi * tau / 0.2e1) * cos(x * pi) + 0.2500000000e-8 * (-0.8241758240e10 * x * cos(x * pi) * pi * pi * cos(y * pi) * sin(0.5000000000e0 * pi * tau) + 0.4120879121e10 * cos(x * pi) * pi * pi * cos(y * pi) * sin(0.5000000000e0 * pi * tau) + 0.7898351648e10 * pow(cos(x * pi), 0.2e1) * pow(pi, 0.3e1) * cos(y * pi) * sin(y * pi) - 0.7898351648e10 * pow(cos(x * pi), 0.2e1) * pow(pi, 0.3e1) * cos(y * pi) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * sin(y * pi) - 0.6868131868e10 * cos(y * pi) * pow(pi, 0.3e1) * sin(y * pi) - 0.1373626374e11 * x * x * cos(y * pi) * pow(pi, 0.3e1) * sin(y * pi) + 0.1373626374e11 * x * cos(y * pi) * pow(pi, 0.3e1) * sin(y * pi) + 0.6868131868e10 * cos(y * pi) * pow(pi, 0.3e1) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * sin(y * pi) + 0.1373626374e11 * x * x * cos(y * pi) * pow(pi, 0.3e1) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * sin(y * pi) - 0.1373626374e11 * x * cos(y * pi) * pow(pi, 0.3e1) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * sin(y * pi) + 0.1373626374e11 * x * x * pow(cos(x * pi), 0.2e1) * pow(pi, 0.3e1) * cos(y * pi) * sin(y * pi) - 0.1373626374e11 * x * pow(cos(x * pi), 0.2e1) * pow(pi, 0.3e1) * cos(y * pi) * sin(y * pi) - 0.1373626374e11 * x * x * pow(cos(x * pi), 0.2e1) * pow(pi, 0.3e1) * cos(y * pi) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * sin(y * pi) + 0.1373626374e11 * x * pow(cos(x * pi), 0.2e1) * pow(pi, 0.3e1) * cos(y * pi) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * sin(y * pi)) / (0.1e1 + 0.2e1 * x * x - 0.2e1 * x) * sin(x * pi) * cos(y * pi) * pi * sin(pi * tau / 0.2e1) - 0.25e0 * (0.1000000000e-7 * (0.10e2 * x * x - 0.10e2 * x - 0.8241758240e10 * x * cos(x * pi) * pi * sin(y * pi) * sin(0.5000000000e0 * pi * tau) + 0.4120879121e10 * cos(x * pi) * pi * sin(y * pi) * sin(0.5000000000e0 * pi * tau) + 0.515109890e9 * pow(cos(x * pi), 0.2e1) * pi * pi - 0.515109890e9 * pow(cos(x * pi), 0.2e1) * pi * pi * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) - 0.3949175824e10 * pow(cos(x * pi), 0.2e1) * pi * pi * pow(cos(y * pi), 0.2e1) + 0.3949175824e10 * pow(cos(x * pi), 0.2e1) * pi * pi * pow(cos(y * pi), 0.2e1) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) + 0.3434065934e10 * pow(cos(y * pi), 0.2e1) * pi * pi + 0.6868131868e10 * x * x * pow(cos(y * pi), 0.2e1) * pi * pi - 0.6868131868e10 * x * pow(cos(y * pi), 0.2e1) * pi * pi - 0.3434065934e10 * pow(cos(y * pi), 0.2e1) * pi * pi * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) - 0.6868131868e10 * x * x * pow(cos(y * pi), 0.2e1) * pi * pi * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) + 0.6868131868e10 * x * pow(cos(y * pi), 0.2e1) * pi * pi * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) - 0.6868131868e10 * x * x * pow(cos(x * pi), 0.2e1) * pi * pi * pow(cos(y * pi), 0.2e1) + 0.6868131868e10 * x * pow(cos(x * pi), 0.2e1) * pi * pi * pow(cos(y * pi), 0.2e1) + 0.6868131868e10 * x * x * pow(cos(x * pi), 0.2e1) * pi * pi * pow(cos(y * pi), 0.2e1) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) - 0.6868131868e10 * x * pow(cos(x * pi), 0.2e1) * pi * pi * pow(cos(y * pi), 0.2e1) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1)) / (0.1e1 + 0.2e1 * x * x - 0.2e1 * x) + pow(fabs(0.1e1 * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1) - pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1) * (0.2e1 * x - 0.1e1) * (-0.2e1 * x + 0.1e1)), -0.2e1) * pow(0.1e1 * pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1) - pow(0.1e1 + pow(fabs(0.2e1 * x - 0.1e1), 0.2e1), -0.1e1 / 0.2e1) * (0.2e1 * x - 0.1e1) * (-0.2e1 * x + 0.1e1), 0.2e1) * 0.25e2) * sin(x * pi) * sin(y * pi) * pi * pi * sin(pi * tau / 0.2e1))) - 0.6250000000e-1 * sin(x * pi) * sin(y * pi) * sin(pi * tau / 0.2e1) * pi * pi;
              if (isnormal(value)==0){
                                                          cout << "fz(x,y,z) value is bounded to 0.0 at x=" << x << " and y= " <<y<<endl;
                                                          return 0.0;}
                                                          cout <<"fz(x,y,z) value is " << value << endl;
                                                          return value;
              return value;
          }

          static double mmsStructure25TargetX(double x, double y, double z, double tau) {
              double value=0;
              return value;
          }
          static double mmsStructure25TargetY(double x, double y, double z, double tau) {
              return 0.0;
          }
          static double mmsStructure25TargetZ(double x, double y, double z, double tau) {
              double pi=M_PI;
              return 0.25e0 * sin(x * pi) * sin(y * pi) * sin(pi * tau / 0.2e1);
          }



          //---------------------------------------------------------------------------------------------------------------------
          //---------------------------------------------------------------------------------------------------------------------


          static double mmsStructureMichl04SourceX(double x, double y, double z, double tau, double Lx, double Ly, double Thickness, double E, double nu, double rho, double Sprestress1, double Sprestress2, double bound) {
             double value=0.0;
             double pi=M_PI;
             std::cout << "Thickness is " << Thickness << endl;
             value = 0.3125000000e-1 * Thickness * cos(x / Lx * pi) * sin(x / Lx * pi) * pow(pi, 0.3e1) * E * (nu * Lx * Lx + 0.2e1 * Ly * Ly * pow(cos(y / Ly * pi), 0.2e1) - 0.2e1 * Ly * Ly - 0.1e1 * Lx * Lx + 0.2e1 * pow(cos(y / Ly * pi), 0.2e1) * Lx * Lx) * pow(Ly, -0.2e1) / (-0.1e1 + nu * nu) * pow(Lx, -0.3e1);



                 return value;
             }
          static double mmsStructureMichl04SourceY(double x, double y, double z, double tau, double Lx, double Ly, double Thickness, double E, double nu, double rho, double Sprestress1, double Sprestress2, double bound) {
              double pi=M_PI;
                 return  0.3125000000e-1 * Thickness * E * pow(pi, 0.3e1) * sin(y / Ly * pi) * cos(y / Ly * pi) * (nu * Ly * Ly - 0.1e1 * Ly * Ly + 0.2e1 * pow(cos(x / Lx * pi), 0.2e1) * Ly * Ly - 0.2e1 * Lx * Lx + 0.2e1 * Lx * Lx * pow(cos(x / Lx * pi), 0.2e1)) * pow(Ly, -0.3e1) / (-0.1e1 + nu * nu) * pow(Lx, -0.2e1);


             }
          static double mmsStructureMichl04SourceZ(double x, double y, double z, double tau, double Lx, double Ly, double Thickness, double E, double nu, double rho, double Sprestress1, double Sprestress2, double bound) {
             double value=0.0;
             double pi=M_PI;
             value=  0.7812500000e-2 * Thickness * sin(x / Lx * pi) * pi * pi * sin(y / Ly * pi) * (0.32e2 * pow(Ly, 0.4e1) * Sprestress1 * Lx * Lx * nu * nu + 0.32e2 * pow(Lx, 0.4e1) * Sprestress2 * Ly * Ly * nu * nu - 0.3e1 * pi * pi * E * pow(cos(x / Lx * pi), 0.2e1) * pow(Ly, 0.4e1) + 0.3e1 * pi * pi * E * pow(cos(x / Lx * pi), 0.2e1) * pow(Ly, 0.4e1) * pow(cos(y / Ly * pi), 0.2e1) + 0.6e1 * E * pow(cos(x / Lx * pi), 0.2e1) * pi * pi * pow(cos(y / Ly * pi), 0.2e1) * Lx * Lx * Ly * Ly - 0.1e1 * Lx * Lx * pi * pi * E * pow(cos(x / Lx * pi), 0.2e1) * Ly * Ly - 0.3e1 * pi * pi * E * pow(cos(y / Ly * pi), 0.2e1) * pow(Lx, 0.4e1) - 0.32e2 * pow(Lx, 0.4e1) * Sprestress2 * Ly * Ly - 0.1e1 * Ly * Ly * pi * pi * E * pow(cos(y / Ly * pi), 0.2e1) * Lx * Lx - 0.32e2 * pow(Ly, 0.4e1) * Sprestress1 * Lx * Lx + 0.3e1 * pi * pi * E * pow(cos(y / Ly * pi), 0.2e1) * pow(Lx, 0.4e1) * pow(cos(x / Lx * pi), 0.2e1)) * pow(Ly, -0.4e1) * pow(Lx, -0.4e1) / (-0.1e1 + nu * nu);


             return value;
             }
          static double mmsStructureMichl04TargetX(double x, double y, double z, double tau, double Lx, double Ly, double Thickness, double E, double nu, double rho, double Sprestress1, double Sprestress2, double bound) {
                 return 0.0;
             }
          static double mmsStructureMichl04TargetY(double x, double y, double z, double tau, double Lx, double Ly, double Thickness, double E, double nu, double rho, double Sprestress1, double Sprestress2, double bound) {
                 return 0.0;
             }
          static double mmsStructureMichl04TargetZ(double x, double y, double z, double tau, double Lx, double Ly, double Thickness, double E, double nu, double rho, double Sprestress1, double Sprestress2, double bound) {
              double pi=M_PI;
              double value=0;
              //std::cout << "Lx is " << Lx << endl;
              //std::cout << "Ly is " << Ly << endl;
              value= 0.25e0 * sin(x / Lx * pi) * sin(y / Ly * pi);
                      if (bound==1){
                      if (x>Lx || y>Ly)
                              return 0;
                      }
                      else{
                      return value;
                      }
                      return 0;
             }
          static double mmsStructureMichl24SourceX(double x, double y, double z, double tau, double Lx, double Ly, double Thickness, double E, double nu, double rho, double Sprestress1, double Sprestress2, double bound) {
             double value=0.0;
             double pi=M_PI;
             //std::cout << "Thickness is " << Thickness << endl;
             value = -0.3125000000e-1 * Thickness * cos(x / Lx * pi) * sin(x / Lx * pi) * pow(pi, 0.3e1) * E * (-0.1e1 * nu * Lx * Lx + nu * Lx * Lx * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) + 0.2e1 * pow(cos(y / Ly * pi), 0.2e1) * Lx * Lx * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) + Lx * Lx - 0.2e1 * pow(cos(y / Ly * pi), 0.2e1) * Lx * Lx - 0.2e1 * Ly * Ly * pow(cos(y / Ly * pi), 0.2e1) - 0.1e1 * Lx * Lx * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) - 0.2e1 * Ly * Ly * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) + 0.2e1 * Ly * Ly + 0.2e1 * Ly * Ly * pow(cos(y / Ly * pi), 0.2e1) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1)) * pow(Ly, -0.2e1) / (-0.1e1 + nu * nu) * pow(Lx, -0.3e1);




                 return value;
             }
          static double mmsStructureMichl24SourceY(double x, double y, double z, double tau, double Lx, double Ly, double Thickness, double E, double nu, double rho, double Sprestress1, double Sprestress2, double bound) {
              double pi=M_PI;
                 return  -0.3125000000e-1 * Thickness * E * pow(pi, 0.3e1) * sin(y / Ly * pi) * cos(y / Ly * pi) * (-0.1e1 * Ly * Ly * nu + Ly * Ly * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) * nu + Ly * Ly - 0.2e1 * pow(cos(x / Lx * pi), 0.2e1) * Ly * Ly - 0.2e1 * Lx * Lx * pow(cos(x / Lx * pi), 0.2e1) - 0.1e1 * Ly * Ly * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) + 0.2e1 * pow(cos(x / Lx * pi), 0.2e1) * Ly * Ly * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) + 0.2e1 * Lx * Lx * pow(cos(x / Lx * pi), 0.2e1) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) - 0.2e1 * Lx * Lx * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) + 0.2e1 * Lx * Lx) * pow(Ly, -0.3e1) / (-0.1e1 + nu * nu) * pow(Lx, -0.2e1);




             }
          static double mmsStructureMichl24SourceZ(double x, double y, double z, double tau, double Lx, double Ly, double Thickness, double E, double nu, double rho, double Sprestress1, double Sprestress2, double bound) {
             double value=0.0;
             double pi=M_PI;
             value=  -0.7812500000e-2 * Thickness * sin(x / Lx * pi) * pi * pi * sin(y / Ly * pi) * sin(0.5000000000e0 * pi * tau) * (-0.1e1 * E * pi * pi * pow(cos(y / Ly * pi), 0.2e1) * Lx * Lx * Ly * Ly * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) - 0.1e1 * E * pi * pi * pow(cos(x / Lx * pi), 0.2e1) * Lx * Lx * Ly * Ly * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) + 0.3e1 * pi * pi * E * pow(cos(x / Lx * pi), 0.2e1) * pow(Ly, 0.4e1) - 0.32e2 * pow(Ly, 0.4e1) * Sprestress1 * Lx * Lx * nu * nu + 0.3e1 * pi * pi * E * pow(cos(y / Ly * pi), 0.2e1) * pow(Lx, 0.4e1) - 0.32e2 * pow(Lx, 0.4e1) * Sprestress2 * Ly * Ly * nu * nu + 0.8e1 * rho * pow(Lx, 0.4e1) * pow(Ly, 0.4e1) * nu * nu - 0.3e1 * pi * pi * E * pow(cos(x / Lx * pi), 0.2e1) * pow(Ly, 0.4e1) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) - 0.3e1 * pi * pi * E * pow(cos(x / Lx * pi), 0.2e1) * pow(Ly, 0.4e1) * pow(cos(y / Ly * pi), 0.2e1) - 0.3e1 * pi * pi * E * pow(cos(y / Ly * pi), 0.2e1) * pow(Lx, 0.4e1) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) - 0.3e1 * pi * pi * E * pow(cos(y / Ly * pi), 0.2e1) * pow(Lx, 0.4e1) * pow(cos(x / Lx * pi), 0.2e1) - 0.8e1 * rho * pow(Lx, 0.4e1) * pow(Ly, 0.4e1) + 0.32e2 * pow(Ly, 0.4e1) * Sprestress1 * Lx * Lx + 0.32e2 * pow(Lx, 0.4e1) * Sprestress2 * Ly * Ly + 0.6e1 * E * pi * pi * pow(cos(x / Lx * pi), 0.2e1) * pow(cos(y / Ly * pi), 0.2e1) * Lx * Lx * Ly * Ly * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) - 0.6e1 * E * pi * pi * pow(cos(x / Lx * pi), 0.2e1) * pow(cos(y / Ly * pi), 0.2e1) * Lx * Lx * Ly * Ly + 0.3e1 * pi * pi * E * pow(cos(x / Lx * pi), 0.2e1) * pow(Ly, 0.4e1) * pow(cos(y / Ly * pi), 0.2e1) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) + 0.3e1 * pi * pi * E * pow(cos(y / Ly * pi), 0.2e1) * pow(Lx, 0.4e1) * pow(cos(x / Lx * pi), 0.2e1) * pow(cos(0.5000000000e0 * pi * tau), 0.2e1) + Ly * Ly * pi * pi * E * pow(cos(y / Ly * pi), 0.2e1) * Lx * Lx + Lx * Lx * pi * pi * E * pow(cos(x / Lx * pi), 0.2e1) * Ly * Ly) * pow(Ly, -0.4e1) * pow(Lx, -0.4e1) / (-0.1e1 + nu * nu);

             return value;
             }
          static double mmsStructureMichl24TargetX(double x, double y, double z, double tau, double Lx, double Ly, double Thickness, double E, double nu, double rho, double Sprestress1, double Sprestress2, double bound) {
                 return 0.0;
             }
          static double mmsStructureMichl24TargetY(double x, double y, double z, double tau, double Lx, double Ly, double Thickness, double E, double nu, double rho, double Sprestress1, double Sprestress2, double bound) {
                 return 0.0;
             }
          static double mmsStructureMichl24TargetZ(double x, double y, double z, double tau, double Lx, double Ly, double Thickness, double E, double nu, double rho, double Sprestress1, double Sprestress2, double bound) {
              double pi=M_PI;
              double value=0;
              //std::cout << "Lx is " << Lx << endl;
              //std::cout << "Ly is " << Ly << endl;
                   // if (x<=Lx || y<=Ly)
                 value= 0.25e0 * sin(x * pi) * sin(y * pi) * sin(pi * tau / 0.2e1);
                    if (bound==1){
                    if (x>Lx || y>Ly)
                            return 0;
                    }
                    else{
                    return value;
                    }
                    return 0;
             }

#endif /* MMSFUNCTIONS_H_ */
