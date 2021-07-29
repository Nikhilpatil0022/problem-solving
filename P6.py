#Find out whether a list is a palindrome.

print("Please enter the list")
l = list(map(int,input().split())) 	#list input

r = list(reversed(l))

if l == r:
	print("list is a palindrome")
else:
	print("list is not a palindrome")

