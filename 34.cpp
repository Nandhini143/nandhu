#include<iostream>
int main()
{ 	char str[50];
	int c=0,i;
  cin.getline(str, 50);
    int l;
    l=strlen(str);
	for (i = 0; i<l; i++)
		if (str[i] == '.')
		c++;
	cout<<c;
	return 0; }
