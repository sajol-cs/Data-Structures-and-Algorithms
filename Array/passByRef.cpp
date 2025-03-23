#include <iostream>
#include <climits>
using namespace std;

void changeOfArr(int nums[], int size)
{
    for (int i = 0; i < size; i++) // ei loop dea shudhu number gulo k 2X kora hocche
    {
        nums[i] = nums[i] * 2;
    }
}
int main()
{
    int nums[] = {12, 13, 14, 15, 16, 22};
    changeOfArr(nums, 6);
    for (int i = 0; i < 6; i++) // ager loop e 2X kora nums gula ekhane just print hoye jabe
    {
        cout << nums[i] << endl;
    }
}
