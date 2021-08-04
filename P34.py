#Calculate Euler's totient function phi(m).

def GCD(a,b):
    if a==0:
        return b
    return GCD(b%a, a)

def phi(n):
    total = 1
    for i in range(2,n):
        if GCD(i,n) == 1:
            total+=1
    return total

def main():
    n = int(input("Please enter the number "))
    print("phi(%d) = %d"%(n, phi(n)))

if __name__ == '__main__':
    main()
