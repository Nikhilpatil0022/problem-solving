#Flatten a nested list structure.

l = [1,[2,3],[4,5,[6,7]]]							#Netsed List

def flat(l):
	if len(l) == 0:
		return l
	if isinstance(l[0], list):						#checks the type of 1st element of list
		return flat(l[0]) + flat(l[1:])				#if it is list then recursive call
	return l[:1] + flat(l[1:])						#else concat 1st element as a list with recursive call to flatten the other part of list

print("Flattenned list is",flat(l))
