

#include <iostream>
using namespace std;
int main()
{
    int arr[100], sizeOfArray, i, del_element, j;
    bool found = false;
    cout << "Enter the Size: ";
    cin >> sizeOfArray;
    cout << "Enter " << sizeOfArray << " Array Elements: ";
    for (i = 0; i < sizeOfArray; i++)
        cin >> arr[i];
    cout << "\nEnter Element to Delete: ";
    cin >> del_element;
    for (i = 0; i < sizeOfArray; i++)
    {
        if (arr[i] == del_element)
        {
            for (j = i; j < sizeOfArray - 1; j++)
            {
                arr[j] = arr[j + 1];
                found = 1;
                i--;
                sizeOfArray--;
            }
        }
        if (found == false)
            cout << "\nElement doesn't found in the Array!";
        else
        {
            cout << "\nElement Deleted Successfully!";
            cout << "\n\nThe New Array is:\n";
            for (i = 0; i < sizeOfArray; i++)
                cout << arr[i] << "  ";
        }
        cout << endl;
        return 0;
    }
}