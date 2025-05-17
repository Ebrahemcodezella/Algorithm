#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void BubbleSort(vector<int>&arr){
    int size=arr.size();
    bool flag;
    for (int i = 0; i < size-1; i++)
    {
        flag=false;
        for(int j = 0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j+1],arr[j]);
                flag=true;
            }
        }
        if (!flag)
        {
            break;
        }
        
    }
    
}
void print(const vector<int>&arr){
    for (int i = 0; i < arr.size(); i++)
    {
        cout<< arr[i]<<" ";
    }
    
}
int main(){
    vector<int>arr={5,6,2,3,1,0};
    BubbleSort(arr);
    print(arr);
}