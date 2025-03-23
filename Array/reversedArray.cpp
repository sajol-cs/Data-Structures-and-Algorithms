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
    int arr[] = {1, 2,3, 4, 5, 6};
    int sz = 6;
    reversedArr(arr, sz);
    for(int i =0; i<sz;i++){
    cout<<arr[i]<<" "; //printing arrays with loops
    }
    cout<<endl;
    return 0;
}