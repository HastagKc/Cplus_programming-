#include <iostream>
using namespace std;

int main()
{
    /*
        321
        321
        321
    */

    /*   int i = 1;

      while (i <= 3)
      {
          int j = 1;
          while (j <= 3)
          {
              cout << 3 - j + 1;
              j++;
          }
          cout << endl;
          i++;
      }
   */
    int i = 1;
    while (i <= 3)
    {
        int j = 3;
        while (j >= 1)
        {
            cout << j;
            j--;
        }
        cout << endl;

        i++;
    }

    return 0;
}