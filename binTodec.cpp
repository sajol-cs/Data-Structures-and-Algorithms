#include<iostream>
using namespace std;
int binToDec(int binNum){
    int ans = 0;
    int pow = 1;
    int rem;
    while(binNum>0){
        rem = binNum % 10;
        ans += rem * pow;
        binNum = binNum / 10;
        pow = pow * 2;
    }
return ans;
}
int main(){
    cout<<binToDec(1010);
}