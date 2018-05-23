#include <iostream>

int main(void) {
	int n,m,o,i,p,flag=0;
	cin>>n>>m;;
	o=m*n;
	for(i=1;i<=o/2;i++)
	{
		p=i*i;
		if(p==o)
		{
			cout<<"yes";
			flag=1;
			break;
		}
		
		
	}
	if(flag==0)
	cout<<"no";
	return 0;
}
