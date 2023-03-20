#include <iostream>
using namespace std;

// creating a bubble sort function
void bubbleSort(int arr[], int size)
{
    // implementing bubble sort algo in an array
    // this this case each element get swap and compare sorted and non sorted
    /*


    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }


    */

    // 2nd method
    bool swapped = false;
    for (int i = 0; i < size - 1; i++)

    //   [20, 10, 30, 4, 2];
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }
        if (!swapped)
        {
            break;
        }
    }
}
void printAnArry(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
};

int main()
{
    // learning bubble sort algo

    // in bubble sort two adjacent element
    // where compared and swap if first
    // one is greater than second one

    // calling bubbleSort function

    int arrNum[5] = {20, 10, 30, 4, 2};
    int sizeOfArray = sizeof(arrNum) / sizeof(arrNum[0]);
    cout << "Before bubble sort" << endl;
    printAnArry(arrNum, sizeOfArray);
    cout << endl;
    bubbleSort(arrNum, sizeOfArray);
    cout << "After bubble sort" << endl;
    printAnArry(arrNum, sizeOfArray);

    return 0;
}