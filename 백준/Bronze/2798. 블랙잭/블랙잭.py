import sys
from collections import deque

n, m = map(int, sys.stdin.readline().split())
num = list(map(int, sys.stdin.readline().split()))
sum, best = 0, 0

for i in range(0, n-2):
    sum += num[i]
    for j in range(i+1, n-1):
        sum += num[j]
        for k in range(j+1, n):
            sum += num[k]
            if sum<=m:
                if best < sum:
                    best = sum
                    sum -= num[k]
                else:
                    sum -= num[k]
            else:
                sum -= num[k]
        sum -= num[j]
    sum -= num[i]
print(best)