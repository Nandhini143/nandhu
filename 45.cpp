#include<iostream>
using namespace std;
int main()
{
int a,i,n,count=0;
cin>>n;
while(n>0)
{
    a=n%10;
    count=count+1;
    n=n/10;
}
cout<<count;
}
