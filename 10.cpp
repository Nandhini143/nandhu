#include <iostream>
using namespace std;
int main() {
	int n,count=0;
	cout<<"Enter the digits of number\n";
	cin>>n;
	cout<<"Entered number:"<<n<<"\n";
	while(n!=0)
	{	n=n/10;
		count+=1;
	}
	cout<<count;
	return 0;  }
