#include<iostream>
int main()
{
char str[20];
int l,i,sum=0;
cin.getline(str, 20);
l=strlen(str);
for(i=0;i<l;i++)
{
  if(str[i]=='@'||str[i]=='*'||str[i]=='.'||str[i]=='#'||str[i]=='&'||str[i]=='^')
  {
    sum=sum+1;
  }
}
cout<<sum;
return 0;
}
