#include <iostream>
using namespace std;

int *fun(int size)
{
    int *p;
    p = new int[size];

    for (int i = 0; i < size; i++)
    {
        p[i] = i + 10;
    }
    return p;
}
int main()
{
    int *a;
    a = fun(5);

    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}