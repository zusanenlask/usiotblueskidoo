#!/usr/bin/env python3
# NOTE: it is recommended to use this even if you don't understand the following code.

import sys

# uncomment the two following lines if you want to read/write from files
# sys.stdin = open('input.txt')
# sys.stdout = open('output.txt', 'w')

N = int(input().strip())

P = list(map(int, input().strip().split()))

answer = "YES"
M = 0
K = [[] for i in range(N)]


# INSERT YOUR CODE HERE


print(answer)
print(M)
for i in range(M):
    print(len(K[i]), end=" ")
    for j in range(len(K[i])):
        print(K[i][j], end=" ")

sys.stdout.close()
