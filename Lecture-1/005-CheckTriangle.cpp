#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a==b&&a==c)
    {
        cout<<"equilateral";
        return 0;
    }
    else if(a==b||a==c||b==c)
    {
        cout<<"isosceles";
        return 0;
    }
    else cout<<"scalene";
    return 0;
}