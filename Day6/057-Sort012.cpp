// You are given an integer array/list (ARR) of size N. It contains only Os, 1s and 2s.
// Write a solution to sort this array/list in a 'single scan'. 'Single Scan' refers to iterating
// over the array/list just once or to put it in other words, you will be visiting each element in
// the array/list just once.
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void sort012(int a[], int length)
{
    int lo = 0;
    int hi = length - 1;
    int mid = 0;
    while (mid <= hi)
    {
        switch (a[mid])
        {
        case 0:
            swap(a[lo++], a[mid++]);
            break;
        case 1:
            mid++;
            break;
        case 2:
            swap(a[mid], a[hi--]);
            break;
        }
    }
}

int main()
{
    int t;
    cin >> t;

    while (t > 0)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort012(arr, n);
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
        t--;
    }
    return 0;
}