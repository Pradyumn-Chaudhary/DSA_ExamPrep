def Search(num):
    low = 0
    high = len(my_list) - 1
    while low <= high:
        mid = (low + high) // 2
        if num == my_list[mid]:
            print(f"Found at index {mid}")
            return
        elif num < my_list[mid]:
            high = mid - 1
        else:
            low = mid + 1
    
    print("Not found")

my_list = [2,3,5,6,8,9]
Search(5)
Search(10)
