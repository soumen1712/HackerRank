#  Program Link: 
#  https://www.hackerrank.com/challenges/py-if-else/problem
#  Created by KUNTAL OJHA  on 31/07/2021.

n = int(input())
if n % 2 !=0:
    print("Weird")
else:
    if n>=2 or n<=5:
        print("Not Weird")
    elif n>=6 or n<=20:
        print("Weird")
    else:
        print("Not Weird")
