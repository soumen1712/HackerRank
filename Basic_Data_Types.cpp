//  Program Link: 
//  https://www.hackerrank.com/challenges/c-tutorial-basic-data-types/problem?h_r=next-challenge&h_v=zen
//  Created by KUNTAL OJHA RAJ on 24/07/2021.

#include <bits/stdc++.h>
using namespace std;
int main() {
  int a;
  int long b;
  char c;
  float d;
  double e;
  cin >> a >> b >> c >> d >> e;
  cout << a <<endl << b <<endl << c <<endl;
  
  // Hear fixed << setprecision(3) use for 298.209
  // Hear fixed << setprecision(4) use for 298.2098
  // Hear fixed << setprecision(9) use for 298.209938028
  
  cout << fixed << setprecision(3) << d <<endl;
  cout << fixed << setprecision(9) << e ;  
  return 0;
}
