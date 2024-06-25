#include "bits/stdc++.h"
using namespace std;

int peakIndex(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    int peak_index = n;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] > arr[mid - 1])
        {
            peak_index = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return arr[peak_index];
}

int main()
{
    int arr[10] = {0, 1, 2, 3, 4, 4, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << peakIndex(arr, n);
}