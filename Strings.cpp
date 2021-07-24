//  Program Link: 
//  https://www.hackerrank.com/challenges/c-tutorial-strings/problem
//  Created by KUNTAL OJHA RAJ on 24/07/2021.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    string b;
    cin>>a>>b;
    char c0=a[0];
    char c1=a[1];
    char c2=a[2];
    char c3=a[3];
    char d0=b[0];
    char d1=b[1];
    
    int lena=a.size();
    int lenb=b.size();
    
    cout<<lena<<" "<<lenb<<endl;
    cout<<a<<b<<endl;
    cout<<d0<<c1<<c2<<c3<<" "<<c0<<d1;
    return 0;
}
