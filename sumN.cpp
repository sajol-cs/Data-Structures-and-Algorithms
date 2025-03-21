#include <iostream>
using namespace std;

// function definition
int sumN(int n)
{
    int sum = 0;
    int i;
    for (i = 1; i <= n; i++)
    {
        sum += i; // Add the current value of i to sum
    }
    return sum;
}

int main()
{
    // function call or invoke
    cout << "sum of n is: " << sumN(10) << endl;
    return 0;
}
