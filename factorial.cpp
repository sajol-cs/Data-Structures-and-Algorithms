#include <iostream>
using namespace std;

// function definition
int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }

    return fact;
}
int nCr(int n, int r){
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_nmr = factorial(n-r); //nmr = n-r
    return fact_n/(fact_r*fact_nmr);
}
int main()
{
    
    cout<<nCr(8,2);
    return 0;
}
