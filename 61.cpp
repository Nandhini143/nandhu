#include <iostream>

int main(void) 
{
	char str[20];
	int k,i;
	cout<<"enter the string and the k value:";
	cin>>str>>k;
	for(i=0;i<k;i++)
	{
		cout<<str[i];
	}
	return 0;
}
