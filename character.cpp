#include<iostream>
using namespace std;
int main()
{
    char a;
    cout<<"Enter a character:";
    cin>>a;
    if((a>='a' && a<='z') || (a>='A' && a<='Z'))
    {
        cout<<"Alphabet";
    }
    else if(a>=0 && a<=9)
    {
        cout<<"Digit";
    }
    else
    {
        cout<<"Special character";
    }
    return 0;
}