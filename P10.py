#Run-length encoding of a list.
#Use the result of problem P09 to implement the so-called run-length encoding data compression method.
#Consecutive duplicates of elements are encoded as lists (N E) where N is the number of duplicates of the element E.

l = ['a','a','a','b','b','b','b','c','c','d','d','d','d']

D = {};

for i in l:
    if i not in D:
        D[i] = 1
    else:
        D[i]+=1
l = [];
for item in D:

    l.append([item,D[item]])
print(l)
