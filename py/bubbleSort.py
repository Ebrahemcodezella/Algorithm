def bubble_sort(arr):
    for  i in range(len(arr)-1):
        swap=False    
        for j in range(len(arr)-i-1):
            if arr[j]>arr[j+1]:
                arr[j],arr[j+1]=arr[j+1],arr[j]
                swap=True
        if not swap:
            break    
array = [6,4,2,8,5,9]
bubble_sort(array)
print(*array)