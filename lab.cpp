#include <iostream>
#include <cmath>

using namespace std;

struct Point {
    double x;
    double y;
};

double distance(const Point& p1, const Point& p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

void diagonalLengths(const Point& p1, const Point& p2, const Point& p3, const Point& p4, double& d1, double& d2) {
    d1 = distance(p1, p3);
    d2 = distance(p2, p4);
}

int main() {
    Point p1 = {1.0, 1.0};
    Point p2 = {4.0, 5.0};
    Point p3 = {7.0, 2.0};
    Point p4 = {5.0, -1.0};

    double diagonal1, diagonal2;

   
    diagonalLengths(p1, p2, p3, p4, diagonal1, diagonal2);

    
    cout << "Length of diagonal 1: " << diagonal1 << endl;
    cout << "Length of diagonal 2: " << diagonal2 << endl;

    return 0;
}

