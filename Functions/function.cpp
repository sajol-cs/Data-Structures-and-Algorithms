#include<iostream>
using namespace std;

// Function with arguments but no return value
void printSum(int a, int b) {
    cout << "Sum: " << a + b << endl;
}

int main() {
    printSum(3, 5);  // Function call with arguments
    return 0;
}
