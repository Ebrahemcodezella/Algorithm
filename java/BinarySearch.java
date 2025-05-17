package org.example.Impratev.Algorithm;

public class BinarySearch {
//time complexity O(log(n))
    public int binarySearch(int []arr,int value){

        int low =0;
        int high=arr.length-1;
        while (low<=high){
            int mid=(low+high)/2;
            if(arr[mid]==value){
                return  mid;
            } else if (arr[mid]<value) {
                low =mid+1;
            }
            else {
                high=mid-1;
            }
        }
        return -1;
    }
}
