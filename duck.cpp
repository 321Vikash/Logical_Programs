/* Programmer  :Vikash Kumar Thakur
   Topic       :Duck number
   IDE         :VS Code
*/
#include <iostream>
using namespace std;
int main()
{
    int i, n, d, c = 0;
    cout << "Enter any number :";
    cin >> n;
    while (n != 0)
    {
        d = n % 10;
        if (d == 0)
        {
            c = 1;
            break;
        }
        n /= 10;
    }
    if (c == 1)
        cout << "Duck Number";
    else
        cout << "Not";
    return 0;
}