#include <iostream>
using namespace std;
int main(){
	int n,k,i,sum=0;
	cout<<"Enter two numbers\n";
	cin>>n>>k;
	int*arr=new int[n];
	cout<<"Enter the array values\n";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
		cout<<arr[i];	}
	for(i=0;i<k;i++)
	{
		sum=sum+arr[i];
	}
	cout<<"\n"<<sum;
	return 0;
}
