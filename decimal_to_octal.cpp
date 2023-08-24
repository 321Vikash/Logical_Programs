/* Programmer  :Vikash Kumar Thakur
   Topic       :Decimal to Octal
   IDE         :VS Code
*/
#include <iostream>
using namespace std;
int main()
{
    int n, oct = 0, b = 1, d;
    cout << "Enter the number decimal format :";
    cin >> n;
    while (n != 0)
    {
        d = n % 8;
        oct = oct + d * b;
        n /= 8;
        b *= 10;
    }
    cout << "Octal Number :" << oct;
    return 0;
}