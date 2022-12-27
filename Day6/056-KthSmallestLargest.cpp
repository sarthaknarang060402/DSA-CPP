// Given an array and a number K where K is smaller than size of array, we need to find the K'th smallest element
// and K'th largest element in the given array. It is given that all array elements are not distinct.
// Note:
// If element is not present, then return -1.
// K'th largest and smallest element in the sorted array. You are given an array consisting of N non distinct positive
//  integers and a number K, your task is to find the K'th largest and K'th smallest element in the array.

// 1) Kth largest and smallest element in an array is the K'th element of the array when sorted in increasing order.
// For example consider the array {2, 1, 5, 6, 3, 3, 8} and K=4, the sorted array will be {1, 2, 3, 3, 5, 6, 8}.
// But we will check the array {1, 2, 3, 5, 6, 8} as 3 is repeated twice and the 4th largest element will be 3 and
// 4th smallest will be 5.
// 2) All the elements of the array are not distinct.

#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>

using namespace std;

void kthSmallestLargest(int arr[], int n, int k)
{
    sort(arr, arr + n);
    vector<int> arr2;
    arr2.push_back(arr[0]);
    int num = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] == arr[i - 1])
            num++;
        else
            arr2.push_back(arr[i]);
    }
    n = n - num;
    if (n - k < 0)
        cout << -1 << " " << -1;
    else
        cout << arr2[n - k] << " " << arr2[k - 1] << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t > 0)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        kthSmallestLargest(arr, n, k);
        t--;
    }
    return 0;
}