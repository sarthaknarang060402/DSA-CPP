//Write a program to input an integer N and 
//print the sum of all its even digits and sum of all its odd digits separately.
#include<iostream>
using namespace std;
int main() 
{
	int n;
    cin>>n;
    
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