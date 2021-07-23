//  Program Link: 
//  https://www.hackerrank.com/challenges/functions-in-c/problem?h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen
//  Created by KUNTAL OJHA RAJ on 23/07/2021.

#include <stdio.h>
int max_of_four(int a, int b, int c, int d)
{
    if(a>b && a>c && a>d)
    {
      return a;  
    } else if(b>a && b>c && b>d)
    {
      return b;  
    } else if(c>a && c>b && c>d)
    {
      return c;  
    } else {
      return d;
    }
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
