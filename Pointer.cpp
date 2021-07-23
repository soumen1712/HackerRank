//  Program Link: 
//  https://www.hackerrank.com/challenges/c-tutorial-pointer/problem?h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen
//  Created by KUNTAL OJHA RAJ on 24/07/2021.

#include <stdio.h>
int main() {
    int a, b, c, d;   
    scanf("%d %d", &a, &b);
    c=a+b;
    d=a-b;
    if(d<0)
    {
        d=d*(-1);
    }
    printf("%d\n%d", c, d);
    return 0;
}
