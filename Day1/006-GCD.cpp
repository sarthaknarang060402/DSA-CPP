#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    while(1)
    {
        if(m%n==0) {
            cout<<n;
            break;
        }
        else {
            int temp=m%n;
            m=n;
            n=temp;
        }
    }
    return 0;
}