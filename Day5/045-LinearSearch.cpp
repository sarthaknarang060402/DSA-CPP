// Given an array of length N, you need to find and print
// the index of given number NUM

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int num;
    cin >> num;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int j = 0; j < n; j++)
    {
        if (arr[j] == num)
        {
            cout << "index is " << j;
            break;
        }
    }

    return 0;
}