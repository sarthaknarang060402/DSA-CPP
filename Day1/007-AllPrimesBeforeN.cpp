#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    //Primes are divisible by 1 and itself only
    //We have to print all primes that come before n
    
    for(int i=2;i<=n;i++)
    {
        bool flag=0;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)flag=1;//non prime
        }
        if(flag==0)cout<<i<<endl;
    }
    return 0;
}