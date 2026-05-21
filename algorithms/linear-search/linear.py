def linear_search(arr, target):
    for i in range(len(arr)):
        if arr[i] == target:
            return i
    return -1


arr = [5, 2, 9, 1, 6]
print("Index:", linear_search(arr, 9))
