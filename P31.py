#Determine whether a given integer number is prime.

def isPrime(n):
    for i in range(2,n):
        if n%i == 0:
            return False
    return True

def main():
        if isPrime(int(input("Please enter the number "))):
            print("True")
        else:
            print("False")

if __name__ == '__main__':
    main()
