#include <iostream>
using namespace std;

int main()
{
    //! array
    // array is a collection of same data types
    // having continuguous
    // memory location

    // declaration of an array
    // data types name_of_array [size_0f_array];
    int arr[5];

    // initialization of an array
    int arr1[5] = {10, 20, 30, 40, 50};

    // accessing an array
    cout << arr1[1] << endl;

    // modifiding an array element
    int firstArr[5] = {10, 20, 30, 40, 50};
    cout << "Printing original array \n";

    for (int i = 0; i < 5; i++)
    {
        cout << firstArr[i] << " ";
    }
    firstArr[2] = 80;

    cout << "\n After modification of an array: \n ";
    for (int i = 0; i < 5; i++)
    {
        cout << firstArr[i] << " ";
    }

    return 0;
}