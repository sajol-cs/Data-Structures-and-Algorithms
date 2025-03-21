#include <iostream>
using namespace std;
int decToBin(int decNum)
{
    int ans = 0;
    int pow = 1;
    while (decNum > 0)
    {
        int rem = decNum % 2; // finding remainder
        decNum = decNum / 2;
        ans += (rem * pow);
        pow = pow * 10;
    }
    return ans;
}
int main()
{
    for(int i=1;i<=10;i++){
        cout << decToBin(i)<<endl;
    }
    
    return 0;
}