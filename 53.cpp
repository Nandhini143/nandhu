#include<stdio.h>
int main(void)
{
	int a[5],i,sum=0;
	for(i=0;i<5;i++)
	cin>>a[i];
	for(i=0;i<5;i++)
            cout<<a[i];
            for(i=0;i<5;i++)
            {
            sum=sum+a[i];
            }
            cout<<sum;
            return 0;
}
