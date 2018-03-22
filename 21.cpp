#include <iostream>
using namespace std;
int main() {  
int n,a,d,i,ans = 0;
    cout<<"Enter the number of items,starting value and difference"<<endl;
    cin>>n>>a>>d;
    for(i = 0;i < n;i++){
        ans += a;
        a += d;
    }
    cout<<ans;
    return 0; }
