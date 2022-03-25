#include <iostream>
#include "point.h"
using namespace std;

int main()
{
    Point p1(2, 3);
    cout << "The coordinate of point 1 is: ";
    p1.printXY();
    Point p2(3, 3);
    Point p4;
    Point p3 = p1 + p2;
    cout << "The coordinate of point 3 is: ";
    p3.printXY();
}
