#Replicate the elements of a list a given number of times.

l=['a','b','c','d']
n = 3
m =[]
for i in l:
    m = m + list(i*n)

print (m);
