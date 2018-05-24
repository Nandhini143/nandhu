#include<iostream>
using namespace std;
int main()
{
    int n,a[10],k[10],i,j,l=0,count=0,temp;
   cin>>n;
   for(i=0;i<n;i++)
   {
       cin>>a[i];
   }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                k[l]=a[i];
               l++;
               count=count+1;
                
            }
            
           
        }
        
    }
    if(count==0){
    	cout<<"unique";
    }
   for(i=0;i<count;i++)
	{		
		for(j=i+1;j<count;j++)
		{
			if(k[i]>k[j])
			{
				temp  =k[i];
				k[i]=k[j];
				k[j]=temp;
			}
		}
	}
	for(i=0;i<count;i++)
		cout<<k[i]<<"\t";
		
 return 0;   
}
