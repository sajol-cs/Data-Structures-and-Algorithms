// Checking a number prime or not using function
#include <iostream>>
using namespace std;

int isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true; // No divisors found, so n is prime
}
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    if (isPrime(n))
    {
        cout << n << " is prime number";
    }
    else
    {
        cout << n << " is not a prime number";
    }
    return 0;
}