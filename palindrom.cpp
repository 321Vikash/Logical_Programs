/* Programmer  :Vikash Kumar Thakur
   Topic       :Palindrome Number
   IDE         :VS Code
*/
#include <iostream>
using namespace std;
int main()
{
    int n, d, x, s = 0;
    cout << "Enter any number :";
    cin >> n;
    x = n;
    while (n != 0)
    {
        d = n % 10;
        s = s * 10 + d;
        n /= 10;
    }
    if (s == x)
        cout << "Palindrome Number";
    else
        cout << "Not";
    return 0;
}