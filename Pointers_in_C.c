//  Program Link: 
//  https://www.hackerrank.com/challenges/pointer-in-c/problem?h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen
//  Created by KUNTAL OJHA RAJ on 23/07/2021.
// Pointers in C
//------------------------------------------------------------- Method 01 -------------------------------------------------------------------


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


//------------------------------------------------------------- Method 02 -------------------------------------------------------------------


#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function
    int c=*a,d=*b,e,f;
       e=c+d;
       f=c-d;
       if(f<0)
       {
           f=f*(-1);
       }
       *a=e;
       *b=f;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}


//------------------------------------------------------------- Method 03 -------------------------------------------------------------------

