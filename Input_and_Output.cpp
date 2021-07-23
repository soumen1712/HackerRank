//  Program Link: 
//  https://www.hackerrank.com/challenges/cpp-input-and-output/problem
//  Created by KUNTAL OJHA RAJ on 24/07/2021.

#include <iostream>
using namespace std;
int main() { 
    int a;
    int Array[3];
    for(int i=0;i<3;i++)
    {
        cin >>Array[i];
    }
    cout << Array[0]+Array[1]+Array[2];
    return 0;
}

