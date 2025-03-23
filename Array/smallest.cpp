#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int arr[] = {99, 55, 45, 78, 79}; // Array of integers
    int size = 5;                     // Size of the array
    int smallest = INT_MAX;           // Initialize smallest to the largest possible integer

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
    cout << "smallest: " << smallest;
    return 0;
}
