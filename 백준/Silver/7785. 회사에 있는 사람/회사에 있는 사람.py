import sys

n = int(input())
enters = []

for i in range(n):
    data = list(map(str, sys.stdin.readline().split()))
    if data[1] == 'enter':
        enters.append(data[0])
    if data[1] == 'leave':
        enters.remove(data[0])

enters.sort(reverse = True)

for i in range(len(enters)):
    print(enters[i])