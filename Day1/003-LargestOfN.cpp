#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int n,ans=INT_MIN;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        if(ans<n)ans=n;
    }
    cout<<ans;
    return 0;
}