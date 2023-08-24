/* Programmer  :Vikash Kumar Thakur
   Topic       :Remove zero from any number.
   IDE         :VS Code
*/
#include <iostream>
using namespace std;
int main()
{
    int n, a, s = 0, d = 1;
    cout << "Enter any number :";
    cin >> n;
    while (n != 0)
    {
        a = n % 10;
        s = a * d + s;
        if (a == 0)
            d *= 1;
        else
            d *= 10;
        n /= 10;
    }
    cout << "Remove zero :" << s;
    return 0;
}