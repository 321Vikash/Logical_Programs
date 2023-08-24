/* Programmer  :Vikash Kumar Thakur
   Topic       :Factor of any number.
   IDE         :VS Code
*/
#include <iostream>
using namespace std;
int main()
{
    int n, i;
    cout << "Enter any number :";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
            cout << i << "\t";
    }
    return 0;
}