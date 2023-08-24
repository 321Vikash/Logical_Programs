/* Programmer  :Vikash Kumar Thakur
   Topic       :Print Prime number between start and stop value
   IDE         :VS Code
*/
#include <iostream>
using namespace std;
int main()
{
    int a, b, c, i, j;
    cout << "Enter the value of a :";
    cin >> a;
    cout << "Enter the value of b :";
    cin >> b;
    for (i = a; i <= b; i++)
    {
        c = 0;
        for (j = 1; j <= i; j++)
        {
            if (i % j == 0)
                c++;
        }
        if (c == 2)
            cout << i << "\t";
    }
    return 0;
}