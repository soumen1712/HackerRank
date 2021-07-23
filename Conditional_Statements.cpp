//  Program Link: 
//  https://www.hackerrank.com/challenges/c-tutorial-conditional-if-else/problem?h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen
//  Created by KUNTAL OJHA RAJ on 23/07/2021.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    string Array[10]={"one","two","three","four","five","six","seven","eight","nine","Greater than 9"};
    switch(x)
    {
        case 1:
        cout << Array[0];
        break;
        case 2:
        cout << Array[1];
        break;
        case 3:
        cout << Array[2];
        break;
        case 4:
        cout << Array[3];
        break;
        case 5:
        cout << Array[4];
        break;
        case 6:
        cout << Array[5];
        break;
        case 7:
        cout << Array[6];
        break;
        case 8:
        cout << Array[7];
        break;
        case 9:
        cout << Array[8];
        break;
    }
    if (x>9) 
    {
        cout << Array[9];    
    }
    return 0;
}
