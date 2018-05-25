#include<iostream>
int main()
{
    int a[200],i,j,n,t,k;
    cin>>n;
    cin>>k;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        if(a[i]>a[j])
        {
            t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
    }
    for(i=0;i<k-1;i++)
   cin>>a[i];
   return 0;
}
