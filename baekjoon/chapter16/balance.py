import sys
input = sys.stdin.readline

yesnolist = []

def isBalance(s):
    global yesnolist
    result = ''.join(c for c in s if c == '(' or c == ')' or c == '[' or c == ']')
    while result.count("()") or result.count("[]"):
        result = result.replace("()", "")
        result = result.replace("[]", "")
    if result:
        yesnolist.append("no")
    else:
        yesnolist.append("yes")


while True:
    str = input().rstrip()
    if str == ".":
        break
    isBalance(str)
print("\n".join(yesnolist))
