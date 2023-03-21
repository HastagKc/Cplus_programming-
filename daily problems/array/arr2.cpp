#include <iostream>
using namespace std;

int returnUniqueElement(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{
    // finding unique element in and array
    // using xor

    int arr[6] = {10, 10, 20, 32, 20};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << returnUniqueElement(arr, size);
    return 0;
}