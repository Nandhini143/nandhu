#include<iostream>
using namespace std;
int main()
{
int a[100],i,n;

cin>>n;
for(i=0;i<n;i++)
   cin>>a[i];
for(i=0;i<n;i++)

{
    if(a[i]==i)
    {
        cout<<i;
        
    }
   else{
      cout<<"-1";

}
return 0;
}
