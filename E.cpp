/*E - Welcome for you with Conditions,,,
Given two numbers A and B. Print "Yes" if A is greater than or equal to B. Otherwise print "No".

Input
Only one line containing two numbers A and B (0  ≤  A, B  ≤  100).

Output
Print "Yes" or "No" according to the statement.

Examples
Inputcopy	
10 9
Outputcopy
Yes
Inputcopy
5 5
Outputcopy
Yes
Inputcopy
5 7
Outputcopy
No
*/
#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>
using namespace std;
int main(){
long long A,B;
cin >> A >> B;
    if(A>=B){
    printf("Yes");
    }
    else{
    printf("No");
    }


return 0;
}