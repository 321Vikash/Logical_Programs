/* Programmer  :Vikash Kumar Thakur
   Topic       :Reverse of any number.
   IDE         :VS Code
*/
#include <iostream>
using namespace std;
int main()
{
    int s = 0, n, d;
    cout << "Enter any number :";
    cin >> n;
    while (n != 0)
    {
        d = n % 10;
        s = s * 10 + d;
        n /= 10;
    }
    cout << "The reverse number is :" << s;
    return 0;
}