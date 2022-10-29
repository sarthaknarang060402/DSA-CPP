#include<iostream>
using namespace std;
int main() 
{
	int n;
    cin>>n;
    if(!(n>=0&&n<=100000000))return 0;
    int a;
    int ev=0,od=0;
    while(n!=0)
    {
        a=n%10;
        if(a%2==0)ev+=a;
        else od+=a;
        n/=10;
    }
    cout<<ev<<" "<<od;
}