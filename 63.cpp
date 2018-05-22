#include <stdio.h>
int main(void) 
{
	char str[50];
  int i,count=1;
	cout<<"enter the sentence:";
  cin>>str;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
		{
			count=count+1;
		}
	}

cout<<count;
	return 0;
}
