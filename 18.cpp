#include <iostream>
using namespace std;
int main() {
	int num1,num2,temp,sum,digit;
	cout<<"Enter two numbers\n";
	cin>>num1>>num2;
	while(num1<num2)
	{
	temp=num1;
	sum=0;
	while(temp!=0) {
		digit=temp%10;
		sum+=digit*digit*digit;
		temp=temp/10;
	}
	if(num1==sum)
	{	cout<<num1<<endl;
	}
	else
	{
		//cout<<"No ARMSTRONG";
	}
	num1++;
	}	return 0;
}
