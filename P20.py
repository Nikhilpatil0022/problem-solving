#Remove the N'th element from a list.

l = list(input("Please enter the list ").split())
n = int(input("Please enter the number "))

l = list(l[:n-1] + l[n:])

print(l)
