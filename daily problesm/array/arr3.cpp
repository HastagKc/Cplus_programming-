#include <iostream>
using namespace std;

int main()
{
    /*
    Given an array of integers arr, return true if the number
    of occurrences of each value in the array is unique or
    false otherwise.

    */
    int arr[] = {-3, 0, 1, -3, 1, 1, 1, -3, 10, 0};
    int size = sizeof(arr) / sizeof(arr[0]);

    // sort an array using bubble sort algo
    // time complexity of bubble sort is O(n^2)
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}