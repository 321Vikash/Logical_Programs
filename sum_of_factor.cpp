/* Programmer  :Vikash Kumar Thakur
   Topic       :WAP to accept a number and display its sum of factor.
   IDE         :VS Code
*/
#include <iostream>
using namespace std;
int main()
{
    int n, i, s = 0;
    cout << "Enter a number :";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
            s = s + i;
    }
    cout << "The sum of factor " << n << " is " << s;
    return 0;
}