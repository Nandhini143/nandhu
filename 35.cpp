#include<iostream.h>
int main()
{
	char str[50];
	int c=0,i;
   cin.grtline(str);
    int l;
    l=strlen(str);
	for (i = 0; i<l; i++)
		if (str[i]>='0' && str[i]<='9')
		c++;
cout<<c;
	return 0;
}
