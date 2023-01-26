#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // sum of previous two is the third
    int a = 0;
    int b = 1;
    int c;
    for (; a < n;)
    {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}