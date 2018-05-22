#include<iostream>
void main()
{
int n,a[50],sum=0,avg,i;
couy<<"enter the limit";
cin>>n;
cout<<"enter the number";
for(i=0;i<n;i++)
{
cin>>a[i];
}
cout<<"avg is";
for(i=0;i<n;i++)
{
sum=sum+a[i];
}
avg=sum/n;
cout<<avg;
}
