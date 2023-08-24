/* Programmer  :Vikash Kumar Thakur
   Topic       :Amicable Number
   IDE         :VS Code
*/
#include <iostream>
using namespace std;
int main()
{
    int a, b, i, x = 0, y = 0;
    cout << "Enter the value of a :";
    cin >> a;
    cout << "Enter the value of b :";
    cin >> b;
    for (i = 1; i < a; i++)
    {
        if (a % i == 0)
            x += i;
    }
    for (i = 1; i < b; i++)
    {
        if (b % i == 0)
            y += i;
    }
    if (a == y && b == x)
        cout << "Amicable Number";
    else
        cout << "Not";
    return 0;
}