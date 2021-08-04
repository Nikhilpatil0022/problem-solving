#Determine whether two positive integer numbers are coprime.

def GCD(a,b):
    if a==0:
        return b
    return GCD(b%a, a)


def main():
    a = int(input("Please enter 1st number "))
    b = int(input("Please enter 2nd number "))

    if GCD(a, b) == 1:
        print("Entered numbers are coprime")
    else:
        print("Entered numbers are not coprime")

if __name__ == '__main__':
    main()
