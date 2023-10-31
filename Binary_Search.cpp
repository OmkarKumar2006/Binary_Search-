#include <iostream>
using namespace std;
// Binary Search
int BinarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return -1;
}
int main()
{
    int arr[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int key = 16;
    int search = BinarySearch(arr, 10, 16);
    cout << "Index No:=" << search;

    return 0;
}