#include <iostream>
using namespace std;

int linear_search(int arr[], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{

    /*
Linear search is a simple algorithm for finding an element
in an array. It works by iterating through the elements of
the array and comparing each element to the target element
until a match is found or all elements have been checked.
*/

    int my_array[5] = {3, 1, 5, 2, 4};
    int target = 55;
    int array_size = sizeof(my_array) / sizeof(my_array[0]);

    int index = linear_search(my_array, array_size, target);

    if (index != -1)
    {
        cout << target << " found at index: " << index << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }

    return 0;

    // !The time complexity of linear search is O(n),
    // where n is the number of elements in the array.
}
