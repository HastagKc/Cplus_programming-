#include <iostream>
using namespace std;

// creating structure

struct Rectangle
{
    int length;
    int breadth;
};

int main()
{
    // crater r1 as struct variable
    // struct Rectangle r1 = {90, 89};
    struct Rectangle *p;
    // creating object dynamically

    p = new Rectangle;
    p->length = 10;
    p->breadth = 560;

    cout << p->length << endl;
    cout << p->breadth << endl;

    return 0;
}