#include <iostream>
using namespace std;

class Point
{
private:
    int x;
    int y;

public:
    Point() { x = 0, y = 0; }
    Point(int x_axis, int y_axis) : x(x_axis), y(y_axis) {}

    void setX(int x_axis) { x = x_axis; }
    void setY(int y_axis) { y = y_axis; }

    int getX() { return x; }
    int getY() { return y; }

    void setXY(int x_axis, int y_axis)
    {
        x = x_axis;
        y = y_axis;
    }
    void printXY()
    {
        cout << "(" << x << "," << y << ")" << endl;
    }
    Point operator+(Point p)
    {
        Point objectpt;
        objectpt.setXY(x + p.getX(), y + p.getY());
        return objectpt;
    }
};