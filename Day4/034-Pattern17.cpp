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
        for(int j=0;j<n-i;j++)
        {
            cout<<" ";
        }

        //half 1
        int start=i+1;
        for(int j=0;j<i+1;j++)
        {
            cout<<start++;
        }

        //half2
        start-=2;
        for(int j=0;j<i;j++)
        {
            cout<<start--;
        }
        cout<<endl;
    }
    return 0;
}   