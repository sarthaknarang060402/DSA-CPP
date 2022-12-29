// You have been given a random integer array/list(ARR) of size N. You are required to find
// and return the second largest element present in the array/list. If N <= 1 or all the elements
// are same in the array/list then return -2147483648 or -2 ^ 31(It is the smallest value for the range of Integer)

#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int findSecondLargest(int *arr, int n)
{
    int lar = INT_MIN, slar = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > lar)
        {
            slar = lar;
            lar = arr[i];
        }
        else if (arr[i] < lar && arr[i] > slar)
        {
            slar = arr[i];
        }
    }
    if (lar == slar)
        return INT_MIN;
    return slar;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int size;
        cin >> size;
        int *input = new int[size];

        for (int i = 0; i < size; i++)
        {
            cin >> input[i];
        }

        cout << findSecondLargest(input, size) << endl;

        delete[] input;
    }

    return 0;
}