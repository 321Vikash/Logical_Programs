/* Programmer  :Vikash Kumar Thakur
   Topic       :Input any number and check number is perfect square or not.
   IDE         :VS Code
*/
#include <iostream>
using namespace std;
int main()
{
    int n, x = 0, i;
    cout << "Enter the perfect square number :";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        if (i * i == n)
        {
            x = 1;
            break;
        }
    }
    if (x == 1)
        cout << "Perfect Square";
    else
        cout << "Not";
    return 0;
}