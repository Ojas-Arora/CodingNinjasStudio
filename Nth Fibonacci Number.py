from math import *
from collections import *
from sys import *
from os import *

def fib(n):
    phi = (1 + sqrt(5)) / 2
    psi = (1 - sqrt(5)) / 2
    return int((phi**n - psi**n) / sqrt(5))
n=int(input())
print(fib(n))
