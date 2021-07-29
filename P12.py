#Decode a run-length encoded list.
#Given a run-length code list generated as specified in problem P11. Construct its uncompressed version.

l = [['a', 3], 'b', ['c', 2], ['d', 4], 'e']
m = [];
for i in l:

    if isinstance(i, list):
        m = m+list(i[0]*i[1])
    else:
        m = m+list(i)
print(m)
