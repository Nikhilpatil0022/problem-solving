#Duplicate the elements of a list.

l = ['a','b','c','c','d']

m = []
for i in l:
    m.append(i)
    m.append(i)

print(m)
