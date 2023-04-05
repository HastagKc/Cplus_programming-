#include <iostream>
using namespace std;

int main()
{
    // what is pointer
    // a pointer is a variable that holds the
    // memory address of another variable.

    //! why pointer is needed
    // dynamic memory alocation
    /// passing parameter by references
    // Manupulating data structure
    // Direct memory access
    // Efficient memory usages

    // declaration of pointer
    int *p;

    // initializing a noraml variable
    int num = 20;

    // initializing a pointer variable by
    // providing the address of num variable
    p = &num;

    // printing the address of num variable
    cout << p << endl;
    cout << &num << endl;

    // deferncing
    // Dereferencing is the process of accessing the value
    // that is stored at a specific memory address
    // pointed to by a pointer variable.
    cout << *p << endl;

    // changing the value by pointer
    //
    *p = 90;
    cout << *p << endl;
    cout << num << endl;

    return 0;
}