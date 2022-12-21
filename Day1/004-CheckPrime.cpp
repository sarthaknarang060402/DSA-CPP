#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    //a number is prime of its divisible by 1 and itself only.
    int div=2;
    int flag=1;
    for(;div<n;div++)
    {
        if(n%div==0)flag=0;
    }
    cout<<flag;
    return 0;
}