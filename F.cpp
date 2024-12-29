/*F - 1 to N
Given a number N. Print numbers from 1 to N in separate lines.

Input
Only one line containing a number N (1 ≤ N ≤ 103).

Output
Print N lines according to the required above.

Examples
Inputcopy
5
Outputcopy
1
2
3
4
5
*/
#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>
using namespace std;
int main(){
int N,i;
cin >> N;
    for(i=1;i<=N;i++){
        cout << i << endl;
    }
    return 0;
}