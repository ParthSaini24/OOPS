// #include<iostream> 
// using namespace std;

// int main()
// {
//     cout <<"Hellow\nWorld";
//     return 0;
// }

#include<iostream>
using namespace std;

// int main()
// {
//     int n,count=0;
//     cout<< "Enter a number:";
//     cin>>n;
//     for(int i=2;i<n;i++)
//     {
//         if(n%i==0)
//         {
//             count++;
//         }
//     }
//     if(count==0)
//     {
//         cout<<"Prime Number";
//     }
//     else
//     {
//         cout<<"Not a prime number";
//     }
//     return 0;
// }


// int main()
// {
//     int n,count=0;
//     cout<< "Enter a number:";
//     cin>>n;
//     if(n%2==0)
//     {
//         cout<< "Even";
//     }
//     else
//     {
//         cout<<"Odd";
//     }
//     return 0;
// }

int main()
{
    int a,b,c,op;
    cin>>a;
    cin>>b;
    cin>>op;
    switch (op)
    {
    case 1:
        c=a+b;
        break;
    case 2:
        c=a-b;
        break;
    case 3:
        c=a*b;
        break;
    case 4:
        c=a/b;
        break;
    default:
        break;
    }
    cout<<c;
    return 0;
}
