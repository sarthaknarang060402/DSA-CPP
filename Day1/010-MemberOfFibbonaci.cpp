#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a=0;
    int b=1;
    int c;
    for(;a<=n;)
    {
        if(a==n)
        {
            cout<<"1";
            return 0;
        }
        c=a+b;
        a=b;
        b=c;
    }
    cout<<"0";
    return 0;
}