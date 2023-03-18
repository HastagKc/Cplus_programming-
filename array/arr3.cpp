#include <iostream>
using namespace std;

// creating an function
void printArray(int arr[], int size)
{
    cout << "Printing an array " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Printing is complete" << endl;
}
int main()
{
    int sizeOfArray = 5;
    int firstArr[sizeOfArray] = {10, 20, 30, 45, 55};
    printArray(firstArr, sizeOfArray);
    return 0;
}