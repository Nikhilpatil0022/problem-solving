#Determine the prime factors of a given positive integer (2).
#Construct a list containing the prime factors and their multiplicity.

import math

def primeFactors(n):
    fact = []

    total = 0
    while n%2 == 0:
        total+=1
        #fact.append(2)
        n = n/2

    if total>1:
        fact.append([2, total])
    i = 3

    while i<=math.sqrt(n):
        total = 0
        while n%i == 0:
            #fact.append(i)
            total+=1
            n = n/i
        if total>0:
            fact.append([i, total])

        i+=2

    if n>2:
        fact.append([int(n),1])

    return fact

def main():
    n = int(input("Please enter the number "))
    print(primeFactors(n))

if __name__ == '__main__':
    main()
