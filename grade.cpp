#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter your marks:";
    cin>>a;
    if(a>=90 && a<=100)
    {
        cout<<"A grade";
    }
    else if(a>=80 && a<90)
    {
        cout<<"B grade";
    }
    else if(a>=70 && a<80)
    {
        cout<<"C grade";
    }
    else if(a>=60 && a<70)
    {
        cout<<"D grade";
    }
    else if(a<60)
    {
        printf("F grade");
    }
    return 0;
}