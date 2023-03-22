#include <iostream>
using namespace std;

int main()
{
    // declaring an 2d array in run time
    // declaring 2d array
    // total no of element can be store an array is 6
    // size of an array is 6*int(size)=24 bytes

    int arr[2][3];

    // input the value from user in an array
    cout << "Enter an element you want to store: " << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    // printing and array
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "arr [" << i << "]"
                 << "[" << j << "] : " << arr[i][j] << endl;
        }
    }

    return 0;
}