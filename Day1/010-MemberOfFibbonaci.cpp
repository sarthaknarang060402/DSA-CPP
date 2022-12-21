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
            cout<<true;
            return 0;
        }
        c=a+b;
        a=b;
        b=c;
    }
    cout<<false;
    return 0;
}