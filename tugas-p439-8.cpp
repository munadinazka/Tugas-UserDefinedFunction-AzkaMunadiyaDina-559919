#include <iostream>
using namespace std;

float squareRoot (double a) {
    double sqrt = a / 2.0;

    for (int i = 0; i < 20; ++i) {
        sqrt = (sqrt + (a / sqrt)) / 2.0;
    }

    return sqrt;
}

const float phi = 3.1416;

double distance (double w, double x, double y, double z) {
    double d;
    d = ((y - w) * (y - w)) + ((z - x) * (z - x));
    return d;
    }

double circumference (double b) {
    double c;
    c = 2 * phi * b;
    return c;
}

double area (double e) {
    double f;
    f = phi * e * e;
    return f;
}

int main () {
    cout << "*Distance Between 2 Points (on Circle) Program*" << endl << endl;

    double x1;
    double x2;
    double y1;
    double y2;

    cout << "Input value x of center on the circle: ";
    cin >> x1;
    cout << "Input value y of center on the circle: ";
    cin >> y1;

    cout << "Input value x of point on the circle: ";
    cin  >> x2;
    cout << "Input value y of point on the circle: ";
    cin >> y2;

    cout << endl;

    double radius;
    radius = squareRoot(distance(x1, y1, x2, y2));
    cout << "Circle's Radius = " << radius << endl;

    double diameter;
    diameter = 2 * radius;
    cout << "Circle's Diameter = " << diameter << endl;

    double Circumference;
    Circumference = circumference(radius);
    cout << "Circle's Circumference = " << Circumference << endl;

    double Area;
    Area = area(radius);
    cout << "Circle's Area = " << Area << endl;
    cout << "Done!" << endl;

    return 0;
}