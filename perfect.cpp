/* Programmer  :Vikash Kumar Thakur
   Topic       :Input any number and check number is perfect or not.
   IDE         :VS Code
*/
#include <iostream>
using namespace std;
int main()
{
    int i, n, s = 0;
    cout<<"Enter a number :";
    cin>>n;
    for (i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
            s = s + i;
    }
    if (s == n)
        cout << "Perfect";
    else
        cout << "Not";
    return 0;
}