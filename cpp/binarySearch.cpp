#include <iostream>
using namespace std;
// time complixty O(log n) 
int binarySearch(int arr[], int value, int size)
{
    int low = 0;
    int high = size-1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == value)
        {
            return mid;
        }
        else if (arr[mid] < value)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}


int main(){
    int arr[]={17,26,30,47,58,98,102};
    cout<<binarySearch(arr,30,7)<<endl;
}