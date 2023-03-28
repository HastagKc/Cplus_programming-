#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if (ch >= 'a' && ch <= 'z')
    {
        cout << ch << " is a lowercase character." << endl;
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        cout << ch << " is an uppercase character." << endl;
    }
    else if (ch >= '0' && ch <= '9')
    {
        cout << ch << " is a numeric character." << endl;
    }
    else
    {
        cout << ch << " is not a lowercase, uppercase, or numeric character." << endl;
    }

    return 0;
}
