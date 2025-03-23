#include <iostream>
#include <climits>
using namespace std;
void reversedArr(int arr[], int sz){
    int start = 0, end = sz - 1;
    while(start<end){//as the array will be even
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main(){
    int sz;
    cout<<"Enter the size of the array: ";
    cin>>sz;
    int arr[sz];
    cout<<"Input array: ";
    for(int i = 0;i<sz;i++){
cin>>arr[i];
    }
    
    
    
    reversedArr(arr, sz);
    cout<<"Reversed Array is: ";
    for(int i =0; i<sz;i++){
    cout<<arr[i]<<" "; //printing arrays with loops
    }
    cout<<endl;
    return 0;
}