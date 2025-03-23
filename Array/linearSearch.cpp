#include <iostream>
#include <climits>
using namespace std;
int linear(int arr[], int size, int target)         //Function Declaration
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 8)
        {
            return i;
        }
    }
    return -1; // NOT FOUND
}

int main()
{
    int arr[] = {5, 7, 55, 9, 10, 8, 14};
    int size = 7;
    int target = 8;
    cout<< linear(arr, size, target)<<endl; //Function Calling & Printing
}
