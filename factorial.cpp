/* Programmer  :Vikash Kumar Thakur
   Topic       :Factorial Number
   IDE         :VS Code
*/
#include <iostream>
using namespace std;
int main()
{
    int i, fact = 1, num;
    cout << "Enter any number :";
    cin >> num;
    for (i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    cout << "Factorial Number is :" << fact;
    return 0;
}