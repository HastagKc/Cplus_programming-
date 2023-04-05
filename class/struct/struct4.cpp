#include <iostream>
using namespace std;
// creating struct

struct Deck
{
    int face;
    int shape;
    int color;
};

int main()
{
    // accesing deck in c++
    struct Deck d1[50] = {
        {1, 0, 0},
        {11, 3, 0},
        {2, 0, 0},
        {12, 0, 1},
    };

    cout << "face: " << d1[0].face << endl;
    return 0;
}