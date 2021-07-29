#Split a list into two parts; the length of the first part is given.

l = [1,2,3,4,5,6,7,8,9];
s = 4
cnt = 1

m = []
n = []

for i in l:
    if cnt<=s:
        m.append(i)
    else:
        n.append(i)

    cnt+=1
l=[]
l.append(m)
l.append(n)
print(l)
