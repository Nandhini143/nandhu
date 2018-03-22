#include<iostream>
using namespace std;
int main() {
    int i,j,n,arr[50],temp;
    cout<<"enter the number of elements";
    cin>>n;
    cout<<"enter the elements";
    for(i=0;i<n;++i)
    {   
        cin>>arr[i];
    }
    for(i=0;i<n;++i)
    {
        for(j=i+1;j<=n;j++)
        {
                if(arr[i]>arr[j])
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        } }      }
     cout<<"the sorted elements are"<<endl;
         for(i=1;i<=n;++i)
    {
     cout<<arr[i]<<endl;
    }
    return 0; }
