#include <iostream>
using namespace std;

// function definition
int factN(int n){
    int fact = 1;
    for(int i = 1;i<=n;i++){
        fact*=i; //fact = fact * n;
    }
    return fact;
}

int main()
{
    // function call or invoke
    cout << "fact of n is: " << factN(4) << endl;
    cout << "fact of n is: " << factN(5) << endl;
    return 0;
}
