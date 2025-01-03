/*B - Basic Data Types
The following lines show some C++ data types, their format specifiers and their most common bit widths:

int : 32 Bit integer.
long long : 64 bit integer
Char : 8 bit Characters & symbols
Float : 32 bit real value
Double : 64 bit real value
Reading

To read a data type, use the following syntax:

   cin >> VariableName;
 
C++
For example, to read a character followed by a double:

  char ch;
  double d;
  cin >> ch >> d;
 
C++
Printing

To print a data type, use the following syntax:

cout << VariableName;
 
C++
For example, to print a character followed by a double:
char ch = 'd';
double d = 234.432;
cout << ch << " "<< d;
 
C++
Input
Only one line containing the following space-separated values: int, long long, char, float and double respectively.

Output
Print each element on a new line in the same order it was received as input.

Don't print any extra spaces.
Input:
3 12345678912345 a 334.23 14049.30493
Output:
3
12345678912345
a
334.23
14049.3
*/
#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
int i;
long long ll;
char c;
float f;
double d;

cin>>i>>ll>>c>>f>>d;

cout<<i<<endl;
cout<<ll<<endl;
cout<<c<<endl;
cout<<fixed<<setprecision(6)<<f<<endl;
cout<<fixed<<setprecision(6)<<d<<endl;
    
    return 0;
}