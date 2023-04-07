#include <iostream>
using namespace std;

void fun(int a[], int size)
{
    int i;
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
}
int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    fun(arr, 5);
    return 0;
}