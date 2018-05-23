#include <iostream>

int main(void) {
	char a[10];
	int m;
	cin>>a;
	m=strlen(a);
	if(m%2==0)
	{
		a[m/2]='*';
		a[(m/2)-1]='*';
	}
	else
	{
		a[m/2]='*';
	}
	cout<<a;
	return 0;
}
