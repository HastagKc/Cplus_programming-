#include <iostream>
using namespace std;
int main()
{
    //* printing uppercase, loweercase and numeric
    char ch;
    cin >> ch;

    if (ch > 'a' || ch < 'z')
    {
        cout << "Lowercase" << endl;
    }
    else if (ch > 'A' || ch < 'Z')
    {
        cout << "Uppercase" << endl;
    }

    else if (ch > '1' || ch < '9')
    {
        cout << "Numeric" << endl;
    }
    else
    {
        cout << "Something else " << endl;
    }
    return 0;
}