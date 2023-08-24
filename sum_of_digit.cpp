/* Programmer  :Vikash Kumar Thakur
   Topic       :Sum of digit.
   IDE         :VS Code
*/
#include <iostream>
using namespace std;
int main()
{
    int s = 0, n, d;
    cout << "Enter a number :";
    cin >> n;
    while (n != 0)
    {
        d = n % 10;
        s = s + d;
        n /= 10;
    }
    cout << "The sum of digit =" << s;
    return 0;
}