#include <iostream>
using namespace std;

// creating a function to print an array

void printAnArray(int arr[], int size)
{
    cout << "Printing an array element" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
// get max value in an array
int getMaxValue(int arr[], int size)
{
    int max_value = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (max_value < arr[i])
        {
            max_value = arr[i];
        }
    }
    return max_value;
}
// get min value in an array
int getMinValue(int arr[], int size)
{
    int min_value = arr[0];
    // cout << min_value << endl;
    for (int i = 1; i < size; i++)
    {
        if (min_value > arr[i])
        {
            min_value = arr[i];
        }
    }
    return min_value;
}
int main()
{
    // max and min element in an array
    int numArr[10] = {10, 20, 30, 4, 5};
    // int size = sizeof(numArr) / sizeof(numArr[0]);
    int size = 5;

    // cout << size;
    cout << "Min value of an array is : " << getMinValue(numArr, size) << endl;
    cout << "Max value of an array is : " << getMaxValue(numArr, size) << endl;

    return 0;
}