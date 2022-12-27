// rotate by k
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void reverse(int *input, int start, int end)
{
    for (int i = start; i <= (start + end) / 2; i++)
    {
        swap(input[i], input[end - i + start]);
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int d;
    cin >> d;

    // reverse full array
    reverse(arr, 0, n - 1);
    // reverse n-d elements
    reverse(arr, 0, n - d - 1);
    // reverse last d elements
    reverse(arr, n - d, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}