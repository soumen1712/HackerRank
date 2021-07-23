//  Program Link: 
//  https://www.hackerrank.com/challenges/arrays-introduction/problem?h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen
//  Created by KUNTAL OJHA RAJ on 24/07/2021.
//  Very IMPORTANT Question.

#include <iostream>
using namespace std;
int main() {
    int n,m;
    cin>>n;
    int Array[n];
    for(int i=0; i<n; i++)
    {
        cin >> Array[i];
    }
    m=n-1;
     for(int i=m; i>=0; i--)
    {
        cout << Array[i]<<" ";
    }
    return 0;
}
