#include <iostream>
using namespace std;
int main() {
	int num1,num2,i,count;
	cout<<"Enter two numbers\n";
	cin>>num1>>num2;
	while(num1<num2)
	{
		count=0;
		for(i=2;i<num1/2;i++)
		{
			if(num1%2==0)
			{
				count+=1;
			} }
		if(count==0)
		{
			cout<<num1;	
		}		
		num1++;	
	}
	return 0; }
