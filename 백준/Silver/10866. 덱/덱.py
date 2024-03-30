import sys
from collections import deque

n = int(input())
deQue = deque()

for i in range(n):
    command = sys.stdin.readline().rstrip().split()
    if command[0] == 'push_front':
        deQue.appendleft(int(command[1]))
    elif command[0] == 'push_back':
        deQue.append(int(command[1]))
    elif command[0] == 'pop_front':
        if len(deQue) == 0:
            print(-1)
        else:
            print(deQue[0])
            deQue.popleft()
    elif command[0] == 'pop_back':
        if len(deQue) == 0:
            print(-1)
        else:
            print(deQue[len(deQue)-1])
            deQue.pop()
    elif command[0] == 'size':
        print(len(deQue))
    elif command[0] == 'empty':
        if len(deQue) == 0:
            print(1)
        else:
            print(0)
    elif command[0] == 'front':
        if len(deQue) == 0:
            print(-1)
        else:
            print(deQue[0])
    elif command[0] == 'back':
        if len(deQue) == 0:
            print(-1)
        else:
            print(deQue[len(deQue)-1])
