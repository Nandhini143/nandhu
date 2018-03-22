#include <iostream>
using namespace std;
int main()  {
int n,i,j,count;
cout<<"Enter the value of N\n";
cin>>n;
int *arr=new int[n];
cout<<"Enter the value of array\n";
for(i=0;i<n;i++)
{
cin>>arr[i]; }
for(i=0;i<n-1;i++)
{
count=0;
for(j=0;j<n-i-1;j++)
{
if(arr[j]>arr[j+1])
{
swap(arr[j],arr[j+1]);
count++;
} }
if(count==0)
break;
}
cout<<"Middle element\n";
cout<<arr[n/2];
return 0; }
