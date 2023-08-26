/* Author :Vikash Kumar Thakur
   Topic  :WAP to calculate HCF of two number.
*/
#include <iostream>
using namespace std;
int main()
{
    int a, b, h;
    cout << "Enter two number :";
    cin >> a >> b;
    for (h = a < b ? a : b; h >= 1; h--)
        if (a % h == 0 && b % h == 0)
            break;
    cout << "HCF is " << h;
    return 0;
}