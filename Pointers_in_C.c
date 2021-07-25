//  Program Link: 
//  https://www.hackerrank.com/challenges/pointer-in-c/problem?h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen
//  Created by KUNTAL OJHA RAJ on 23/07/2021.
//  Pointers in C
//  Leet Us, C Pages 157 (Call by referance)
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
//  Created by KUNTAL OJHA RAJ on 25/07/2021.
// Pointers in C

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
//  Created by KUNTAL OJHA RAJ on 25/07/2021.
// Pointers in C

#include<stdio.h>

void update(int *a, int *b){
    int sum= *a + *b;
    *b = *a - *b;
    if( *b < 0 ){
        *b = *b * -1;
    }
    *a = sum;
}

int main()
{
     int a, b;
        int *pa = &a, *pb = &b;
    scanf("%d %d", &a, &b);
        update(pa, pb);
            printf("%d\n%d", a, b);
    return 0;
}


//------------------------------------------------------------- Method 04 -------------------------------------------------------------------
//  Created by KUNTAL OJHA RAJ on 25/07/2021.
// Pointers in C

#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function
    int c=(*a)+(*b);
    int d=(*a)-(*b);
    if(d<0)
    {
        d=d*(-1);
    }
    *a=c;
    *b=d;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}


//------------------------------------------------------------- Method 05 -------------------------------------------------------------------
//  Created by KUNTAL OJHA RAJ on 25/07/2021.
// Pointers in C

#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function
    int c=(*a)+(*b);
    *b=(*a)-(*b);
    *a=c;
    if(*b<0)
    {
        *b=*b*(-1);
    }
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
