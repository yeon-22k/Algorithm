import sys

n = int(input())
field = []

for i in range(n):
    xy = list(map(int, sys.stdin.readline().split()))
    field.append(xy)

field.sort()
        
for i in range(n):
    print(field[i][0], field[i][1])