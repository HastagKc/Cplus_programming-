#include <iostream>
using namespace std;

int main()
{
    // referance is another name of the same varaible

    int a = 20;
    // Creating a reference
    int &r = a;

    cout << r << endl;
    cout << a << endl;

    r = 90;
    cout << a << endl;
    cout << r << endl;

    return 0;
}