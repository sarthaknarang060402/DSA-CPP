// Print the following pattern for the given N number of rows.
// Pattern for N = 4
// *
// **
// ***
// ****
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
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}