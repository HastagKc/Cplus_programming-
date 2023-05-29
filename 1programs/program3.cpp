#include <iostream>
using namespace std;
int main()
{
    //* printing uppercase, loweercase and numeric
    char ch;
    cout << "Enter anythings" << endl;
    cin >> ch;

    if (ch >= 'a' && ch <= 'z')
    {
        cout << "Lowercase" << endl;
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        cout << "Uppercase" << endl;
    }

    else if (ch >= '0' && ch <= '9')
    {
        cout << "Numeric" << endl;
    }
    else
    {
        cout << "Something else " << endl;
    }
    return 0;
}

/*

#include <iostream>
using namespace std;

bool isLowerCase(char c) {
    return c >= 'a' && c <= 'z';
}

bool isUpperCase(char c) {
    return c >= 'A' && c <= 'Z';
}

bool isNumeric(char c) {
    return c >= '0' && c <= '9';
}

int main() {
    char input;

    cout << "Enter a character: ";
    cin >> input;

    if (isLowerCase(input)) {
        cout << "The character is lowercase." << endl;
    } else if (isUpperCase(input)) {
        cout << "The character is uppercase." << endl;
    } else if (isNumeric(input)) {
        cout << "The character is numeric." << endl;
    } else {
        cout << "The character is neither lowercase, uppercase, nor numeric." << endl;
    }

    return 0;
}
*/