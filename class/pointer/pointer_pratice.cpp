#include <iostream>
using namespace std;

int main()
{
    int A[5] = {10, 20, 30, 41, 25};

    int *p;
    p = A;

    cout << p << endl;
    p = &A[1];
    cout << p << endl;

    for (int i = 1; i < 5; i++)
    {
        cout << p[i] << " ";
    }
    return 0;
}