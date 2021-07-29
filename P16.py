#Drop every N'th element from a list.

l = [1,2,3,4,5,6,7,8,9]
n = 3

m = []
cnt = 1
for i in l:
    if cnt == n:
        cnt = 1
    else:
        m.append(i)
        cnt+=1
print(m)
