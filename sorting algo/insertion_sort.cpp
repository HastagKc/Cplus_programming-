#include <iostream>
using namespace std;

int main()
{
    // insertion sort

    int arr[5] = {9, 5, 1, 4, 3};
    int sizeOfArray = sizeof(arr) / sizeof(arr[0]);

    cout << "Before insertion sort :" << endl;

    for (int i = 0; i < sizeOfArray; i++)
    {
        cout << arr[i] << " ";
    }

    // usiing insertion sort algorithms
    // outer loop is used to traverse in an array
    for (int i = 1; i < sizeOfArray; i++)
    {
        // take one element from unsorted array
        int temp = arr[i];
        // because the arr[i] going to compare with all it left side
        // sorted array
        int j = i - 1;

        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        /*  cout << endl;
         cout << "Value of j is: " << j << endl; */
        arr[j + 1] = temp;
    }
    cout << endl;
    cout << "printing sorted array: " << endl;
    for (int i = 0; i < sizeOfArray; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}