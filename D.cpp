/*D - DIFFERENCE
Given four numbers A, B, C and D. Print the result of the following equation :

 X = (A * B) - (C * D).

Input
Only one line containing 4 separated numbers A, B, C and D ( - 105  ≤  A, B, C, D  ≤  105).

Output
Print "Difference  =  " without quotes followed by the equation result.

Examples
Inputcopy	
1 2 3 4
Outputcopy
Difference = -10
Inputcopy	
2 3 4 5
Outputcopy
Difference = -14
Inputcopy
4 5 2 3
Outputcopy
Difference = 14

*/
#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
using namespace std;
int main (){
long long X,A,B,C,D;
    cin >> A >> B >> C >> D;
    X=(A*B)-(C*D);
    cout <<"Difference = "<< X << endl;


    return 0;
}