#include<iostream>
using namespace std;

// LinerSearch with time Compilixty O(n) 
void linerSearch(int arr[],int size,int key){

    
    bool flage = true;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==key)
        {
            cout<<"found: "<<key<<" Element in index: "<<i<<"\n";
            flage=false;
            break;
        }
    }
    if(flage){
        cout<<"Element not found"<<endl;
    }
}



int main(){


    int input[]={1,4,3,4,5};
    int size = sizeof(input)/sizeof(input[0]);
    linerSearch(input,size,9);
}


// #include<iostream>
// using namespace std;
// int num(){
//     cout<<"iam a number"<<endl;
//     return 12;
// }
// int main(){
//     num();
//    cout<< num()<<endl;
// }