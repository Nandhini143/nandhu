#include<iostream>
using namespace std;
int main()
{
	int n,a[10],i,c[10],j;
	cin>>n;
	for(i=0;i<n;i++)
	cin>>a[i];c[i]=0;
	for(i=0;i<n;i++)
	for(j=i+1;j<n;j++)
	if(a[i]!=a[j]){
		c[i]++;
	}
	for(i=0;i<n;i++)
	{
		if(c[i]==1)
		cout<<i;
	}
return 0;	
}
