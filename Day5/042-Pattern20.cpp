// Print the following pattern for given number of rows.
// Input format :
// Line 1 : N (Total number of rows)
// Sample Input : 5
// Sample Output :
// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            cout<<j+1;
        }

        for(int j=0;j<i;j++)
        {
            cout<<"*";
        }

        for(int j=0;j<i;j++)
        {
            cout<<"*";
        }
        for(int j=n-i;j>0;j--)
        {
            cout<<j;
        }

        cout<<endl;
    }
    
    return 0;
}