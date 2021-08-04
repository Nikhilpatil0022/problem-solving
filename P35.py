#Determine the prime factors of a given positive integer.
import math

def primeFactors(n):
    fact = []
    while n%2 == 0:
        fact.append(2)
        n = n/2
    i = 3

    while i<=math.sqrt(n):
        while n%i == 0:
            fact.append(i)
            n = n/i
        i+=2

    if n>2:
        fact.append(n)

    return fact

def main():
    n = int(input("Please enter the number "))
    print(primeFactors(n))

if __name__ == '__main__':
    main()
