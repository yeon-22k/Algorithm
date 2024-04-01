import sys
from collections import deque

best = 0
bestI = 0
for i in range(0, 5):
    jum = list(map(int, sys.stdin.readline().split()))
    if best < sum(jum):
        best = sum(jum)
        bestI = i+1
print(bestI, best)