#!/bin/python3

import sys
import string


h = list(map(int, input().strip().split(' ')))
word = input().strip()
largest = 0;

for i in word:
    if h[ord(i)-97] > largest:
        largest = h[ord(i)-97]

print(largest*len(word))

