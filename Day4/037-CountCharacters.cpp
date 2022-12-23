// Write a program to count and print the total number of characters (lowercase english alphabets only), digits (0 to 9) 
// and white spaces (single space, tab i.e. '\t' and newline i.e. '\n') entered till '$'.
// That is, input will be a stream of characters and you need to consider all the characters which are entered till '$'.
// Print count of characters, count of digits and count of white spaces respectively (separated by space).

#include<iostream>
using namespace std;
int main()
{
    char a;
    int i;
    a=cin.get();
    int dcount=0,ocount=0,ccount=0,tcount=0;
    for(i=0;a!='$';i++)
    {
        if(a>='0'&&a<='9')dcount++;
        else if(a==' '||a=='	'||a=='\n')tcount++;
        else if (a>='a'&&a<='z')ccount++;
        else ocount++;
        a=cin.get();
    }
    cout<<ccount<<' '<<dcount<<' '<<tcount<<' '<<ocount<<endl;
}


