#include <bits/stdc++.h> 
using namespace std;

int main() 
{
    int sf,ef,step;
    cin>>sf>>ef>>step;
    float cel;
    for(float i=sf;i<ef;i+=step)
    {
        cel=(i-32)*5/9;
        if(cel>0)cout<<i<<"\t"<<floor(cel)<<endl;
        else cout<<i<<"\t"<<ceil(cel)<<endl;
    }
    return 0;
}