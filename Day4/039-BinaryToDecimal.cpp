// Binary to decimal
// Given a binary number as an integer N, convert it into decimal and print.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ans=0;
    for(int i=0;n>0;i++)
    {
        ans+=(n%10)*pow(2,i);
        n/=10;
    }
    cout<<ans;
    return 0;
}