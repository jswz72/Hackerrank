#!/bin/python3

import sys


s,t = input().strip().split(' ')
s,t = [int(s),int(t)]
a,b = input().strip().split(' ')
a,b = [int(a),int(b)]
m,n = input().strip().split(' ')
m,n = [int(m),int(n)]
apple = [int(apple_temp) for apple_temp in input().strip().split(' ')]
orange = [int(orange_temp) for orange_temp in input().strip().split(' ')]

app_fall = 0
org_fall = 0

for apps in apple:
    if a + apps >= s and a + apps <= t :
        app_fall += 1

for orgs in orange:
    if b + orgs <= t and b + orgs >= s:
        org_fall += 1

print(app_fall)
print(org_fall)
