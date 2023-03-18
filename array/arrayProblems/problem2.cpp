#include <iostream>
using namespace std;

int getSum(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}
int main()
{
    // adding all element of an array
    int arr[5] = {10, 2, 3, 5, 5};
    // cout << sizeof(arr) / sizeof(arr[0]); // 5
    int sizeOfArray = sizeof(arr) / sizeof(arr[0]);

    cout << "Sum of all of element : " << getSum(arr, sizeOfArray) << endl;
}