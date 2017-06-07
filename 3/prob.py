n = 600851475143
half = int(n / 2)

def isPrime(n):
    for i in range(2,int(n/2)):
        if n % i == 0:
            return False
    print(str(n) + " is prime")
    return True

primeFactors = []
for i in range(2, half):
    if i % 100000 == 0: print("\r" + str(i), end='')
    if n % i == 0 and isPrime(i): primeFactors.append(i)

print(primeFactors)
