// Given a decimal number (integer N), convert it into binary and print.
// The binary number should be in the form of an integer.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long bin=0,pv=1;
    for(int i=0;n>0;i++)
    {
        bin+=pv*(n%2);
        n/=2;
        pv*=10;
    }
    cout<<bin;
    return 0;
}