#include<iostream>
//#include<algorithm>
using namespace std;
int main()
{
    int n,x,a,b;
    cin>>n>>x>>a>>b;
    int cost;
    if(b>=a*x)
    {
        cost=a*n;
    }
    else{
        cost=min(n/x*b+n%x*a,(n/x+1)*b);
    }
    
    cout<<cost;
    return 0;
}