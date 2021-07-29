#Rotate a list N places to the left.

l = list(input("please enter the list ").split())

n = int(input("Please enter the number "))

if n>0:
    l = list(l[n:] + l[:n])

else:
    n = n*(-1)                                        #for rotating right
    l = list(l[-n:] + l[:-n])
print (l)
