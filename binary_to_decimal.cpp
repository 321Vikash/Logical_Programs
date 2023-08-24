/* Programmer  :Vikash Kumar Thakur
   Topic       :Binary to Decimal
   IDE         :VS Code
*/
#include <iostream>
using namespace std;
int main()
{
    int dec = 0, d, b = 1, n;
    cout << "Enter the number binary format :";
    cin >> n;
    while (n != 0)
    {
        d = n % 10;
        dec = dec + d * b;
        n /= 10;
        b *= 2;
    }
    cout << "Decimal Number :" << dec;
    return 0;
}