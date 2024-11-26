def freqCount(num):
    count = 0
    for el in my_list:
        if el == num:
            count+=1
    return count

my_list = [1,2,2,3,3,3,4,4,4,4,5,5,5,5,5]

num = int(input("Enter number, you need to count frequency : "))
count = freqCount(num)
print(count)