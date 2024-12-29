/*I - Simple Array Sum  
Given an array of integers, find the sum of its elements.

For example, if the array ar=[1,2,3],1+2+3=6, so return 6.

Function Description

Complete the simpleArraySum function in the editor below. 
It must return the sum of the array elements as an integer.

simpleArraySum has the following parameter(s):

ar: an array of integers
Input Format

The first line contains an integer, , denoting the size of the array.
The second line contains  space-separated integers representing the array's elements.

Constraints
0<n,ar[i]<=1000

Output Format

Print the sum of the array's elements as a single integer.

Inputcopy	
6
1 2 3 4 10 11
Outputcopy
31
Explanation

We print the sum of the array's elements: .
*/
#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
int n,i,sum=0;
cin >> n;
int x[n];
    for(i=0;i<n;i++){
        cin >> x[i];
        sum=sum+x[i];
    }
cout << sum << endl;


    return 0;
}