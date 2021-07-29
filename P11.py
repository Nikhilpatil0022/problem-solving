#Modified run-length encoding.
#Modify the result of problem P10 in such a way that if an element has no duplicates it is simply copied into the result list. Only elements with duplicates are transferred as (N E) lists.

l = ['a','a','a','b','c','c','d','d','d','d','e']

D = {};

for i in l:
    if i not in D:
        D[i] = 1
    else:
        D[i]+=1
l = [];
for item in D:
    if D[item]==1:
        l.append(item)
    else:
        l.append([item,D[item]])
print(l)
