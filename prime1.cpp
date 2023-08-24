/* Programmer  :Vikash Kumar Thakur
   Topic       :Print prime number between 1 to 25.
   IDE         :VS Code
*/
#include <iostream>
using namespace std;
int main()
{
    int i, j;
    for (i = 2; i < 25; i++)
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
                break;
            else if (i == j + 1)
                cout << i << " ";
        }
    return 0;
}