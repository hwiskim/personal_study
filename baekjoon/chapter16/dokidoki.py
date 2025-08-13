import sys
input = sys.stdin.readline

wait = []

num = int(input())
line = list(map(int, input().split()))

line = line[:num]

order = 1
while order < num :
    if line and line[0] == order:
        line.pop(0)
        order += 1
    else:
        if line:
            wait.append(line.pop(0))
    while wait and wait[-1] == order:
        wait.pop()
        order += 1
    if not line:
        break
    
    
if order >= num:
    print("Nice")
else:
    print("Sad")