#include <iostream>
using namespace std;

int main()
{
    int a = 2;
    int b = a + 1;

    if ((a = 2) == b)
    {
        cout << "A1: " << a;
    }
    else
    {
        cout << "A2:" << a + 1;
    }
    return 0;
}