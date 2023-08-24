/* Programmer  :Vikash Kumar Thakur
   Topic       :Pal Prime Number.
   IDE         :VS Code
*/ 
#include <iostream>
using namespace std;
int main()
{
    int n, x, d, i, p = 0, a = 0;
    cout << "Enter any number :";
    cin >> n;
    x=n;
    while ( x!= 0)
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
    if (p == 2 && a == n)
        cout << "Pal Prime Number ";
    else
        cout << "Not";
    return 0;
}