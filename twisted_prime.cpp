/* Programmer  :Vikash Kumar Thakur
   Topic       :Twisted Prime Number
   IDE         :VS Code
*/
#include <iostream>
using namespace std;
int main()
{
    int i, n, x, d, a = 0, p = 0, q = 0;
    cout << "Enter a number :";
    cin >> n;
    x = n;
    while (x != 0)
    {
        d = x % 10;
        a = a * 10 + d;
        x /= 10;
    }
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
            p++;
    }
    for (i = 1; i <= a; i++)
    {
        if (a % i == 0)
            q++;
    }
    if (p == 2 && q == 2)
        cout << "Twisted Prime Number";
    else
        cout << "Not";
    return 0;
}