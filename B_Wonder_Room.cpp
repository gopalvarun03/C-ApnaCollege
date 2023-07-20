#include<iostream>
using namespace std;
int main()
{
    long long int l,b,s;
    cin>>s>>l>>b;
    if(l>b)
    {
        while(l*b<6*s)
        {
            l++;
        }
    }
    else
    {
        while(l*b<6*s)
        {
            b++;
        }
    }
    cout<<l*b<<endl<<l<<" "<<b;
    return 0;
}