/*  Author :Vikash Kumar Thakur
    Topic  :WAP to calculate LCM of two number.
    IDE    :VS Code
*/
#include <iostream>
using namespace std;
int main()
{
    int a, b, l;
    cout << "Enter two number :";
    cin >> a >> b;
    for (l = a > b ? a : b; l < a * b; l++)
        if (l % a == 0 && l % b == 0)
        {
            cout << "LCM is " << l;
            break;
        }
    return 0;
}