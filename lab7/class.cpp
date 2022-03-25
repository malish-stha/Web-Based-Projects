#include <iostream>
using namespace std;

class Rectange
{
private:
    int length;

public:
    void setLength(int length) { this->length = length; }
    void printAdd()
    {
        cout << "My address is" << this;
    }
};

int main()
{
    Rectangle r1, r2;
    Rectange r3(2, 3);
    r1.printAdd();
    r2.printAdd();
}