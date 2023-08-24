/* Programmer  :Vikash Kumar Thakur
   Topic       :Input any number and print arrange order(I-48213,O-12348)
   IDE         :VS Code
*/
#include <iostream>
using namespace std;
int main()
{
    int n, i, x, d;
    cout << "Enter any number :";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        x = n;
        while (x != 0)
        {
            d = x % 10;
            if (d == i)
                cout << i;
            x /= 10;
        }
    }
    return 0;
}