// Print the following pattern for the given N number of rows.
// Pattern for N = 4
// 4444
// 4444
// 4444
// 4444

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a=0;
    while(n-a!=0)
    {    
        for(int i=0;i<n;i++)cout<<n;
        cout<<endl;
        a++;
    }
    return 0;
}