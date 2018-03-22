#include <iostream>
using namespace std;
int main() {
	int num1,temp,sum=0,digit;
	cout<<"Enter a number\n";
	cin>>num1;
	temp=num1;
	while(temp!=0)
	{
		digit=temp%10;
		sum+=digit*digit*digit;
		temp=temp/10; 	}
	if(num1==sum)
		cout<<"YES";
		else
		cout<<"NO";
	return 0; }
