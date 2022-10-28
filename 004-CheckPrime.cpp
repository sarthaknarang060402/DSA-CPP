#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    //prime number must only be divisible by 1 and itself
    bool flag=0;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)flag=1;
    }
    cout<<!flag;
    return 0;
}