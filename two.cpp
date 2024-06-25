#include "bits/stdc++.h"
using namespace std;

int firstAndLast(int arr[], int n, int target)
{
    int start = 0;
    int end = n - 1;
    int ans = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] > target)
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int arr[10] = {0, 1, 2, 5, 5, 6, 8, 8, 8, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << firstAndLast(arr, n, 9);
}