#include<iostream>
using namespace std;
int main()
{
    int a,sum=0;
    cout<<"Enter a number:";
    cin>>a;
    for(int i=0;a>0;i++)
    {
        sum+=a%10;
        a/=10;
    }
    cout<<sum;
}