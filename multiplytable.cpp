#include<iostream>
using namespace std;
int main()
{
    int a,sum=0;
    cout<<"Enter a number:";
    cin>>a;
    for(int i=1;i<=10;i++)
    {
        cout<<a<<" X "<<i<<" = "<<a*i<<endl;
    }
}