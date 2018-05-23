#include <stdio.h>

int main(void) {
	int n,count=1;
	cin>>n;
	while(n!=0)
	{
		n=n/10;
		if(n!=0)
		{
			count=count+1;
		}
	}
	cout<<count;
	return 0;
}
