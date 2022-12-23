#include<bits/stdc++.h>
using namespace std;

// int main()
// {
//     unsigned long long int N,a=0,b=1,c;
//     cin>>N;
//     for(int i=0;i<N;i++)
//     {
        
//         c=a+b;
//         a=b;
//         b=c;
//     }
//     cout<<a;
//     return 0;
// }

//this one has issue of overflow

int po=pow(10,9)+7;
int term[100000];
int fibonacciNumber(int n)
{
    if (n <= 1)
        return n%po;
    if (term[n] != 0)
        return term[n]%po;
    else {
        term[n] = fibonacciNumber(n - 1) + fibonacciNumber(n - 2);
        return term[n]%po;
    }
}

int main()
{
    int n;
    cin>>n;
    cout<<fibonacciNumber(n);
}