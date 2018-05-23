#include <iostream>

int main(void) {
	char a[10];
	int x,i;
	cin>>a;
	for(i=0;a[i]!='\0';i++)
	{
		
		x=(int)(a[i]);
		if(x%2!=0)
		{
		cout<<a[i];	
		}
	}
	return 0;
}
