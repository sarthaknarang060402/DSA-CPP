// Print the following pattern for the given N number of rows.
// Pattern for N = 4
// 4444
// 333
// 22
// 1
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=n;j>i;j--)
        {
            cout<<n-i;
        }
        cout<<endl;
    }
    return 0;
}