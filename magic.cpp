/* Programmer  :Vikash Kumar Thakur
   Topic       :Magic Number.
   IDE         :VS Code
*/
#include <iostream>
using namespace std;
int main()
{
    int n, s = 0, d;
    cout << "Enter a number :";
    cin >> n;
    for (;;)
    {
        s = 0;
        while (n != 0)
        {
            d = n % 10;
            s += d;
            n /= 10;
        }
        if (s > d)
            n = s;
        else
            break;
    }
    if (s == 1)
        cout << "Magic Number";
    else
        cout << "Not";
    return 0;
}