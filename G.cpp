/*G - Even Numbers
Given a number N. Print all even numbers between 1 and N inclusive in separate lines.

Input
Only one line containing a number N (1 ≤ N ≤ 103).

Output
Print the answer according to the required above. If there are no even numbers print -1.

Examples
Input
10
Outputcopy
2
4
6
8
10
Inputcopy
5
Outputcopy
2
4

*/
#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
int i;
long long N;    
cin >> N;
bool flag =false;
for(i=1;i<=N;i++){
    if(i%2==0){
        cout << i << endl;
        flag =true;
    }
}
if(!flag){
    cout << -1 << endl;
}
    return 0;
}