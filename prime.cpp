/* Programmer  :Vikash Kumar Thakur
   Topic       :Prime Number
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
            s++;
    }
    if (s == 2)
        cout << "Prime Number";
    else
        cout << "Not";
    return 0;
}