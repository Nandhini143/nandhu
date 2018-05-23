#include <iostream>

int main(void) {
	char a[10];
	cin>>a;
	int m,i,j,flag=0;
	m=strlen(a);
	for(i=0,j=m-1;i<=m/2;i++,j--)
	{
		
		if(a[i]!=a[j])
		{
			cout<<"not a palindrome";
			flag=1;
			break;
			
		}
	}
	if(flag==0)
	{
		cout<<"palindrome";
	}
	
	

	return 0;
}
