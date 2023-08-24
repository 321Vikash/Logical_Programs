/* Programmer  :Vikash Kumar Thakur
   Topic       : Neon Number.
   IDE         :VS Code
*/
#include <iostream>
using namespace std;
int main()
{
    int n, s = 0, y, x;
    cout << "Enter a number :";
    cin >> n;
    x = n * n;
    while (x != 0)
    {
        y = x % 10;
        s += y;
        x /= 10;
    }
    if (s == n)
        cout << "Neon Number";
    else
        cout << "Not";
    return 0;
}