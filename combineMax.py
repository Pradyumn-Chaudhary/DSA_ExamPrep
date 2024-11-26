def maxFind():
    max_val = float('-inf')
    for el in my_list:
        if el > max_val:
            max_val = el
    print(max_val)

my_list1 = [1, 20, 3, 9, 8, 7, 6, 5]
my_list2 = [10, 13, 18, 19, 14, 17]

# my_list = my_list1 + my_list2
my_list = my_list1
my_list.extend(my_list2)

maxFind()


