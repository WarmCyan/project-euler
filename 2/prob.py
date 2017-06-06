
n1 = 0
n2 = 1
n3 = 1

total = 0

while n3 < 4000000:
    n3 = n2 + n1
    n1 = n2
    n2 = n3
    
    if n3 % 2 == 0: total += n3
    
    print(n3)

print("total: " + str(total))
