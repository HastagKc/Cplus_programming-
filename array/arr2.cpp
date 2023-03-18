#include <iostream>
using namespace std;

int main()
{
    // storing value in array by user input
    int SIZE_OF_ARRAY = 5;
    int arr[SIZE_OF_ARRAY];

    cout << "Enter array element" << endl;
    for (int i = 0; i < SIZE_OF_ARRAY; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < SIZE_OF_ARRAY; i++)

    {
        cout << arr[i] << " ";
    }
    return 0;
}