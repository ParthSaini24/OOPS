#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                swap(arr[i],arr[j]);
            }
        }
    }
    cout<<"Maximum: "<<arr[n-1]<<endl;
    cout<<"Minimum: "<<arr[0]<<endl;
    cout<<"Ascending order: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"Descending order: ";
    for(int i=n-1;i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
