
def SelectionSort(arr):
    print("Unsroted array: ")
    for element in arr:
        print(element,end=" ")
    print()
    n = len(arr)
    for i in range(n):
        min_index = i
        for j in range(i + 1, n):
            if arr[j] < arr[min_index]:
                min_index = j
        arr[i], arr[min_index] = arr[min_index], arr[i]
    print("sroted array: ")
    for element in arr:
        print(element,end=" ")
    print()
    


SelectionSort([5, 4, 3, 2, 1])