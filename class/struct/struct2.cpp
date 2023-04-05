#include <iostream>
using namespace std;

struct Rectangle
{
    int length;
    int width;

    friend void printArea(Rectangle rect);
};
void printArea(Rectangle rect)
{
    cout << "Area: " << rect.length * rect.width << endl;
}
int main()
{
    Rectangle rect = {5, 10};
    printArea(rect);
    return 0;
}
