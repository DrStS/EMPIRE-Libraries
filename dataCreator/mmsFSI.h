#ifndef MMSFSI_H_
#define MMSFSI_H_

#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <string>

using namespace std;



          static double mmsFsi01SourceFX(double x, double y, double z, double tau) {
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
          static double mmsFsi01SourceFY(double x, double y, double z, double tau) {
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
          static double mmsFsi01SourceFZ(double x, double y, double z, double tau) {
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

          static double mmsFsi01TargetDX(double x, double y, double z, double tau) {
              double value=0;
              return value;
          }
          static double mmsFsi01TargetDY(double x, double y, double z, double tau) {
              return 0.0;
          }
          static double mmsFsi01TargetDZ(double x, double y, double z, double tau) {
                          double pi=M_PI;
                           return 0;
                       }

          static double mmsFsi01TargetFX(double x, double y, double z, double tau) {

              return 0.0;
          }
          static double mmsFsi01TargetFY(double x, double y, double z, double tau) {
              double pi=M_PI;
              double t=tau;
              double value=-0.1000e4 * sin(0.50e2 * pi * t) * cos(0.1e1 * pi * (-0.1e1 + x));
              return value;
          }
          static double mmsFsi01TargetFZ(double x, double y, double z, double tau) {

              return 0.;
          }
          static double mmsFsi04SourceFX(double x, double y, double z, double tau) {
          double pi=M_PI;
           double value=0;
           return value;
                             }
          static double mmsFsi04SourceFY(double x, double y, double z, double tau) {
              double value=0;
              return value;
          }
          static double mmsFsi04SourceFZ(double x, double y, double z, double tau) {
            double pi=M_PI;
            double value=0;
            return value;
          }

          static double mmsFsi04TargetDX(double x, double y, double z, double tau) {
              double value=0;
              return value;
          }
          static double mmsFsi04TargetDY(double x, double y, double z, double tau) {
              double pi = M_PI;
              double value = 0.5*(1.-y) *sin(pi * tau);
              return value;
          }
          static double mmsFsi04TargetDZ(double x, double y, double z, double tau) {
            double pi=M_PI;
              return 0;
          }

          static double mmsFsi04TargetFX(double x, double y, double z, double tau) {
             double pi=M_PI;
             double t=tau;
              return 0;
          }
          static double mmsFsi04TargetFY(double x, double y, double z, double tau) {
             double pi=M_PI;
             double t=tau;
              double value= -0.5001666667e3 * pi * cos(0.1e1 * pi * t) - 0.2000e4 - 0.100000e6 * cos(x) * sin(0.1e1 * pi * t);
              return value;
          }
          static double mmsFsi04TargetFZ(double x, double y, double z, double tau) {

              return 0.;
          }

          static double mmsFsi05SourceFX(double x, double y, double z, double tau) {
          double pi=M_PI;
           double value=0;
           return value;
                             }
          static double mmsFsi05SourceFY(double x, double y, double z, double tau) {
              double value=0;
              return value;
          }
          static double mmsFsi05SourceFZ(double x, double y, double z, double tau) {
            double pi=M_PI;
            double value=0;
            return value;
          }

          static double mmsFsi05TargetDX(double x, double y, double z, double tau) {
              double value=0;
              return value;
          }
          static double mmsFsi05TargetDY(double x, double y, double z, double tau) {
              double pi = M_PI;
              double value = 0.5 *sin(pi * tau);
              return value;
          }
          static double mmsFsi05TargetDZ(double x, double y, double z, double tau) {
            double pi=M_PI;
              return 0;
          }

          static double mmsFsi05TargetFX(double x, double y, double z, double tau) {
             double pi=M_PI;
             double t=tau;
              return 0;
          }
          static double mmsFsi05TargetFY(double x, double y, double z, double tau) {
             double pi=M_PI;
             double t=tau;
              double value= -0.2000e4 + 0.3533333333e0 * sin(x + sin(pi * t)) * sin(pi * t);
              return value;
          }
          static double mmsFsi05TargetFZ(double x, double y, double z, double tau) {

              return 0.;
          }

          static double mmsFsi06SourceFX(double x, double y, double z, double tau) {
                 double pi=M_PI;
                  double value=0;
                  return value;
                                    }
                 static double mmsFsi06SourceFY(double x, double y, double z, double tau) {
                     double value=0;
                     return value;
                 }
                 static double mmsFsi06SourceFZ(double x, double y, double z, double tau) {
                   double pi=M_PI;
                   double value=0;
                   return value;
                 }

                 static double mmsFsi06TargetDX(double x, double y, double z, double tau) {
                     double value=0;
                     return value;
                 }
                 static double mmsFsi06TargetDY(double x, double y, double z, double tau) {
                     double pi = M_PI;
                     double t = tau;
                     double value = pi * pi * t * t * sin(pi * t) - 0.2e1 * sin(pi * t) + 0.2e1 * pi * t * cos(pi * t);
                     return value;
                 }
                 static double mmsFsi06TargetDZ(double x, double y, double z, double tau) {
                   double pi=M_PI;
                     return 0;
                 }

                 static double mmsFsi06TargetFX(double x, double y, double z, double tau) {
                    double pi=M_PI;
                    double t=tau;
                     return -0.5000e3 * sin(x + pi * pi * t * t * sin(pi * t) - 0.2e1 * sin(pi * t) + 0.2e1 * pi * t * cos(pi * t)) * sin(pi * t); //mit abzug 2/3tr
                     //return -0.5000e3 * sin(x + pi * pi * t * t * sin(pi * t) - 0.2e1 * sin(pi * t) + 0.2e1 * pi * t * cos(pi * t)) * sin(pi * t); //ohne abzug
                 }
                 static double mmsFsi06TargetFY(double x, double y, double z, double tau) {
                    double pi=M_PI;
                    double t=tau;
                    double value= -0.2000e4 + 0.6666666666e3 * sin(x + pi * pi * t * t * sin(pi * t) - 0.2e1 * sin(pi * t) + 0.2e1 * pi * t * cos(pi * t)) * sin(pi * t);//mit abzug 2/3tr
                      //double value= -0.2000e4 + 0.10000e4      * sin(x + pi * pi * t * t * sin(pi * t) - 0.2e1 * sin(pi * t) + 0.2e1 * pi * t * cos(pi * t)) * sin(pi * t); //ohne abzug
                    //cout << "right here at mmsFsi06TargetFy" << endl;
                    return value;
                 }
                 static double mmsFsi06TargetFZ(double x, double y, double z, double tau) {

                     return 0.;
                 }
                 static double mmsFsi06aSourceFX(double x, double y, double z, double tau) {
                             double pi=M_PI;
                              double value=0;
                              return value;
                                                }
                             static double mmsFsi06aSourceFY(double x, double y, double z, double tau) {
                                 double value=0;
                                 return value;
                             }
                             static double mmsFsi06aSourceFZ(double x, double y, double z, double tau) {
                               double pi=M_PI;
                               double value=0;
                               return value;
                             }

                             static double mmsFsi06aTargetDX(double x, double y, double z, double tau) {
                                 double value=0;
                                 return value;
                             }
                             static double mmsFsi06aTargetDY(double x, double y, double z, double tau) {
                                 double pi = M_PI;
                                 double t = tau;
                                 double value = pi * pi * t * t * sin(pi * t) - 0.2e1 * sin(pi * t) + 0.2e1 * pi * t * cos(pi * t);
                                 return value;
                             }
                             static double mmsFsi06aTargetDZ(double x, double y, double z, double tau) {
                               double pi=M_PI;
                                 return 0;
                             }

                             static double mmsFsi06aTargetFX(double x, double y, double z, double tau) {
                                double pi=M_PI;
                                double t=tau;
                                 return -0.10000e-1 * sin(x + pi * pi * t * t * sin(pi * t) - 0.2e1 * sin(pi * t) + 0.2e1 * pi * t * cos(pi * t)) * sin(pi * t);
                             }
                             static double mmsFsi06aTargetFY(double x, double y, double z, double tau) {
                                double pi=M_PI;
                                double t=tau;
                                return -0.2000e4 + 0.1333333333e-1 * sin(x + pi * pi * t * t * sin(pi * t) - 0.2e1 * sin(pi * t) + 0.2e1 * pi * t * cos(pi * t)) * sin(pi * t); //-2/3 trace
                                //return -0.2000e4 + 0.20000e-1 * sin(x + pi * pi * t * t * sin(pi * t) - 0.2e1 * sin(pi * t) + 0.2e1 * pi * t * cos(pi * t)) * sin(pi * t);
                             }
                             static double mmsFsi06aTargetFZ(double x, double y, double z, double tau) {

                                 return 0.;
                             }


                             static double mmsFsi31SourceFX(double x, double y, double z, double tau) {
							   double pi=M_PI;
								double value=0;
								return value;
												  }
							   static double mmsFsi31SourceFY(double x, double y, double z, double tau) {
								   double value=0;
								   return value;
							   }
							   static double mmsFsi31SourceFZ(double x, double y, double z, double tau) {
								 double pi=M_PI;
								 double value=0;
								 return value;
							   }

							   static double mmsFsi31TargetDX(double x, double y, double z, double tau) {
								   double value=0;
								   return value;
							   }
							   static double mmsFsi31TargetDY(double x, double y, double z, double tau) {
								   double pi = M_PI;
								   double t = tau;
								   double value = t * t * cos(0.1e1 * pi * t) * sin(pi * x);
								   //cout << "mmsFsiClient: adding target Dy of " << value << " at x = "<<x  << endl;

								   return value;
							   }
							   static double mmsFsi31TargetDZ(double x, double y, double z, double tau) {
								 double pi=M_PI;
								   return 0;
							   }

							   static double mmsFsi31TargetFX(double x, double y, double z, double tau) {
								  double pi=M_PI;
								  double t=tau;
								   return (0.100000e4 * pow(0.1e1 + t * t * cos(0.1e1 * pi * t) * sin(pi * x), 0.60e1) * t * t * cos(0.1e1 * pi * t) * cos(pi * x) * pi - 0.2000e4) * t * t * cos(0.1e1 * pi * t) * cos(pi * x) * pi * pow(pow(t, 0.4e1) * pow(cos(0.1e1 * pi * t), 0.2e1) * pow(cos(pi * x), 0.2e1) * pi * pi + 0.1e1, -0.1e1 / 0.2e1) - (-0.50000e3 * pow(0.1e1 + t * t * cos(0.1e1 * pi * t) * sin(pi * x), 0.60e1) + 0.10000e4 * t * cos(0.1e1 * pi * t) * cos(pi * x) * pi - 0.5000e3 * t * t * sin(0.1e1 * pi * t) * pi * pi * cos(pi * x) + 0.5000e3 * pow(0.1e1 + t * t * cos(0.1e1 * pi * t) * sin(pi * x), 0.60e1) * pow(t, 0.4e1) * pow(cos(0.1e1 * pi * t), 0.2e1) * pow(cos(pi * x), 0.2e1) * pi * pi) * pow(pow(t, 0.4e1) * pow(cos(0.1e1 * pi * t), 0.2e1) * pow(cos(pi * x), 0.2e1) * pi * pi + 0.1e1, -0.1e1 / 0.2e1);
								   0.100e1 * (-0.10000000e4 * pow(0.1e1 - 0.100e1 * sin(0.3141592654e1 * x), 0.60e1) * cos(0.3141592654e1 * x) * 0.3141592654e1 - 0.2000e4) * cos(0.3141592654e1 * x) * 0.3141592654e1 * pow(0.10000e1 * pow(cos(0.3141592654e1 * x), 0.2e1) * 0.3141592654e1 * 0.3141592654e1 + 0.1e1, -0.1e1 / 0.2e1) + (-0.50000e3 * pow(0.1e1 - 0.100e1 * sin(0.3141592654e1 * x), 0.60e1) - 0.100000e4 * cos(0.3141592654e1 * x) * 0.3141592654e1 + 0.50000000e3 * pow(0.1e1 - 0.100e1 * sin(0.3141592654e1 * x), 0.60e1) * pow(cos(0.3141592654e1 * x), 0.2e1) * 0.3141592654e1 * 0.3141592654e1) * pow(0.10000e1 * pow(cos(0.3141592654e1 * x), 0.2e1) * 0.3141592654e1 * 0.3141592654e1 + 0.1e1, -0.1e1 / 0.2e1);


							   }
							   static double mmsFsi31TargetFY(double x, double y, double z, double tau) {
								  double pi=M_PI;
								  double t=tau;
								  return (-0.50000e3 * pow(0.1e1 + t * t * cos(0.1e1 * pi * t) * sin(pi * x), 0.60e1) + 0.10000e4 * t * cos(0.1e1 * pi * t) * cos(pi * x) * pi - 0.5000e3 * t * t * sin(0.1e1 * pi * t) * pi * pi * cos(pi * x) + 0.5000e3 * pow(0.1e1 + t * t * cos(0.1e1 * pi * t) * sin(pi * x), 0.60e1) * pow(t, 0.4e1) * pow(cos(0.1e1 * pi * t), 0.2e1) * pow(cos(pi * x), 0.2e1) * pi * pi) * t * t * cos(0.1e1 * pi * t) * cos(pi * x) * pi * pow(pow(t, 0.4e1) * pow(cos(0.1e1 * pi * t), 0.2e1) * pow(cos(pi * x), 0.2e1) * pi * pi + 0.1e1, -0.1e1 / 0.2e1) - (-0.2000e4 - 0.10000e4 * pow(0.1e1 + t * t * cos(0.1e1 * pi * t) * sin(pi * x), 0.60e1) * t * t * cos(0.1e1 * pi * t) * cos(pi * x) * pi) * pow(pow(t, 0.4e1) * pow(cos(0.1e1 * pi * t), 0.2e1) * pow(cos(pi * x), 0.2e1) * pi * pi + 0.1e1, -0.1e1 / 0.2e1);

							   }
							   static double mmsFsi31TargetFZ(double x, double y, double z, double tau) {

								   return 0.;
							   }


							      static double mmsFsi32SourceFX(double x, double y, double z, double tau) {
														   double pi=M_PI;
															double value=0;
															return value;
																			  }
														   static double mmsFsi32SourceFY(double x, double y, double z, double tau) {
															   double value=0;
															   return value;
														   }
														   static double mmsFsi32SourceFZ(double x, double y, double z, double tau) {
															 double pi=M_PI;
															 double value=0;
															 return value;
														   }

														   static double mmsFsi32TargetDX(double x, double y, double z, double tau) {
															   double value=0;
															   return value;
														   }
														   static double mmsFsi32TargetDY(double x, double y, double z, double tau) {
															   double pi = M_PI;
															   double t = tau;
															   double value = sin(pi * x) * pow(sin(pi * t), 0.2e1) ;

															   return value;
														   }
														   static double mmsFsi32TargetDZ(double x, double y, double z, double tau) {
															 double pi=M_PI;
															   return 0;
														   }

														   static double mmsFsi32TargetFX(double x, double y, double z, double tau) {
															  double pi=M_PI;
															  double t=tau;
															   return 0.2000e4 * cos(pi * x) * pi * pow(sin(pi * t), 0.2e1) * pow(pow(cos(pi * x), 0.2e1) * pi * pi * pow(sin(pi * t), 0.4e1) + 0.1e1, -0.1e1 / 0.2e1) + 0.2000e-1 * cos(pi * x) * pi * pi * sin(pi * t) * cos(pi * t) * pow(pow(cos(pi * x), 0.2e1) * pi * pi * pow(sin(pi * t), 0.4e1) + 0.1e1, -0.1e1 / 0.2e1);

														   }
														   static double mmsFsi32TargetFY(double x, double y, double z, double tau) {
															  double pi=M_PI;
															  double t=tau;
															  return -0.2000e-1 * pow(cos(pi * x), 0.2e1) * pow(pi, 0.3e1) * pow(sin(pi * t), 0.3e1) * pow(pow(cos(pi * x), 0.2e1) * pi * pi * pow(sin(pi * t), 0.4e1) + 0.1e1, -0.1e1 / 0.2e1) * cos(pi * t) - 0.2000e4 * pow(pow(cos(pi * x), 0.2e1) * pi * pi * pow(sin(pi * t), 0.4e1) + 0.1e1, -0.1e1 / 0.2e1);


														   }
														   static double mmsFsi32TargetFZ(double x, double y, double z, double tau) {

															   return 0.;
														   }
														      static double mmsFsi33SourceFX(double x, double y, double z, double tau) {
														  double pi=M_PI;
														//return cos(x * pi) * pow(pi, 0.3e1) * sin(x * pi) * 0.100000000000000002e-1 + cos(x * pi) * pow(pi, 0.3e1) * pow(cos(0.2500000000e0 * tau * pi), 0.2e1) * sin(x * pi) * (-0.100000000000000002e-1);
												 		  return pow(pi, 0.3e1) * cos(pi * x) * sin(pi * x) * 0.109890109880000009e1 + cos(pi * x) * pow(pi, 0.3e1) * pow(cos(pi * tau), 0.2e1) * sin(pi * x) * (-0.219780219799999976e1) + cos(pi * x) * pow(pi, 0.3e1) * pow(cos(pi * tau), 0.4e1) * sin(pi * x) * 0.109890109880000009e1;
  }
																						   static double mmsFsi33SourceFY(double x, double y, double z, double tau) {
																							   //double value=0;
																								 double pi=M_PI;
																							   //return (-0.10e2 * cos(x * pi) * pow(pi, 0.3e1) * sin(x * pi) + 0.10e2 * cos(x * pi) * pow(pi, 0.3e1) * pow(cos(0.2500000000e0 * tau * pi), 0.2e1) * sin(x * pi)) * cos(x * pi) * pi * sin(0.2500000000e0 * tau * pi) * (-0.100000000000000005e-3) + (0.5e1 * pow(cos(x * pi), 0.2e1) * pi * pi - 0.5e1 * pow(cos(x * pi), 0.2e1) * pi * pi * pow(cos(0.2500000000e0 * tau * pi), 0.2e1) + 0.25e2) * sin(x * pi) * pi * pi * sin(0.2500000000e0 * tau * pi) * 0.100000000000000005e-3 - 0.6250000000e-2 * sin(x * pi) * sin(0.2500000000e0 * tau * pi) * pi * pi;
																							   return (-0.1098901099e4 * pow(pi, 0.3e1) * cos(pi * x) * sin(pi * x) + 0.2197802198e4 * cos(pi * x) * pow(pi, 0.3e1) * pow(cos(pi * tau), 0.2e1) * sin(pi * x) - 0.1098901099e4 * cos(pi * x) * pow(pi, 0.3e1) * pow(cos(pi * tau), 0.4e1) * sin(pi * x)) * cos(pi * x) * pi * pow(sin(pi * tau), 0.2e1) * (-0.100000000000000002e-2) + (0.5494505494e3 * pi * pi * pow(cos(pi * x), 0.2e1) - 0.1098901099e4 * pow(cos(pi * x), 0.2e1) * pi * pi * pow(cos(pi * tau), 0.2e1) + 0.5494505494e3 * pow(cos(pi * x), 0.2e1) * pi * pi * pow(cos(pi * tau), 0.4e1) + 0.25e2) * sin(pi * x) * pi * pi * pow(sin(pi * tau), 0.2e1) * 0.100000000000000002e-2 + 0.20000e1 * sin(pi * x) * pow(cos(pi * tau), 0.2e1) * pi * pi - 0.20000e1 * sin(pi * x) * pow(sin(pi * tau), 0.2e1) * pi * pi;

																						   }
																						   static double mmsFsi33SourceFZ(double x, double y, double z, double tau) {
																							 double pi=M_PI;
																							 return 0;
																						   }

																						   static double mmsFsi33TargetDX(double x, double y, double z, double tau) {
																							   double value=0;
																							   return value;
																						   }
																						   static double mmsFsi33TargetDY(double x, double y, double z, double tau) {
																							   double pi = M_PI;
																							   double t = tau;
																							   double value = sin(pi * x) * pow(sin(pi * t), 0.2e1) ;

																							   return value;
																						   }
																						   static double mmsFsi33TargetDZ(double x, double y, double z, double tau) {
																							 double pi=M_PI;
																							   return 0;
																						   }

																						   static double mmsFsi33TargetFX(double x, double y, double z, double tau) {
																							  double pi=M_PI;
																							  double t=tau;
																							   return 0.10000e3 * cos(pi * x) * pi * pi * sin(pi * t) * cos(pi * t) * pow(pow(cos(pi * x), 0.2e1) * pi * pi * pow(sin(pi * t), 0.4e1) + 0.1e1, -0.1e1 / 0.2e1);

																						   }
																						   static double mmsFsi33TargetFY(double x, double y, double z, double tau) {
																							  double pi=M_PI;
																							  double t=tau;
																							  return -0.10000e3 * pow(cos(pi * x), 0.2e1) * pow(pi, 0.3e1) * pow(sin(pi * t), 0.3e1) * pow(pow(cos(pi * x), 0.2e1) * pi * pi * pow(sin(pi * t), 0.4e1) + 0.1e1, -0.1e1 / 0.2e1) * cos(pi * t);


																						   }
																						   static double mmsFsi33TargetFZ(double x, double y, double z, double tau) {

																							   return 0.;
																						   }
//34
//STRUCTURE/FSI SOURCE FORCE
static double mmsFsi34SourceFX(double x, double y, double z, double tau) {
	double pi=M_PI;
    double t = tau;
//	double value=pow(pi, 0.3e1) * pow(tau, 0.6e1) * cos(pi * x) * sin(pi * x) * 0.109890109880000000e4 + cos(pi * x) * pow(pi, 0.3e1) * pow(tau, 0.6e1) * pow(cos(pi * tau), 0.2e1) * sin(pi * x) * (-0.109890109880000000e4);//totalForce
  //  double value = pow(pi, 0.3e1) * pow(tau, 0.6e1) * cos(pi * x) * sin(pi * x) * 0.109890109880000000e4 + cos(pi * x) * pow(pi, 0.3e1) * pow(tau, 0.6e1) * pow(cos(pi * tau), 0.2e1) * sin(pi * x) * (-0.109890109880000000e4) + 0.2000000000e1 * cos(0.3141592654e1 * x) * 0.3141592654e1 * sin(0.3141592654e1 * tau) * pow(tau, 0.3e1) * pow(pow(cos(0.3141592654e1 * x), 0.2e1) * 0.3141592654e1 * 0.3141592654e1 * pow(sin(0.3141592654e1 * tau), 0.2e1) * pow(tau, 0.6e1) + 0.1e1, -0.1e1 / 0.2e1) - (0.10000e-1 * cos(0.3141592654e1 * x) * 0.3141592654e1 * 0.3141592654e1 * cos(0.3141592654e1 * tau) * pow(tau, 0.3e1) + 0.30000e-1 * cos(0.3141592654e1 * x) * 0.3141592654e1 * sin(0.3141592654e1 * tau) * tau * tau) * pow(pow(cos(0.3141592654e1 * x), 0.2e1) * 0.3141592654e1 * 0.3141592654e1 * pow(sin(0.3141592654e1 * tau), 0.2e1) * pow(tau, 0.6e1) + 0.1e1, -0.1e1 / 0.2e1);//diff force
    double value = pow(pi, 0.3e1) * pow(tau, 0.6e1) * cos(pi * x) * sin(pi * x) * 0.109890109880000000e4 + cos(pi * x) * pow(pi, 0.3e1) * pow(tau, 0.6e1) * pow(cos(pi * tau), 0.2e1) * sin(pi * x) * (-0.109890109880000000e4) - (0.100000e-1 * cos(0.3141592654e1 * x) * 0.3141592654e1 * 0.3141592654e1 * cos(0.3141592654e1 * tau) * pow(tau, 0.3e1) + 0.300000e-1 * cos(0.3141592654e1 * x) * 0.3141592654e1 * sin(0.3141592654e1 * tau) * tau * tau) * pow(pow(cos(0.3141592654e1 * x), 0.2e1) * 0.3141592654e1 * 0.3141592654e1 * pow(sin(0.3141592654e1 * tau), 0.2e1) * pow(tau, 0.6e1) + 0.1e1, -0.1e1 / 0.2e1);

	return value;
	}
static double mmsFsi34SourceFY(double x, double y, double z, double tau) {
	double pi=M_PI;
	double t = tau;
//	double value= (-0.1098901099e7 * pow(pi, 0.3e1) * pow(tau, 0.6e1) * cos(pi * x) * sin(pi * x) + 0.1098901099e7 * cos(pi * x) * pow(pi, 0.3e1) * pow(tau, 0.6e1) * pow(cos(pi * tau), 0.2e1) * sin(pi * x)) * cos(pi * x) * pi * sin(pi * tau) * pow(tau, 0.3e1) * (-0.100000000000000002e-2) + (0.5494505494e6 * pi * pi * pow(tau, 0.6e1) * pow(cos(pi * x), 0.2e1) - 0.5494505494e6 * pow(cos(pi * x), 0.2e1) * pi * pi * pow(tau, 0.6e1) * pow(cos(pi * tau), 0.2e1) + 0.25e2) * sin(pi * x) * pi * pi * sin(pi * tau) * pow(tau, 0.3e1) * 0.100000000000000002e-2 - 0.10000000e4 * sin(pi * x) * sin(pi * tau) * pi * pi * pow(tau, 0.3e1) + 0.60000000e4 * sin(pi * x) * cos(pi * tau) * pi * tau * tau + 0.60000000e4 * sin(pi * x) * sin(pi * tau) * tau;//total Force
	//double value = (-0.1098901099e7 * pow(pi, 0.3e1) * pow(tau, 0.6e1) * cos(pi * x) * sin(pi * x) + 0.1098901099e7 * cos(pi * x) * pow(pi, 0.3e1) * pow(tau, 0.6e1) * pow(cos(pi * tau), 0.2e1) * sin(pi * x)) * cos(pi * x) * pi * sin(pi * tau) * pow(tau, 0.3e1) * (-0.100000000000000002e-2) + (0.5494505494e6 * pi * pi * pow(tau, 0.6e1) * pow(cos(pi * x), 0.2e1) - 0.5494505494e6 * pow(cos(pi * x), 0.2e1) * pi * pi * pow(tau, 0.6e1) * pow(cos(pi * tau), 0.2e1) + 0.25e2) * sin(pi * x) * pi * pi * sin(pi * tau) * pow(tau, 0.3e1) * 0.100000000000000002e-2 - 0.10000000e4 * sin(pi * x) * sin(pi * tau) * pi * pi * pow(tau, 0.3e1) + 0.60000000e4 * sin(pi * x) * cos(pi * tau) * pi * tau * tau + 0.60000000e4 * sin(pi * x) * sin(pi * tau) * tau + (0.10000e-1 * cos(0.3141592654e1 * x) * 0.3141592654e1 * 0.3141592654e1 * cos(0.3141592654e1 * tau) * pow(tau, 0.3e1) + 0.30000e-1 * cos(0.3141592654e1 * x) * 0.3141592654e1 * sin(0.3141592654e1 * tau) * tau * tau) * cos(0.3141592654e1 * x) * 0.3141592654e1 * sin(0.3141592654e1 * tau) * pow(tau, 0.3e1) * pow(pow(cos(0.3141592654e1 * x), 0.2e1) * 0.3141592654e1 * 0.3141592654e1 * pow(sin(0.3141592654e1 * tau), 0.2e1) * pow(tau, 0.6e1) + 0.1e1, -0.1e1 / 0.2e1) - 0.2000000000e1 * pow(pow(cos(0.3141592654e1 * x), 0.2e1) * 0.3141592654e1 * 0.3141592654e1 * pow(sin(0.3141592654e1 * tau), 0.2e1) * pow(tau, 0.6e1) + 0.1e1, -0.1e1 / 0.2e1);//diff force
	double value = (-0.1098901099e7 * pow(pi, 0.3e1) * pow(tau, 0.6e1) * cos(pi * x) * sin(pi * x) + 0.1098901099e7 * cos(pi * x) * pow(pi, 0.3e1) * pow(tau, 0.6e1) * pow(cos(pi * tau), 0.2e1) * sin(pi * x)) * cos(pi * x) * pi * sin(pi * tau) * pow(tau, 0.3e1) * (-0.100000000000000002e-2) + (0.5494505494e6 * pi * pi * pow(tau, 0.6e1) * pow(cos(pi * x), 0.2e1) - 0.5494505494e6 * pow(cos(pi * x), 0.2e1) * pi * pi * pow(tau, 0.6e1) * pow(cos(pi * tau), 0.2e1) + 0.25e2) * sin(pi * x) * pi * pi * sin(pi * tau) * pow(tau, 0.3e1) * 0.100000000000000002e-2 - 0.10000000e4 * sin(pi * x) * sin(pi * tau) * pi * pi * pow(tau, 0.3e1) + 0.60000000e4 * sin(pi * x) * cos(pi * tau) * pi * tau * tau + 0.60000000e4 * sin(pi * x) * sin(pi * tau) * tau + (0.100000e-1 * cos(0.3141592654e1 * x) * 0.3141592654e1 * 0.3141592654e1 * cos(0.3141592654e1 * tau) * pow(tau, 0.3e1) + 0.300000e-1 * cos(0.3141592654e1 * x) * 0.3141592654e1 * sin(0.3141592654e1 * tau) * tau * tau) * cos(0.3141592654e1 * x) * 0.3141592654e1 * sin(0.3141592654e1 * tau) * pow(tau, 0.3e1) * pow(pow(cos(0.3141592654e1 * x), 0.2e1) * 0.3141592654e1 * 0.3141592654e1 * pow(sin(0.3141592654e1 * tau), 0.2e1) * pow(tau, 0.6e1) + 0.1e1, -0.1e1 / 0.2e1);
	return value;
    }
static double mmsFsi34SourceFZ(double x, double y, double z, double tau) {
    return 0;
	}
//STRUCTURE DISP TARGET
static double mmsFsi34TargetDX(double x, double y, double z, double tau) {
	double value=0;
	return value;
	}
static double mmsFsi34TargetDY(double x, double y, double z, double tau) {
    double pi = M_PI;
	double t = tau;
	double value = sin(pi * x) * sin(pi * t) * pow(t, 0.3e1);
	return value;
    }
static double mmsFsi34TargetDZ(double x, double y, double z, double tau) {
    double pi=M_PI;
	return 0;
    }
//FLUID FORCE TARGET
static double mmsFsi34TargetFX(double x, double y, double z, double tau) {
    double pi=M_PI;
    double t=tau;
	//return -0.20000e3 * cos(pi * x) * pi * sin(pi * t) * pow(t, 0.3e1) * pow(pow(cos(pi * x), 0.2e1) * pi * pi * pow(sin(pi * t), 0.2e1) * pow(t, 0.6e1) + 0.1e1, -0.1e1 / 0.2e1) + (0.100000e-1 * cos(pi * x) * pi * pi * cos(pi * t) * pow(t, 0.3e1) + 0.300000e-1 * cos(pi * x) * pi * sin(pi * t) * t * t) * pow(pow(cos(pi * x), 0.2e1) * pi * pi * pow(sin(pi * t), 0.2e1) * pow(t, 0.6e1) + 0.1e1, -0.1e1 / 0.2e1);
  //return -0.20000e3 * cos(pi * x) * pi * sin(pi * t) * pow(t, 0.3e1) * pow(pow(cos(pi * x), 0.2e1) * pi * pi * pow(sin(pi * t), 0.2e1) * pow(t, 0.6e1) + 0.1e1, -0.1e1 / 0.2e1) + (0.100000e-1 * cos(pi * x) * pi * pi * cos(pi * t) * pow(t, 0.3e1) + 0.300000e-1 * cos(pi * x) * pi * sin(pi * t) * t * t) * pow(pow(cos(pi * x), 0.2e1) * pi * pi * pow(sin(pi * t), 0.2e1) * pow(t, 0.6e1) + 0.1e1, -0.1e1 / 0.2e1);
	return (0.100000e-1 * cos(x * pi) * pi * pi * cos(pi * t) * pow(t, 0.3e1) + 0.300000e-1 * cos(x * pi) * pi * sin(pi * t) * t * t) * pow(pow(cos(x * pi), 0.2e1) * pi * pi * pow(sin(pi * t), 0.2e1) * pow(t, 0.6e1) + 0.1e1, -0.1e1 / 0.2e1);//p0=0

    }
static double mmsFsi34TargetFY(double x, double y, double z, double tau) {
	double pi=M_PI;
	double t=tau;
	//double value = -(0.100000e-1 * cos(pi * x) * pi * pi * cos(pi * t) * pow(t, 0.3e1) + 0.300000e-1 * cos(pi * x) * pi * sin(pi * t) * t * t) * cos(pi * x) * pi * sin(pi * t) * pow(t, 0.3e1) * pow(pow(cos(pi * x), 0.2e1) * pi * pi * pow(sin(pi * t), 0.2e1) * pow(t, 0.6e1) + 0.1e1, -0.1e1 / 0.2e1) + 0.20000e3 * pow(pow(cos(pi * x), 0.2e1) * pi * pi * pow(sin(pi * t), 0.2e1) * pow(t, 0.6e1) + 0.1e1, -0.1e1 / 0.2e1);
	double value = -(0.100000e-1 * cos(x * pi) * pi * pi * cos(pi * t) * pow(t, 0.3e1) + 0.300000e-1 * cos(x * pi) * pi * sin(pi * t) * t * t) * cos(x * pi) * pi * sin(pi * t) * pow(t, 0.3e1) * pow(pow(cos(x * pi), 0.2e1) * pi * pi * pow(sin(pi * t), 0.2e1) * pow(t, 0.6e1) + 0.1e1, -0.1e1 / 0.2e1);//p0=0


    return value;
	}
static double mmsFsi34TargetFZ(double x, double y, double z, double tau) {
    return 0;
	}


//35
//STRUCTURE/FSI SOURCE FORCE
static double mmsFsi35SourceFX(double x, double y, double z, double tau) {
	double pi=M_PI;
    double t = tau;
    double value = pow(pi, 0.3e1) * pow(tau, 0.6e1) * cos(pi * x) * sin(pi * x) * 0.109890109880000000e4 + cos(pi * x) * pow(pi, 0.3e1) * pow(tau, 0.6e1) * pow(cos(pi * tau), 0.2e1) * sin(pi * x) * (-0.109890109880000000e4) + 0.50000e3 * cos(0.3141592654e1 * x) * 0.3141592654e1 * sin(0.3141592654e1 * tau) * pow(tau, 0.3e1) * pow(pow(cos(0.3141592654e1 * x), 0.2e1) * 0.3141592654e1 * 0.3141592654e1 * pow(sin(0.3141592654e1 * tau), 0.2e1) * pow(tau, 0.6e1) + 0.1e1, -0.1e1 / 0.2e1) - (0.100000e-1 * cos(0.3141592654e1 * x) * 0.3141592654e1 * 0.3141592654e1 * cos(0.3141592654e1 * tau) * pow(tau, 0.3e1) + 0.300000e-1 * cos(0.3141592654e1 * x) * 0.3141592654e1 * sin(0.3141592654e1 * tau) * tau * tau) * pow(pow(cos(0.3141592654e1 * x), 0.2e1) * 0.3141592654e1 * 0.3141592654e1 * pow(sin(0.3141592654e1 * tau), 0.2e1) * pow(tau, 0.6e1) + 0.1e1, -0.1e1 / 0.2e1);//diff f//-p
    //double value = pow(pi, 0.3e1) * pow(tau, 0.6e1) * cos(pi * x) * sin(pi * x) * 0.109890109880000000e4 + cos(pi * x) * pow(pi, 0.3e1) * pow(tau, 0.6e1) * pow(cos(pi * tau), 0.2e1) * sin(pi * x) * (-0.109890109880000000e4) - 0.50000e3 * cos(0.3141592654e1 * x) * 0.3141592654e1 * sin(0.3141592654e1 * tau) * pow(tau, 0.3e1) * pow(pow(cos(0.3141592654e1 * x), 0.2e1) * 0.3141592654e1 * 0.3141592654e1 * pow(sin(0.3141592654e1 * tau), 0.2e1) * pow(tau, 0.6e1) + 0.1e1, -0.1e1 / 0.2e1) - (0.100000e-1 * cos(0.3141592654e1 * x) * 0.3141592654e1 * 0.3141592654e1 * cos(0.3141592654e1 * tau) * pow(tau, 0.3e1) + 0.300000e-1 * cos(0.3141592654e1 * x) * 0.3141592654e1 * sin(0.3141592654e1 * tau) * tau * tau) * pow(pow(cos(0.3141592654e1 * x), 0.2e1) * 0.3141592654e1 * 0.3141592654e1 * pow(sin(0.3141592654e1 * tau), 0.2e1) * pow(tau, 0.6e1) + 0.1e1, -0.1e1 / 0.2e1); //+p

	return value;
	}
static double mmsFsi35SourceFY(double x, double y, double z, double tau) {
	double pi=M_PI;
	double t = tau;
	double value = (-0.1098901099e7 * pow(pi, 0.3e1) * pow(tau, 0.6e1) * cos(pi * x) * sin(pi * x) + 0.1098901099e7 * cos(pi * x) * pow(pi, 0.3e1) * pow(tau, 0.6e1) * pow(cos(pi * tau), 0.2e1) * sin(pi * x)) * cos(pi * x) * pi * sin(pi * tau) * pow(tau, 0.3e1) * (-0.100000000000000002e-2) + (0.5494505494e6 * pi * pi * pow(tau, 0.6e1) * pow(cos(pi * x), 0.2e1) - 0.5494505494e6 * pow(cos(pi * x), 0.2e1) * pi * pi * pow(tau, 0.6e1) * pow(cos(pi * tau), 0.2e1) + 0.25e2) * sin(pi * x) * pi * pi * sin(pi * tau) * pow(tau, 0.3e1) * 0.100000000000000002e-2 - 0.10000000e4 * sin(pi * x) * sin(pi * tau) * pi * pi * pow(tau, 0.3e1) + 0.60000000e4 * sin(pi * x) * cos(pi * tau) * pi * tau * tau + 0.60000000e4 * sin(pi * x) * sin(pi * tau) * tau + (0.100000e-1 * cos(0.3141592654e1 * x) * 0.3141592654e1 * 0.3141592654e1 * cos(0.3141592654e1 * tau) * pow(tau, 0.3e1) + 0.300000e-1 * cos(0.3141592654e1 * x) * 0.3141592654e1 * sin(0.3141592654e1 * tau) * tau * tau) * cos(0.3141592654e1 * x) * 0.3141592654e1 * sin(0.3141592654e1 * tau) * pow(tau, 0.3e1) * pow(pow(cos(0.3141592654e1 * x), 0.2e1) * 0.3141592654e1 * 0.3141592654e1 * pow(sin(0.3141592654e1 * tau), 0.2e1) * pow(tau, 0.6e1) + 0.1e1, -0.1e1 / 0.2e1) - 0.50000e3 * pow(pow(cos(0.3141592654e1 * x), 0.2e1) * 0.3141592654e1 * 0.3141592654e1 * pow(sin(0.3141592654e1 * tau), 0.2e1) * pow(tau, 0.6e1) + 0.1e1, -0.1e1 / 0.2e1);//diff f//-p
//	double value = (-0.1098901099e7 * pow(pi, 0.3e1) * pow(tau, 0.6e1) * cos(pi * x) * sin(pi * x) + 0.1098901099e7 * cos(pi * x) * pow(pi, 0.3e1) * pow(tau, 0.6e1) * pow(cos(pi * tau), 0.2e1) * sin(pi * x)) * cos(pi * x) * pi * sin(pi * tau) * pow(tau, 0.3e1) * (-0.100000000000000002e-2) + (0.5494505494e6 * pi * pi * pow(tau, 0.6e1) * pow(cos(pi * x), 0.2e1) - 0.5494505494e6 * pow(cos(pi * x), 0.2e1) * pi * pi * pow(tau, 0.6e1) * pow(cos(pi * tau), 0.2e1) + 0.25e2) * sin(pi * x) * pi * pi * sin(pi * tau) * pow(tau, 0.3e1) * 0.100000000000000002e-2 - 0.10000000e4 * sin(pi * x) * sin(pi * tau) * pi * pi * pow(tau, 0.3e1) + 0.60000000e4 * sin(pi * x) * cos(pi * tau) * pi * tau * tau + 0.60000000e4 * sin(pi * x) * sin(pi * tau) * tau + (0.100000e-1 * cos(0.3141592654e1 * x) * 0.3141592654e1 * 0.3141592654e1 * cos(0.3141592654e1 * tau) * pow(tau, 0.3e1) + 0.300000e-1 * cos(0.3141592654e1 * x) * 0.3141592654e1 * sin(0.3141592654e1 * tau) * tau * tau) * cos(0.3141592654e1 * x) * 0.3141592654e1 * sin(0.3141592654e1 * tau) * pow(tau, 0.3e1) * pow(pow(cos(0.3141592654e1 * x), 0.2e1) * 0.3141592654e1 * 0.3141592654e1 * pow(sin(0.3141592654e1 * tau), 0.2e1) * pow(tau, 0.6e1) + 0.1e1, -0.1e1 / 0.2e1) + 0.50000e3 * pow(pow(cos(0.3141592654e1 * x), 0.2e1) * 0.3141592654e1 * 0.3141592654e1 * pow(sin(0.3141592654e1 * tau), 0.2e1) * pow(tau, 0.6e1) + 0.1e1, -0.1e1 / 0.2e1);//+p

	return value;
    }
static double mmsFsi35SourceFZ(double x, double y, double z, double tau) {
    return 0;
	}
//STRUCTURE DISP TARGET
static double mmsFsi35TargetDX(double x, double y, double z, double tau) {
	double value=0;
	return value;
	}
static double mmsFsi35TargetDY(double x, double y, double z, double tau) {
    double pi = M_PI;
	double t = tau;
	double value = sin(pi * x) * sin(pi * t) * pow(t, 0.3e1);
	return value;
    }
static double mmsFsi35TargetDZ(double x, double y, double z, double tau) {
    double pi=M_PI;
	return 0;
    }
//FLUID FORCE TARGET
static double mmsFsi35TargetFX(double x, double y, double z, double tau) {
    double pi=M_PI;
    double t=tau;
	return  -0.50000e3 * cos(pi * x) * pi * sin(pi * t) * pow(t, 0.3e1) * pow(pow(cos(pi * x), 0.2e1) * pi * pi * pow(sin(pi * t), 0.2e1) * pow(t, 0.6e1) + 0.1e1, -0.1e1 / 0.2e1) + (0.100000e-1 * cos(pi * x) * pi * pi * cos(pi * t) * pow(t, 0.3e1) + 0.300000e-1 * cos(pi * x) * pi * sin(pi * t) * t * t) * pow(pow(cos(pi * x), 0.2e1) * pi * pi * pow(sin(pi * t), 0.2e1) * pow(t, 0.6e1) + 0.1e1, -0.1e1 / 0.2e1); //-p
	//return 0.50000e3 * cos(pi * x) * pi * sin(pi * t) * pow(t, 0.3e1) * pow(pow(cos(pi * x), 0.2e1) * pi * pi * pow(sin(pi * t), 0.2e1) * pow(t, 0.6e1) + 0.1e1, -0.1e1 / 0.2e1) + (0.100000e-1 * cos(pi * x) * pi * pi * cos(pi * t) * pow(t, 0.3e1) + 0.300000e-1 * cos(pi * x) * pi * sin(pi * t) * t * t) * pow(pow(cos(pi * x), 0.2e1) * pi * pi * pow(sin(pi * t), 0.2e1) * pow(t, 0.6e1) + 0.1e1, -0.1e1 / 0.2e1); //+p


    }
static double mmsFsi35TargetFY(double x, double y, double z, double tau) {
	double pi=M_PI;
	double t=tau;
	double value = -(0.100000e-1 * cos(pi * x) * pi * pi * cos(pi * t) * pow(t, 0.3e1) + 0.300000e-1 * cos(pi * x) * pi * sin(pi * t) * t * t) * cos(pi * x) * pi * sin(pi * t) * pow(t, 0.3e1) * pow(pow(cos(pi * x), 0.2e1) * pi * pi * pow(sin(pi * t), 0.2e1) * pow(t, 0.6e1) + 0.1e1, -0.1e1 / 0.2e1) + 0.50000e3 * pow(pow(cos(pi * x), 0.2e1) * pi * pi * pow(sin(pi * t), 0.2e1) * pow(t, 0.6e1) + 0.1e1, -0.1e1 / 0.2e1);//-p
	//double value = -(0.100000e-1 * cos(pi * x) * pi * pi * cos(pi * t) * pow(t, 0.3e1) + 0.300000e-1 * cos(pi * x) * pi * sin(pi * t) * t * t) * cos(pi * x) * pi * sin(pi * t) * pow(t, 0.3e1) * pow(pow(cos(pi * x), 0.2e1) * pi * pi * pow(sin(pi * t), 0.2e1) * pow(t, 0.6e1) + 0.1e1, -0.1e1 / 0.2e1) - 0.50000e3 * pow(pow(cos(pi * x), 0.2e1) * pi * pi * pow(sin(pi * t), 0.2e1) * pow(t, 0.6e1) + 0.1e1, -0.1e1 / 0.2e1);//+p

    return value;
	}
static double mmsFsi35TargetFZ(double x, double y, double z, double tau) {
    return 0;
	}


//51
//STRUCTURE/FSI SOURCE FORCE
static double mmsFsi51SourceFX(double x, double y, double z, double tau) {
	double pi=M_PI;
    double t = tau;
    return (0.50000e3 - 0.1333333333e-1 * sin(x + sin(0.3141592654e1 * x) * sin(0.3141592654e1 * tau) * tau * tau + z) * cos(0.3141592654e1 * x) * 0.3141592654e1 * sin(0.3141592654e1 * tau) * tau * tau) * cos(0.3141592654e1 * x) * 0.3141592654e1 * sin(0.3141592654e1 * tau) * tau * tau * pow(pow(cos(0.3141592654e1 * x), 0.2e1) * 0.3141592654e1 * 0.3141592654e1 * pow(sin(0.3141592654e1 * tau), 0.2e1) * pow(tau, 0.4e1) + 0.1e1, -0.1e1 / 0.2e1) - (0.100000e-1 * sin(x + sin(0.3141592654e1 * x) * sin(0.3141592654e1 * tau) * tau * tau + z) + 0.100000e-1 * cos(0.3141592654e1 * x) * 0.3141592654e1 * 0.3141592654e1 * cos(0.3141592654e1 * tau) * tau * tau + 0.200000e-1 * cos(0.3141592654e1 * x) * 0.3141592654e1 * sin(0.3141592654e1 * tau) * tau) * pow(pow(cos(0.3141592654e1 * x), 0.2e1) * 0.3141592654e1 * 0.3141592654e1 * pow(sin(0.3141592654e1 * tau), 0.2e1) * pow(tau, 0.4e1) + 0.1e1, -0.1e1 / 0.2e1);

	}
static double mmsFsi51SourceFY(double x, double y, double z, double tau) {
	double pi=M_PI;
	double t = tau;
	return -0.10000000e4 * sin(pi * x) * sin(pi * tau) * pi * pi * tau * tau + 0.40000000e4 * sin(pi * x) * cos(pi * tau) * pi * tau + 0.20000000e4 * sin(pi * x) * sin(pi * tau) + (0.100000e-1 * sin(x + sin(0.3141592654e1 * x) * sin(0.3141592654e1 * tau) * tau * tau + z) + 0.100000e-1 * cos(0.3141592654e1 * x) * 0.3141592654e1 * 0.3141592654e1 * cos(0.3141592654e1 * tau) * tau * tau + 0.200000e-1 * cos(0.3141592654e1 * x) * 0.3141592654e1 * sin(0.3141592654e1 * tau) * tau) * cos(0.3141592654e1 * x) * 0.3141592654e1 * sin(0.3141592654e1 * tau) * tau * tau * pow(pow(cos(0.3141592654e1 * x), 0.2e1) * 0.3141592654e1 * 0.3141592654e1 * pow(sin(0.3141592654e1 * tau), 0.2e1) * pow(tau, 0.4e1) + 0.1e1, -0.1e1 / 0.2e1) - (0.50000e3 + 0.6666666667e-2 * sin(x + sin(0.3141592654e1 * x) * sin(0.3141592654e1 * tau) * tau * tau + z) * cos(0.3141592654e1 * x) * 0.3141592654e1 * sin(0.3141592654e1 * tau) * tau * tau) * pow(pow(cos(0.3141592654e1 * x), 0.2e1) * 0.3141592654e1 * 0.3141592654e1 * pow(sin(0.3141592654e1 * tau), 0.2e1) * pow(tau, 0.4e1) + 0.1e1, -0.1e1 / 0.2e1);


    }
static double mmsFsi51SourceFZ(double x, double y, double z, double tau) {
	double pi=M_PI;
	double t = tau;
    return -0.100000e-1 * pow(cos(0.3141592654e1 * x), 0.2e1) * 0.3141592654e1 * 0.3141592654e1 * pow(sin(0.3141592654e1 * tau), 0.2e1) * pow(tau, 0.4e1) * sin(x + sin(0.3141592654e1 * x) * sin(0.3141592654e1 * tau) * tau * tau + z) * pow(pow(cos(0.3141592654e1 * x), 0.2e1) * 0.3141592654e1 * 0.3141592654e1 * pow(sin(0.3141592654e1 * tau), 0.2e1) * pow(tau, 0.4e1) + 0.1e1, -0.1e1 / 0.2e1) - 0.100000e-1 * sin(x + sin(0.3141592654e1 * x) * sin(0.3141592654e1 * tau) * tau * tau + z) * pow(pow(cos(0.3141592654e1 * x), 0.2e1) * 0.3141592654e1 * 0.3141592654e1 * pow(sin(0.3141592654e1 * tau), 0.2e1) * pow(tau, 0.4e1) + 0.1e1, -0.1e1 / 0.2e1);
	}
//STRUCTURE DISP TARGET
static double mmsFsi51TargetDX(double x, double y, double z, double tau) {
	double value=0;
	return value;
	}
static double mmsFsi51TargetDY(double x, double y, double z, double tau) {
    double pi = M_PI;
	double t = tau;
	return sin(pi * x) * sin(pi * t) * t * t;
    }
static double mmsFsi51TargetDZ(double x, double y, double z, double tau) {
    double pi=M_PI;
	return 0;
    }
//FLUID FORCE TARGET
static double mmsFsi51TargetFX(double x, double y, double z, double tau) {
    double pi=M_PI;
    double t=tau;
	return  -(0.50000e3 - 0.1333333333e-1 * sin(x + sin(pi * x) * sin(pi * t) * t * t + z) * cos(pi * x) * pi * sin(pi * t) * t * t) * cos(pi * x) * pi * sin(pi * t) * t * t * pow(pow(cos(pi * x), 0.2e1) * pi * pi * pow(sin(pi * t), 0.2e1) * pow(t, 0.4e1) + 0.1e1, -0.1e1 / 0.2e1) + (0.100000e-1 * sin(x + sin(pi * x) * sin(pi * t) * t * t + z) + 0.100000e-1 * cos(pi * x) * pi * pi * cos(pi * t) * t * t + 0.200000e-1 * cos(pi * x) * pi * sin(pi * t) * t) * pow(pow(cos(pi * x), 0.2e1) * pi * pi * pow(sin(pi * t), 0.2e1) * pow(t, 0.4e1) + 0.1e1, -0.1e1 / 0.2e1);

    }
static double mmsFsi51TargetFY(double x, double y, double z, double tau) {
	double pi=M_PI;
	double t=tau;
	return -(0.100000e-1 * sin(x + sin(pi * x) * sin(pi * t) * t * t + z) + 0.100000e-1 * cos(pi * x) * pi * pi * cos(pi * t) * t * t + 0.200000e-1 * cos(pi * x) * pi * sin(pi * t) * t) * cos(pi * x) * pi * sin(pi * t) * t * t * pow(pow(cos(pi * x), 0.2e1) * pi * pi * pow(sin(pi * t), 0.2e1) * pow(t, 0.4e1) + 0.1e1, -0.1e1 / 0.2e1) + (0.50000e3 + 0.6666666667e-2 * sin(x + sin(pi * x) * sin(pi * t) * t * t + z) * cos(pi * x) * pi * sin(pi * t) * t * t) * pow(pow(cos(pi * x), 0.2e1) * pi * pi * pow(sin(pi * t), 0.2e1) * pow(t, 0.4e1) + 0.1e1, -0.1e1 / 0.2e1);

	}
static double mmsFsi51TargetFZ(double x, double y, double z, double tau) {
	double pi=M_PI;
	double t=tau;
    return 0.100000e-1 * pow(cos(pi * x), 0.2e1) * pi * pi * pow(sin(pi * t), 0.2e1) * pow(t, 0.4e1) * pow(pow(cos(pi * x), 0.2e1) * pi * pi * pow(sin(pi * t), 0.2e1) * pow(t, 0.4e1) + 0.1e1, -0.1e1 / 0.2e1) * sin(x + sin(pi * x) * sin(pi * t) * t * t + z) + 0.100000e-1 * pow(pow(cos(pi * x), 0.2e1) * pi * pi * pow(sin(pi * t), 0.2e1) * pow(t, 0.4e1) + 0.1e1, -0.1e1 / 0.2e1) * sin(x + sin(pi * x) * sin(pi * t) * t * t + z);

	}

//52
//STRUCTURE/FSI SOURCE FORCE
static double mmsFsi52SourceFX(double x, double y, double z, double tau) {
	double pi=M_PI;
    double t = tau;
    return (0.50000e3 - 0.1333333333e-2 * sin(x + sin(0.3141592654e1 * x) * sin(0.3141592654e1 * tau) * tau * tau + z) * cos(0.3141592654e1 * x) * 0.3141592654e1 * sin(0.3141592654e1 * tau) * tau * tau) * cos(0.3141592654e1 * x) * 0.3141592654e1 * sin(0.3141592654e1 * tau) * tau * tau * pow(pow(cos(0.3141592654e1 * x), 0.2e1) * 0.3141592654e1 * 0.3141592654e1 * pow(sin(0.3141592654e1 * tau), 0.2e1) * pow(tau, 0.4e1) + 0.1e1, -0.1e1 / 0.2e1) - (0.100000e-2 * sin(x + sin(0.3141592654e1 * x) * sin(0.3141592654e1 * tau) * tau * tau + z) + 0.100000e-1 * cos(0.3141592654e1 * x) * 0.3141592654e1 * 0.3141592654e1 * cos(0.3141592654e1 * tau) * tau * tau + 0.200000e-1 * cos(0.3141592654e1 * x) * 0.3141592654e1 * sin(0.3141592654e1 * tau) * tau) * pow(pow(cos(0.3141592654e1 * x), 0.2e1) * 0.3141592654e1 * 0.3141592654e1 * pow(sin(0.3141592654e1 * tau), 0.2e1) * pow(tau, 0.4e1) + 0.1e1, -0.1e1 / 0.2e1);

	}
static double mmsFsi52SourceFY(double x, double y, double z, double tau) {
	double pi=M_PI;
	double t = tau;
	return -0.10000000e4 * sin(pi * x) * sin(pi * tau) * pi * pi * tau * tau + 0.40000000e4 * sin(pi * x) * cos(pi * tau) * pi * tau + 0.20000000e4 * sin(pi * x) * sin(pi * tau) + (0.100000e-2 * sin(x + sin(0.3141592654e1 * x) * sin(0.3141592654e1 * tau) * tau * tau + z) + 0.100000e-1 * cos(0.3141592654e1 * x) * 0.3141592654e1 * 0.3141592654e1 * cos(0.3141592654e1 * tau) * tau * tau + 0.200000e-1 * cos(0.3141592654e1 * x) * 0.3141592654e1 * sin(0.3141592654e1 * tau) * tau) * cos(0.3141592654e1 * x) * 0.3141592654e1 * sin(0.3141592654e1 * tau) * tau * tau * pow(pow(cos(0.3141592654e1 * x), 0.2e1) * 0.3141592654e1 * 0.3141592654e1 * pow(sin(0.3141592654e1 * tau), 0.2e1) * pow(tau, 0.4e1) + 0.1e1, -0.1e1 / 0.2e1) - (0.50000e3 + 0.6666666667e-3 * sin(x + sin(0.3141592654e1 * x) * sin(0.3141592654e1 * tau) * tau * tau + z) * cos(0.3141592654e1 * x) * 0.3141592654e1 * sin(0.3141592654e1 * tau) * tau * tau) * pow(pow(cos(0.3141592654e1 * x), 0.2e1) * 0.3141592654e1 * 0.3141592654e1 * pow(sin(0.3141592654e1 * tau), 0.2e1) * pow(tau, 0.4e1) + 0.1e1, -0.1e1 / 0.2e1);



    }
static double mmsFsi52SourceFZ(double x, double y, double z, double tau) {
	double pi=M_PI;
	double t = tau;
    return -0.100000e-2 * pow(cos(0.3141592654e1 * x), 0.2e1) * 0.3141592654e1 * 0.3141592654e1 * pow(sin(0.3141592654e1 * tau), 0.2e1) * pow(tau, 0.4e1) * sin(x + sin(0.3141592654e1 * x) * sin(0.3141592654e1 * tau) * tau * tau + z) * pow(pow(cos(0.3141592654e1 * x), 0.2e1) * 0.3141592654e1 * 0.3141592654e1 * pow(sin(0.3141592654e1 * tau), 0.2e1) * pow(tau, 0.4e1) + 0.1e1, -0.1e1 / 0.2e1) - 0.100000e-2 * sin(x + sin(0.3141592654e1 * x) * sin(0.3141592654e1 * tau) * tau * tau + z) * pow(pow(cos(0.3141592654e1 * x), 0.2e1) * 0.3141592654e1 * 0.3141592654e1 * pow(sin(0.3141592654e1 * tau), 0.2e1) * pow(tau, 0.4e1) + 0.1e1, -0.1e1 / 0.2e1);

	}
//STRUCTURE DISP TARGET
static double mmsFsi52TargetDX(double x, double y, double z, double tau) {
	double value=0;
	return value;
	}
static double mmsFsi52TargetDY(double x, double y, double z, double tau) {
    double pi = M_PI;
	double t = tau;
	return sin(pi * x) * sin(pi * t) * t * t;
    }
static double mmsFsi52TargetDZ(double x, double y, double z, double tau) {
    double pi=M_PI;
	return 0;
    }
//FLUID FORCE TARGET
static double mmsFsi52TargetFX(double x, double y, double z, double tau) {
    double pi=M_PI;
    double t=tau;
	return  -(0.50000e3 - 0.1333333333e-2 * sin(x + sin(pi * x) * sin(pi * t) * t * t + z) * cos(pi * x) * pi * sin(pi * t) * t * t) * cos(pi * x) * pi * sin(pi * t) * t * t * pow(pow(cos(pi * x), 0.2e1) * pi * pi * pow(sin(pi * t), 0.2e1) * pow(t, 0.4e1) + 0.1e1, -0.1e1 / 0.2e1) + (0.100000e-2 * sin(x + sin(pi * x) * sin(pi * t) * t * t + z) + 0.100000e-1 * cos(pi * x) * pi * pi * cos(pi * t) * t * t + 0.200000e-1 * cos(pi * x) * pi * sin(pi * t) * t) * pow(pow(cos(pi * x), 0.2e1) * pi * pi * pow(sin(pi * t), 0.2e1) * pow(t, 0.4e1) + 0.1e1, -0.1e1 / 0.2e1);

    }
static double mmsFsi52TargetFY(double x, double y, double z, double tau) {
	double pi=M_PI;
	double t=tau;
	return -(0.100000e-2 * sin(x + sin(pi * x) * sin(pi * t) * t * t + z) + 0.100000e-1 * cos(pi * x) * pi * pi * cos(pi * t) * t * t + 0.200000e-1 * cos(pi * x) * pi * sin(pi * t) * t) * cos(pi * x) * pi * sin(pi * t) * t * t * pow(pow(cos(pi * x), 0.2e1) * pi * pi * pow(sin(pi * t), 0.2e1) * pow(t, 0.4e1) + 0.1e1, -0.1e1 / 0.2e1) + (0.50000e3 + 0.6666666667e-3 * sin(x + sin(pi * x) * sin(pi * t) * t * t + z) * cos(pi * x) * pi * sin(pi * t) * t * t) * pow(pow(cos(pi * x), 0.2e1) * pi * pi * pow(sin(pi * t), 0.2e1) * pow(t, 0.4e1) + 0.1e1, -0.1e1 / 0.2e1);

	}
static double mmsFsi52TargetFZ(double x, double y, double z, double tau) {
	double pi=M_PI;
	double t=tau;
    return 0.100000e-2 * pow(cos(pi * x), 0.2e1) * pi * pi * pow(sin(pi * t), 0.2e1) * pow(t, 0.4e1) * pow(pow(cos(pi * x), 0.2e1) * pi * pi * pow(sin(pi * t), 0.2e1) * pow(t, 0.4e1) + 0.1e1, -0.1e1 / 0.2e1) * sin(x + sin(pi * x) * sin(pi * t) * t * t + z) + 0.100000e-2 * pow(pow(cos(pi * x), 0.2e1) * pi * pi * pow(sin(pi * t), 0.2e1) * pow(t, 0.4e1) + 0.1e1, -0.1e1 / 0.2e1) * sin(x + sin(pi * x) * sin(pi * t) * t * t + z);

	}

#endif /* MMSFSI_H_ */
