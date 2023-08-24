/* Programmer  :Vikash Kumar Thakur
   Topic       :WAP to program to accept and display its count of factor.
   IDE         :VS Code
*/
#include <iostream>
using namespace std;
int main()
{
    int i, n, s = 0;
    cout << "Enter a number :";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
            s = s + 1;
    }
    cout << "Number of factor = "<<s;
    return 0;
}