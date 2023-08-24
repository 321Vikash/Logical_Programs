/* Programmer  :Vikash Kumar Thakur
   Topic       :Twin Prime Number
   IDE         :VS Code
*/
#include <iostream>
using namespace std;
int main()
{
    int n, m, i, c = 0, b = 0;
    cout << "Enter any number :";
    cin >> n;
    cout << "Enter any another number :";
    cin >> m;
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
            c++;
    }
    for (i = 1; i <= m; i++)
    {
        if (m % i == 0)
            b++;
    }
    if (c == 2 && b == 2 && abs(n - m) == 2)
        cout << "Twin Prime Number ";
    else
        cout << "Not";
    return 0;
}