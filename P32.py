#Determine the greatest common divisor of two positive integer numbers

def GCD(a,b):
    if a==0:
        return b
    return GCD(b%a, a)



def main():
    a = int(input("Please enter 1st number "))
    b = int(input("Please enter 2nd number "))

    print("GCD of given numbers is:", GCD(a,b))

if __name__ == '__main__':
    main()
