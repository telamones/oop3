#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>
#include <cmath>
#include <string>
using namespace std;
const double PI = acos(-1.0);
class Circle {
    double x;
    double y;
    double r;
public:
    void setX(double xx);
    double getX();

    void setY(double yy);
    double getY();

    void setR(double rr);
    double getR();

    double D();
    double S();
    double L();

    string cross(Circle n1);
};

#endif