#!/usr/bin/env python3
# NOTE: it is recommended to use this even if you don't understand the following code.

import sys

# uncomment the two following lines if you want to read/write from files
# sys.stdin = open('input.txt')
# sys.stdout = open('output.txt', 'w')

N, M, E = map(int, input().strip().split())

A = [0 for i in range(E)]
B = [0 for i in range(E)]
for i in range(E):
    A[i], B[i] = map(int, input().strip().split())

P = [0 for i in range(N)]
Q = [0 for i in range(M)]


# INSERT YOUR CODE HERE


for i in range(N):
    print(P[i], end=' ')
print()
for i in range(M):
    print(Q[i], end=' ')
print()

sys.stdout.close()
