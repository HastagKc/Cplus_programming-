#include <iostream>
using namespace std;

// function declaration or prototype
// with formal parametre
int add(int a, int b)
{
    // function of body
    int c = a + b;
    return c;
}
int main()
{
    int x, y, z;
    cout << "Enter two number: " << endl;
    cin >> x;
    cin >> y;

    // passing actual parameter
    z = add(x, y);

    cout << "The sum of two number is : " << z << endl;

    return 0;
}
