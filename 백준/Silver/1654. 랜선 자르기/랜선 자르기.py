import sys

line=[]
k, n = map(int, sys.stdin.readline().split())

for i in range(k):
    line.append(int(input()))

start, end = 1, max(line)

while (start<=end):
    mid = (start + end) // 2
    cut = 0
    for i in line:
        cut += i // mid
    if cut < n:
        end = mid - 1
    else:
        start = mid + 1

print(end)