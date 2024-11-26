def maxFind():
    max_val = float('-inf')
    idx = 0
    mid = (len(my_list)-1)// 2
    for i, el in enumerate(my_list):
        if el > max_val:
            max_val = el
            idx = i
    if idx <= mid:  # Allow max to be at mid or before
        print("First Half")
    else:
        print("Second Half")

my_list = [1, 2, 3, 9, 8, 7, 6, 5]
maxFind()

my_list = [1, 2, 3, 9, 8, 7]
maxFind()
