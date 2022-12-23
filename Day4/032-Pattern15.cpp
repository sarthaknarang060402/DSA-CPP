// Print the following pattern for the given N number of rows.
// Pattern for N = 4
//    1
//   12
//  123
// 1234
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int start =1;
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<i+1;j++)
        {
            cout<<start++;
        }
        cout<<endl;
    }
    return 0;
}