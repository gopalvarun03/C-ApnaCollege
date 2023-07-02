#include<iostream>
using namespace std;
//Find sum of n natural numbers 
int findSum(int n)
{
if (n % 2 == 0)
		
	// Here multiplying by 1LL help to
	// perform calculations in long long,
	// so that answer should not be overflowed
	return (n / 2) * 1LL * (n + 1);

// If n is odd, (n+1) must be even
else
	
	// Here multiplying by 1LL help to
	// perform calculations in long long,
	// so that answer should not be overflowed
	return ((n + 1) / 2) * 1LL * n;
}


int main()
{
    //x>>y is right shift and does floor(x/2^y)
    //x<<y is left shift and does x*2^y
    int arr[]={14,14,15,16,16,16,17,16,17};
    int res=0;
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
    {
        res=res^arr[i];
    }
    cout<<res<<endl;
    //Day before n days
    cout<<"Enter the present day: ";
    int n,d;
    cin>>d;
    cout<<"Enter the no of days: ";
    cin>>n;
    n=n%7;
 //   cout<< ((d-n) >= 0 ) ? (d-n) :(7+(d-n)); correct this line once
    if(d-n>=0)
    {
        cout<<(d-n);
    }
    else{
        cout<<(7+d-n);
    }

    return 0;
}