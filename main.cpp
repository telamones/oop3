#include "circle.h"
int main() {
    Circle a;
    double x1,y1,r1;
    cout << "enter centre and radius of circle #1:";
    cin >> x1 >> y1 >> r1;
    a.setX(x1);
    a.setY(y1);
    a.setR(r1);

    Circle b;
    double x2,y2,r2;
    cout << "enter centre and radius of circle #2:";
    cin >> x2 >> y2 >> r2;
    b.setX(x2);
    b.setY(y2);
    b.setR(r2);

    cout << "the centre of circle #1: (" << a.getX() << ";" << a.getY() << ")" << endl;
    cout << "radius of circle #1: " << a.getR() << endl;
    cout << "diameter of circle #1: " << a.D() << endl;
    cout << "area of circle #1: " << a.S() << endl;
    cout << "length of circle #1: " << a.L() << endl;
    cout << "the centre of circle #2: (" << b.getX() << ";" << b.getY() << ")" << endl;
    cout << "radius of circle #2: " << b.getR() << endl;
    cout << "diameter of circle #2: " << b.D() << endl;
    cout << "area of circle #2: " << b.S() << endl;
    cout << "length of circle #2: " << b.L() << endl << endl;

    cout << a.cross(b);
}