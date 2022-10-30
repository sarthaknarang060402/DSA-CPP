// Print the following pattern for the given N number of rows.
// Pattern for N = 4
// 1
// 21
// 321
// 4321
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int val=i+1;
        for(int j=0;j<i+1;j++)
        {
            cout<<val--;
        }
        cout<<endl;
    }
    return 0;
}