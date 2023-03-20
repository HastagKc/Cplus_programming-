#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // create a vector of integers
    vector<int> myVector;

    // add some elements to the vector
    myVector.push_back(10);
    myVector.push_back(20);
    myVector.push_back(30);
    myVector.push_back(40);
    myVector.push_back(50);

    // access the elements of the vector using array notation
    cout << "The first element of the vector is: " << myVector[0] << endl;

    // using at to accesing element form array
    cout << "The first element of the vector is: " << myVector.at(0) << endl;

    // using front method in vector
    cout << "Front function will provide first element of vector: " << myVector.front() << endl;
    // using back method in vector
    cout << "Back function in vector: " << myVector.back();

    // !get the size of the vector

    // printing the capacity of vector
    // capacity will provide the capacity of vector to store an element
    // which is automatically increased during runtime by twice if space get filled
    cout << "The capacity of Vector: " << myVector.capacity() << endl;

    // size() provide nos of element store in the vector
    cout
        << "The vector has " << myVector.size() << " elements." << endl;

    // iterate over the elements of the vector using a range-based for loop
    cout << "The elements of the vector are: ";
    for (int i : myVector)
    {
        cout << i << " ";
    }
    cout << endl;

    // clear the vector
    myVector.clear();

    // check that the vector is now empty
    cout << "The vector is now empty: " << (myVector.empty() ? "true" : "false") << endl;

    return 0;
}
