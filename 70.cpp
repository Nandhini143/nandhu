#include <stiostream>

int main(void) {
	int n;
	cin>>n;
	int p=1;
	while(p<n)
	{
		p<<=1;
	}
	cout<<p;
	return 0;
}
