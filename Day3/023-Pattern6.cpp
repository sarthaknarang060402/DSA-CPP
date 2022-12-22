// Print the following pattern for the given N number of rows.
// Pattern for N = 4
// 1
// 23
// 456
// 78910

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            cout<<count++;
        }
        cout<<endl;
    }
    return 0;
}