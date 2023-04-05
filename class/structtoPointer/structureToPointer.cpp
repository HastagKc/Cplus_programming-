#include <iostream>
using namespace std;

// creating a structure
struct Rectangle
{
    int length;
    int breadth;
};
int main()
{
    // creating an reference variable of
    // the structure
    struct Rectangle r1 = {10, 45};
    // creating pointer p and providng address of r1
    struct Rectangle *p = &r1;

    r1.length = 90;
    p->breadth = 90;
    // or
    (*p).length = 78;

    cout << p->length << endl;
    cout << p->breadth << endl;

    return 0;
}