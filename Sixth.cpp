#include<iostream>
using namespace std;
int m1(int);
int m2(int);
int m3(int);
int main()
{
    cout<<"Enter the number of steps to reach to the top using 1,2 or 3 steps: ";
    int n;
    cin>>n;
    cout<<"Varun's method: "<<m1(n)<<endl;
    cout<<"Recursion method(better): "<<m2(n)<<endl;
    cout<<"DP: "<<endl;
    m3(n);
    return 0;
}
int m1(int n)
{
    if(n==1)
    {
        return 1;
    }
    else if(n==2)
    {
        return 2;
    }
    else if(n==3)
    {
        return 4;
    }
    else{
        return m1(n-1)+m1(n-2)+m1(n-3);
    }
}
int m2(int n)
{
        if (n == 0)
            return 1;
        else if (n < 0)
            return 0;
 
        else
            return m2(n - 3) + m2(n - 2)
                   + m2(n - 1);
    
}
int m3(int n)
{
    return 0;
}