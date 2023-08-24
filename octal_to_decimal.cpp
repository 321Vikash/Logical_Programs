/* Programmer  :Vikash Kumar Thakur
   Topic       :Octal to Decimal
   IDE         :VS Code
*/
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, dec = 0, b = 0, d;
    cout << "Enter the number Octal format :";
    cin >> n;
    while (n != 0)
    {
        d = n % 10;
        dec = dec + (d * pow(8, b));
        b++;
        n /= 10;
    }
    cout << "Equivalent Decimal value :" << dec;
    return 0;
}