#include "circle.h"

void Circle::setX(double xx) {
    x=xx;
};
double Circle::getX() {
    return x;
};

void Circle::setY(double yy) {
    y=yy;
};
double Circle::getY() {
    return y;
};

void Circle::setR(double rr) {
    r=rr;
};
double Circle::getR() {
    return r;
};

double Circle::D() {
    return r*2;
}
double Circle::S() {
    return PI*r*r;
}
double Circle::L() {
    return 2*PI*r;
}

string Circle::cross(Circle n1) {
    if (sqrt(pow(n1.x-this->x,2)-pow(n1.y-this->y, 2))>(n1.r+this->r)) {
        return "these circles cross";
    }
    else {
        return "these circles doesn't cross";
    }
}