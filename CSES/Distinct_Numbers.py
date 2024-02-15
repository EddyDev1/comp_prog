import sys

n = int(input())
arr = [int(x) for x in set(sys.stdin.readline().split())]
print(len(arr))