/*J - In Search of an Easy Problem
When preparing a tournament, Codeforces coordinators try treir best to make the first problem as easy as possible. This time the coordinator had chosen some problem and asked 
n
n people about their opinions. Each person answered whether this problem is easy or hard.

If at least one of these 
n
n people has answered that the problem is hard, the coordinator decides to change the problem. For the given responses, check if the problem is easy enough.

Input
The first line contains a single integer 
n
n (
1
≤
n
≤
100
1≤n≤100) — the number of people who were asked to give their opinions.

The second line contains 
n
n integers, each integer is either 
0
0 or 
1
1. If 
i
i-th integer is 
0
0, then 
i
i-th person thinks that the problem is easy; if it is 
1
1, then 
i
i-th person thinks that the problem is hard.

Output
Print one word: "EASY" if the problem is easy according to all responses, or "HARD" if there is at least one person who thinks the problem is hard.

You may print every letter in any register: "EASY", "easy", "EaSY" and "eAsY" all will be processed correctly.

Examples
Inputcopy	Outputcopy
3
0 0 1
HARD
Inputcopy	Outputcopy
1
0
EASY
Note
In the first example the third person says it's a hard problem, so it should be replaced.

In the second example the problem easy for the only person, so it doesn't have to be replaced.
*/
#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
int n,i;
    cin >> n;
int x[n];
bool flag=true;
        for(i=0;i<n;i++){
            cin >> x[i];
            if(x[i]==1){
                flag=false;
            }
}
if(!flag){
    cout << "HARD" << endl;
}
else{
    cout << "EASY" << endl;
}
    return 0;
}
