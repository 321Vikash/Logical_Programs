/* Programmer  :Vikash Kumar Thakur
   Topic       :Print Armstrong number between 1 to 500
   IDE         :VS Code
*/
#include <iostream>
using namespace std;
int main()
{
    int i, x, s = 0, y;
    for (i = 1; i <= 500; i++)
    {
        s = 0;
        x = i;
        while (x != 0)
        {
            y = x % 10;
            s += (y * y * y);
            x /= 10;
        }
        if (s == i)
            cout << "\t" << i;
    }
    return 0;
}