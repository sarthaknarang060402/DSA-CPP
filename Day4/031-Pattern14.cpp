// Print the following pattern for the given number of rows.
// Pattern for N = 5
// E
// DE
// CDE
// BCDE
// ABCDE
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        char letter='A'+n-i-1;
        for(int j=0;j<i+1;j++)
        {
            cout<<letter++;
        }
        cout<<endl;
    }
    return 0;
}