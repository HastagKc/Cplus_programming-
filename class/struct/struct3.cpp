#include <iostream>
using namespace std;

// creating struct
struct Car
{
    string name;
    int year;
};

// main method
int main()
{

    // accessing struct
    struct Car c1;
    // accessing members variable of struct
    c1.name = "Honda";
    c1.year = 2022;

    cout << c1.name << endl;
    cout << c1.year << endl;
    return 0;
}