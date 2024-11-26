num = int(input("Enter number : "))

i = num//2

isPrime = 1
while i > 1:
    if num % i == 0:
        isPrime = 0
        break
    i = i - 1

if isPrime == 1:
    print("Prime")
else:
    print("Not Prime")