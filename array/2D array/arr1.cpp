#include <iostream>
using namespace std;

int main()
{
    // declaration of 2d array
    //? datatypes array_name[row_size][col_size];

    //! array declaration in complile time
    // int arr[2][3] = {{1, 2, 3}, {40, 10, 15}};

    //! initializing an array with 0
    // int arr[2][3] = {0};

    // declaring with puting size in an array
    int arr[][3] = {1, 2, 3, 4};

    /*

        arr[0][0] : 1
        arr[0][1] : 2
        arr[0][2] : 3
        arr[1][0] : 4
        arr[1][1] : 0
        arr[1][2] : 0

    */

    //? printing an array
    // outer for loop for row
    for (int i = 0; i < 2; i++)
    {

        // inner loop for col
        for (int j = 0; j < 3; j++)
        {
            cout << "arr[" << i << "]"
                 << "[" << j << "] : " << arr[i][j] << endl;
        }
    }
    return 0;
}