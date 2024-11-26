def GCD(num1,num2):
    if num2 != 0:
        return GCD(num2,num1%num2)
    else:
        return num1
    
num1 = int(input("Enter num1 : "))
num2 = int(input("Enter num2 : "))
print(GCD(num1,num2))