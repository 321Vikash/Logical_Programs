/* Programmer  :Vikash Kumar Thakur
   Topic       :Sum of first and last digit in a five digit number
   IDE         :VS Code
*/
#include <iostream>
using namespace std;
int main()
{
    int n, a, b, sum;
    cout << "Enter five digit number :";
    cin >> n;
    a = n % 10;
    b = n / 10000;
    sum = a + b;
    cout << "Sum of first and last digit :" << sum;
    return 0;
}