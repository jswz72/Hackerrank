seqList = []
n, num_q = map(int, input().split())

lastAns = 0;

#construct 2d array
for i in range(n):
    seqList.append([])

for i in range(num_q):
    q, x, y = map(int, input().split())
    
    seq = (lastAns ^ x) % n
    #query 1
    if q == 1:
        seqList[seq].append(y)
    
    elif q == 2:
        lastAns = seqList[seq][y % len(seqList[seq])]
        print(lastAns)
