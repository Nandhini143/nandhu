#include <iostream>

int main(void) {
	char a[10];
	int m,i,flag=0;
	gets(a);
	m=strlen(a);
	for(i=0;i<m;i++)
	{
		if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')
		{
			cout<<"yes";
			flag=1;
			break;
		}
	}
	if(flag==0){
	cout<<"no";
	}
		return 0;
}
