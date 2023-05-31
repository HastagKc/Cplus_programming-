#include <iostream>
using namespace std;

int main()
{
    /*
    print
    12345
    12345
    12345
    12345
    */

    int i = 1;
    while (i <= 4)
    {
        int j = 1;

        while (j <= 5)
        {
            cout << j;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}