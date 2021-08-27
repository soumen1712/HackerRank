// Created by SOUMEN on 27-08-2021.
// Problem Link:
// https://www.hackerrank.com/challenges/playing-with-characters/problem
#include <stdio.h>

int main() 
{
   char C;
   char s[20];
   char sen[100];
   
   scanf("%c",&C);
   scanf("%s\n",&s);
   scanf("%[^\n]%*c",&sen);
   
   printf("%c",C);
   printf("\n%s",s);
   printf("\n%s",sen);
   
   return 0;
}
