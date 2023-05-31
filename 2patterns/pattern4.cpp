#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 3; j >= 1; j--)
        {
            std::cout << j;
        }
        cout << endl;
    }

    return 0;
}
