/* Programmer  :Vikash Kumar Thakur
   Topic       :Input any number and check number is present in fibonacci series.
   IDE         :VS Code
*/
#include <iostream>
using namespace std;
int main()
{
    int a = -1, b = 1, c, d, n;
    cout << "Enter any number :";
    cin >> n;
    while (a + b <= n)
    {
        c = a + b;
        if (c == n)
        {
            d = 1;
            break;
        }
        a = b;
        b = c;
    }
    if (d == 1)
        cout << "Fibonacci Series";
    else
        cout << "Not";
    return 0;
}