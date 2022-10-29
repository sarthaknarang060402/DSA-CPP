#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    while(1)
    {
        if(a%b==0) {
            cout<<b;
            break;
        }
        else {
            int temp=a%b;
            a=b;
            b=temp;
        }
    }
    return 0;
}