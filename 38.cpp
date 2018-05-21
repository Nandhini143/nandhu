#include<stream>
int main()
{
  int a,b;
  gets(a,b);
  a^=b;
  b^=a;
  a^=b;
 cout<<a,b;
  return 0;
}
