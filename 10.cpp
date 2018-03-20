#include <iostream>
using namespace std;
int main() {
	int num,count=0;
	cout<<"Enter the digits of number\n";
	cin>>num;
	cout<<"Entered number:"<<num<<"\n";
	while(num!=0)
	{	num=num/10;
		count+=1;
	}
	cout<<count;
	return 0;  }
