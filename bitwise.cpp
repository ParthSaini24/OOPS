#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter a number:";
    cin>>a;
    // for(int i=7;i>=0;i--)
    // {
    //     cout<<((a>>i) & 1);
    // }
    int b;
    cout<<endl<<"Enter another number:";
    cin>>b;
    cout<<(a & b)<<endl;
    cout<<(a | b)<<endl;
    cout<<(a ^ b)<<endl;
    cout<<(~b)<<endl;
    cout<<(b>>1)<<endl;
    cout<<(b<<1)<<endl;
    return 0;
}
