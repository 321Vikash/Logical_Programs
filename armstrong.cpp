/* Programmer  :Vikash Kumar Thakur
   Topic       :Armstrong Number.
   IDE         :VS Code
*/
#include <iostream>
using namespace std;
int main()
{
    int n, x, y, s = 0;
    cout << "Enter any number :";
    cin >> n;
    x = n;
    while (x != 0)
    {
        y = x % 10;
        s = s + (y * y * y);
        x /= 10;
    }
    if (s == n)
        cout << "Armstrong Number ";
    else
        cout << "Not";
    return 0;
}