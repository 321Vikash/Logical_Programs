/* Programmer  :Vikash Kumar Thakur
   Topic       :Frequency of digit
   IDE         :VS Code
*/
#include <iostream>
using namespace std;
int main()
{
    int n, x, i, d, c = 0;
    cout << "Enter any number :";
    cin >> n;
    for (i = 0; i <= n; i++)
    {
        x = n;
        c = 0;
        while (x != 0)
        {
            d = x % 10;
            if (d == 5)
                c++;
            x /= 10;
        }
        if (c > 0)
    cout << "Present " << c << " Time";
    return 0;
    }
}