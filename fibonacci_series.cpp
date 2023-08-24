/* Programmer  :Vikash Kumar Thakur
   Topic       :Fibonacci Series
   IDE         :VS Code
*/
#include <iostream>
using namespace std;
int main()
{
    int n, a = -1, b = 1, c, i;
    cout << "Enter any number :";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
    return 0;
}