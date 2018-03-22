#include <iostream>
using namespace std;
int main() {
	int i,num1,num2;
	cout<<"Enter two numbers\n";
	cin>>num1>>num2;
	for(i=num1+1;i<num2;i++)
	{
		if(i%2!=0)
		cout<<i<<" ";
		else continue;
	}
	return 0; }
