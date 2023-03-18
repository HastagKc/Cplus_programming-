#include <iostream>
using namespace std;

int main()
{
    int arr[100], sizeOfArray, i, index_del;
    bool flag = false;

    cout << "Enter the size of an array: " << endl;
    cin >> sizeOfArray;

    cout << "Enter array element you want to store" << endl;
    for (i = 0; i < sizeOfArray; i++)
    {
        cin >> arr[i];
    }
    cout << "Array before: " << endl;
    for (i = 0; i < sizeOfArray; i++)
    {
        cout << arr[i] << " ";
    }
    // deleting an element form an array
    cout << "\n Enter index you want to delete: " << endl;
    cin >> index_del;
    for (i = 0; i < sizeOfArray; i++)
    { /*
         if (index_del > i)
         {
             arr[i];
         }
         else if (index_del == i)
         {
             continue;
         }
         else if (index_del < i)
         {
             arr[i] = arr[i + 1];
         } */

        if (i == index_del)
        {
            for (int j = index_del; j < sizeOfArray; j++)
            {
                arr[j] = arr[j + 1];
                flag = true;
            }
            sizeOfArray--;
        }
    }
    if (flag == false)
    {
        cout << "Please provide proper element" << endl;
    }

    cout << "After deleting: " << endl;
    for (int i = 0; i < sizeOfArray; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}