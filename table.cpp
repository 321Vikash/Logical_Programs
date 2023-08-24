/* Programmer  :Vikash Kumar Thakur
   Topic       :Table of any number.
   IDE         :VS Code
*/
#include <iostream>
using namespace std;
int main()
{
    int n, i = 1;
    cout << "Enter the any nubmer :";
    cin >> n;
    while (i <=10)
    {
        cout << n * i << endl;
        i++;
    }
    return 0;
}