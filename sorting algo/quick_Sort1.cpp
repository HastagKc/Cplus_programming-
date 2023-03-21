#include <iostream>
using namespace std;

// void swap(int a, int b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
// };
// partion function
int partion(int arr[], int start, int end)
{
    // selecting first position element as pivort element

    int pivort = arr[start];
    // we have to count element
    // less than or eqaul to pivort
    // and provide right place for it
    int count = 0;

    for (int i = start + 1; i <= end; i++)
    {
        if (arr[i] <= pivort)
            count++;
    }
    // giving right place for the pivort element
    int pivortIndex = start + count;

    // swap the start and pivortIndex element
    swap(arr[pivortIndex], arr[start]);

    // sorting lt and rt side of array
    int i = start, j = end;
    while (i < pivortIndex && j > pivortIndex)
    {
        // less than pivort element

        while (arr[i] <= pivort)
        {
            i++;
        }
        while (arr[j] > pivort)
        {
            j--;
        }
        if (i < pivortIndex && j > pivortIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }
    return pivortIndex;
}

// creating a quickSort function

void quickSort(int arr[], int start, int end)
{

    // base case
    if (start >= end)
        return;

    // partion
    int p = partion(arr, start, end);

    // left side partion
    quickSort(arr, start, p - 1);

    // right side partion
    quickSort(arr, p + 1, end);
};

int main()
{
    /*   int arr[5] = {5, 2, 3, 1, 7};
      int sizeOfArray = sizeof(arr) / sizeof(arr[0]); */

    int arr[] = {9, 3, 4, 2, 1, 8};
    int n = 6;

    // calling quickSort Function
    // quickSort(arr, 0, sizeOfArray - 1);
    quickSort(arr, 0, n - 1);

    // printing an array after sorting
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}