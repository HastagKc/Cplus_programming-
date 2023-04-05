#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    // creating variable in heap memory

    int *p;
    // in c programming
    // p = (int *)malloc(5 * sizeof(int));

    // in c++
    p = new int[5];

    p[0] = 10;
    p[1] = 20;
    p[2] = 30;
    p[3] = 40;
    p[4] = 50;

    for (int i = 0; i < 5; i++)
    {
        cout << p[i] << " ";
    }

    return 0;
}