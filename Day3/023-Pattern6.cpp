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
    int i=1;
    int val=1;
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            cout<<val;
            j++;
            val++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}