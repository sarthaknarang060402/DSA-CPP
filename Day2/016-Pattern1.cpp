// Print the following pattern
// Pattern for N = 4
// 1
// 23
// 345
// 4567
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            cout<<i+j+1;
        }        
        cout<<endl;
    }
    return 0;
}