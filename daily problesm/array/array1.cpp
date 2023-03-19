#include <iostream>
using namespace std;

void printAnArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
void swapAlternate(int arr[], int size)
{
    for (int i = 0; i < size; i = i + 2)
    {
        if (i + 1 < size)
        {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
}

int main()
{
    // swap alternate in an array
    int arr[6] = {10, 20, 30, 40, 50, 69};
    int sizeOfArray = sizeof(arr) / sizeof(arr[0]);

    cout << "Before : " << endl;

    printAnArray(arr, sizeOfArray);

    swapAlternate(arr, sizeOfArray);
    cout << endl;
    cout << "After : " << endl;
    printAnArray(arr, sizeOfArray);

    int oddArr[5] = {22, 23, 24, 46, 55};
    int sizeOfOdd = sizeof(arr) / sizeof(arr[0]);

    cout << endl;
    printAnArray(oddArr, sizeOfOdd);

    swapAlternate(oddArr, sizeOfOdd);
    cout << endl;
    printAnArray(oddArr, sizeOfOdd);
    return 0;
}