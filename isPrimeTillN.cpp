#include<iostream>
using namespace std;
int isPrime(int n){
    if(n<=1){
        return false;
    }
    // Check divisibility from 2 to the square root of n
 for(int i=2;i*i<=n;i++){
    if(n%i==0){
        return false;
    }
}
return true;

}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    // Checking for prime numbers from 2 to n
    for(int i=2; i<=n; i++){
    if(isPrime(i)){
        cout<<i<<" is a prime number"<<endl;
    }    else{
        cout<<i<<" is not a prime number"<<endl;
    }
    }
    return 0;
}