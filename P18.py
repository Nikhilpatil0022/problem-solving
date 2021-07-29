#Extract a slice from a list.
# Given two indices, I and K, the slice is the list containing the elements between the I'th and K'th element of the original list (both limits included). Start counting the elements with 1.

l = [1,2,3,4,5,6,7,8,9]
I = 3
K = 7
m = []
for n in range(I,K+1):
    m.append(l[n-1])

print(m)                        #we can also use simple slicing technique like l[I-1:K]
