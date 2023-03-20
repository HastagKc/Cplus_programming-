#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // declaring and initializing an vector

    vector<int> myInVector;
    int value = 0;
    int size = 5;
    // taking input from user
    cout << "Insert element in a vector: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> myInVector[i];
    }
    cout << "Vector after pushing some element: " << endl;
    for (int i : myInVector)
    {
        cout << i << " ";
    }

    return 0;
}