#Pack consecutive duplicates of list elements into sublists.
#    If a list contains repeated elements they should be placed in separate sublists.


l = ['a','a','a','b','b','b','b','c','c','d','d','d','d']

D = {};

for i in l:
    if i not in D:
        D[i] = 1
    else:
        D[i]+=1
l = [];
for item in D:
    n = D[item]
    l.append(list(str(item)*n))

print(l)
