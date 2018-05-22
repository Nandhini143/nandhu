#include <iostream.h>
 
int main(void) 
{
	int num,even;
	cout<<"enter the number:";
	cin>>num;
	if(num%2==0)
	{
		even=num-2;	
	}
	else
	{
		even=num-1;
	}
	cout<<even;
	return 0;
}
