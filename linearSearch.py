def Search(num):
    for idx,i in enumerate(my_list):
        if i == num:
            print(i," Found at idx ",idx)
            break
    else:
        print(num," Not found")

my_list = [6,3,9,5,2,8]
Search(5)
Search(10)