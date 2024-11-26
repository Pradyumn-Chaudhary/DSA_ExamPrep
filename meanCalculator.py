lst = eval(input("Enter List : "))

sum = 0

for i in lst:
    sum += i

mean = sum / len(lst)

print("Mean of " ,lst, "is : " ,mean)