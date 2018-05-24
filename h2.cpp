#include <iostream>
using namespace std;
int main()
{
	int a[100],i,j,n,temp;

	cin>>n;
	
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"The biggest combination is..";
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
		 if(a[i]<a[j])
		 {
		 	temp=a[i];
		 	a[i]=a[j];
		 	a[j]=temp;
		 }
		}
	}
		for(i=0;i<n;i++)
		{
			cout<<a[i];
		}
	return 0;
}
