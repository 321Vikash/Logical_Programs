/* Programmer  :Vikash Kumar Thakur
   Topic       :Special Number.
   IDE         :VS Code
*/
#include <iostream>
using namespace std;
int main()
{
    int n, s = 0, p = 1, d,x;
    cout << "Enter a number :";
    cin >> n;
    x = n;
    while (x != 0)
    {
        d = x % 10;
        s += d;
        p *= d;
        x /= 10;
    }
    if (s + p == n)
        cout << "special Number";
    else
        cout << "Not";
    return 0;
}