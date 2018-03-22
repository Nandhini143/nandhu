#include <iostream>
using namespace std;
int main() {
	int num,divisor,i,count=0;
	cout<<"Enter a number\n";
	cin>>num;
	for(i=2;i<=num/2;i++)
	{
		if(num%i==0)
		{		count+=1;
		}
	}
	if(count==0)
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}	return 0;
}
