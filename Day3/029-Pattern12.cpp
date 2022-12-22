// Print the following pattern for the given N number of rows.
// Pattern for N = 3
//  A
//  BB
//  CCC
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    char letter='A';
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i+1;j++)
        {   
            cout<<char(letter+i);
        }        
        cout<<endl;
    }
    return 0;
}