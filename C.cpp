/*C - Simple Calculator,,,,,
Given two numbers X and Y. Print the summation and multiplication and subtraction of these 2 numbers.

Input
Only one line containing two separated numbers X, Y (1  ≤  X, Y  ≤  105).

Output
Print 3 lines that contain the following in the same order:

"X + Y = summation result" without quotes.
"X * Y = multiplication result" without quotes.
"X - Y = subtraction result" without quotes.
Examples
Input	
5 10
Output
5 + 10 = 15
5 * 10 = 50
5 - 10 = -5
Note
Be careful with spaces. */


#include <iostream>
using namespace std;

int main() {
    long long x, y;
      cin >> x >> y ;

    cout << x << " + " << y << " = " << x + y << endl;
    cout << x << " * " << y << " = " << x * y << endl;
    cout << x << " - " << y << " = " << x - y << endl;
return 0;}

/*
#include <iostream>
using namespace std;

int main() {
    long long X, Y; // Use long long to handle large values
    cin >> X >> Y;

    // Output results in the required format
    cout << X << " + " << Y << " = " << X + Y << endl;
    cout << X << " * " << Y << " = " << X * Y << endl;
    cout << X << " - " << Y << " = " << X - Y << endl;

    return 0;
}

*/