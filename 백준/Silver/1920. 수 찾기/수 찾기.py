import sys

n = int(input())
ns = list(map(int, sys.stdin.readline().split()))
m = int(input())
ms = list(map(int, sys.stdin.readline().split()))

ns.sort()

for i in range(m):
    start = 0
    end = n-1
    a=0
    while (start <= end):
        mid = (start+end) // 2
        if ms[i] == ns[mid]:
            a = 1
            break
        elif ms[i]>ns[mid]:
            start = mid +1
        else:
            end = mid-1
    if a==1:
        print(1)
    else:
        print(0)