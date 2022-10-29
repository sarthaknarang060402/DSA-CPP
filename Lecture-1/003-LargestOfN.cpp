#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int largest=INT_MIN;
    int num;
    for(int i =0;i<n;i++)
    {
        cin>>num;
        if(num>largest)largest=num;
    }
    cout<<endl<<largest;
    return 0;
}