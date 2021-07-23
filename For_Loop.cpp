//  Program Link: 
//  https://www.hackerrank.com/challenges/c-tutorial-for-loop/problem?h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen
//  Created by KUNTAL OJHA RAJ on 23/07/2021.

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a,b,c,d;
    string A[]={"A","one","two","three","four","five","six","seven","eight","nine"};
    cin >> a >> b;
    for(c=a;c<=b;c++)
    {
        if(c<=9)
        {
              cout << A[c] << endl;
        }
        if(c>9)
        {
            d=c%2;
            if(d==0)
            {
                cout << "even" << endl;
            }
            else 
            {
                cout << "odd" <<endl;            
            }
        }
    }
    return 0;
}
