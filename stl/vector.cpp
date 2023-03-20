#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // declaration of vector
    /*   vector<types> nameOfVector={value }; */

    //? we have use a range-based for loop to
    // ? iterate over the elements of the vector.
    vector<int> intVector = {10, 20, 30, 40, 45};
    for (int i : intVector)
    {
        cout << i << " ";
    }
    cout << endl;
    // ? normal for loop
    for (int i = 0; i < intVector.size(); i++)
    {
        cout << intVector[i] << " ";
    }

    return 0;
}