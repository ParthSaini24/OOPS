#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter three numbers:";
    cin>>a>>b>>c;
    int l=a;
    if(b>l)
    {
        l=b;
    }
    if(c>l)
    {
        l=c;
    }
    cout<<l<<" is largest";
    return 0;
}