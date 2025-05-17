def binarySearch(arr,value,size):
    # time coplixty O(log n)
    high= size -1
    low=0
    while low<=high:
        mid = int((low+high)/2)
        if arr[mid]==value:
            return mid
        elif arr[mid]<value:
            low= mid+1
        else :
            high=mid-1
    
    return-1


print(binarySearch([11,33,41,62,85,90],85,6))