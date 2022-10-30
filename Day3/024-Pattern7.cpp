// Print the following pattern for the given N number of rows.
// Pattern for N = 4
// 1111
// 2222
// 3333
// 4444

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<i+1;
        }
        cout<<endl;
    }
    return 0;
}