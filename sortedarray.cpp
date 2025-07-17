#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    int arr1[n],arr2[n],flag=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr1[i]<arr1[j])
            {
                flag=1;
            }
        }
    }
    if(flag==1)
    {
        cout<<"Sorted";
    }
    else
    {
        cout<<"Not Sorted";
    }
    return 0;
}