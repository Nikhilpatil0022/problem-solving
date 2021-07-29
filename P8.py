#Eliminate consecutive duplicates of list elements.

l = [1,1,1,1,2,2,2,3,3,3,3,4,5,5,5]

m = []
for i in l:
	if i not in m:
		m.append(i)

print(m)
