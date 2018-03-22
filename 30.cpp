#include<iostream>
using namespace std;
int main(){
int hr1,min1,hr2,min2,hr,min;
cout<<"enter the first time and hour";
cin>>hr1>>min1;
cout<<"enter the second time and hour";
cin>>hr2>>min2;
if(hr1>hr2)
{
            hr=hr1-hr2;
}  
else
{
hr=hr2-hr1;
}
if(min1>min2)
{
            min=min1-min2;
}
else
{
min=min2-min1;
}
cout<<hr<<"\t"<<min;
return 0; }
