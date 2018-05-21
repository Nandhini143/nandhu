#include<iostream>
using namespace std;
int main()
{
int count=0,i;
char str[1000];
cout<<"Enter the line";
cin.getline(str,1000);
for(i=0;str[i]!='/0';i++)
{
if(str[i]=='')
{
count=count++;
}
}
cout<<count;
return 0;
}
