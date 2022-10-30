// Print the following pattern for the given number of rows.
// Pattern for N = 4
//    1
//   232
//  34543
// 4567654
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        //spaces
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }

        //number_1
        int val;
        for(int j=0;j<=i;j++)
        {
            cout<<i+j+1;
            val=i+j+1;
        }
        //number_2
        for(int j=0;j<i;j++)
        {
            cout<<--val;
        }
        cout<<endl;
    }
    return 0;
}   