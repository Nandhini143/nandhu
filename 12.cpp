#include <iostream>
using namespace std;
int main() {
	int num1,num2=0,temp;
	cout<<"Enter the number \n";
	cin>>num1;
	temp=num1;
	while(temp!=0)
	{
		num2=(num2*10)+(temp%10);
		temp=temp/10;	}
	if(num1==num2)
	cout<<"YES";
	else
	cout<<"NO";	return 0;
}
