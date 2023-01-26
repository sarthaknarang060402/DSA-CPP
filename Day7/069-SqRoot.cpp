#include <bits/stdc++.h>
using namespace std;
int sqrtN(long long int n) // n=2
{
    int answer = 0;
    for (int i = 0; i <= n; i++) // 0<1 1<2
    {
        int val = i * i; // 0*0  1*1
        if (val <= n)    // 0<=2 1<=2
        {
            answer = i; // 0 1
            continue;
        }
        return answer;
    }
    return answer;
}

int main()
{
    long long int n;
    cin >> n;
    long long int val = sqrtN(n);
    cout << val;
}