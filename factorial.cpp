#include<iostream>
using namespace std;
int main()
{
    int a,fact=1;
    cout<<"Enter a number:";
    cin>>a;
    for(int i=a;i>=1;i--)
    {
        fact=fact*i;
    }
    cout<<"Factorial of "<<a<<" is: "<<fact;
0} 