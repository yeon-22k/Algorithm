import sys
from collections import deque

n = int(input())
stack = []

for i in range(n):
    go = sys.stdin.readline().split()
    if go[0] == 'push':
        stack.append(int(go[1]))
    elif go[0] == 'pop':
        if len(stack) == 0:
            print(-1)
        else:
            print(stack[len(stack)-1])
            stack.pop()
    elif go[0] == 'size':
        print(len(stack))
    elif go[0] == 'empty':
        if len(stack) == 0:
            print(1)
        else:
            print(0)
    elif go[0] == 'top':
        if len(stack) == 0:
            print(-1)
        else:
            print(stack[len(stack)-1])
