#include <iostream>
using namespace std;
int main()  {
	int n,min,i;
	cout<<"Enter value of n\n";
	cin>>n;
	int*arr=new int[n];
	cout<<"Enter the elements of array\n";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	min=arr[0];
	for(i=0;i<n;i++)
	{
		if(arr[i]<min)
		min=arr[i];	}
	cout<<min;
	return 0; }
