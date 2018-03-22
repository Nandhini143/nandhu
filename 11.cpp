#include <iostream>
using namespace std;
int main() {
	int base,power,result=1;
	cout<<"Enter the Base and Power \n";
	cin>>base>>power;
cout<<"Base:"<<base<<"\n"<<"Power:"<<power<<"\n";
	while(power>0)
	{
		result*=base;
		power--; }
	cout<<"Result"<<result;
	return 0; }
