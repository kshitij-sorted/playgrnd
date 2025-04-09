from math import *
from collections import *
from sys import *
from os import *

## Read input as specified in the question.
## Print output as specified in the question.

n = int(input())
l = [1,1]
for i in range(n-2):
    s = l[i]+l[i+1]
    l.append(s)

print(l[n-1])