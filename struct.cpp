/*
 struct is a user define data types
 which group the dissimilar variable under single name
 struct is same as class without encapsulation and method

 Note: we can not define method in struct
*/
#include <iostream>
using namespace std;

// declaration of struct
struct Person
{
    string name;
    int age;
    float weight;

    void print(string name, int age, float weight)
    {
        name = name;
        age = age;
        weight = weight;
        cout << age;
    }
};

int main()
{
    // initailizing struct (person)
    Person p1 = {"Kshittiz", 22, 60};
    /* cout << "Name: " << p1.name << endl;
    cout << "Age: " << p1.age << endl;
    cout << "Weight: " << p1.weight << endl; */
    return 0;
}