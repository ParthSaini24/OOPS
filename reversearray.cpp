#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the no. of elements:";
    cin>>n;
    int arr1[n],arr2[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    for(int i=0;i<n;i++)
    {
        arr2[i]=arr1[n-i-1];
    }
    for(int i=0;i<n;i++)
    {
        cout<<endl<<arr2[i]<<endl;
    }
    return 0;
}