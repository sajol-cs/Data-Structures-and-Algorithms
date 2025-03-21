#include<iostream>
using namespace std;

//function definition
int minOfTwo(int a, int b){ //parameters
    if(a<b){
        return a;
    }else{
        return b;
    }
    
}


int main() {
  //function call or invoke
    cout<<"Min is: "<<minOfTwo(15, 9)<<endl; //arguments
    return 0;
}
