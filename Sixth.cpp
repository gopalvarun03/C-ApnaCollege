#include<iostream>
using namespace std;
void prarr(int n,int arr[])
{
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}
void answer(int n,int arr[],int pr)
{
    if(n==1)
    {
        arr[pr]=1;
        prarr(pr+1,arr);
    }
    else if(n==2)
    {
        arr[pr]=2;
        prarr(pr+1,arr);
        arr[pr]=arr[pr+1]=1;
        prarr(pr+2,arr);
    }
    else{
        answer(1,arr,pr);
        answer(n-1,arr,pr+1);
        answer(2,arr,pr);
        answer(n-2,arr,pr+1);

    }
}
int main()
{
    cout<<"Enter the number of steps in stair case: ";
    int n;
    cin>>n;
    int arr[n];
    answer(n,arr,0);
    return 0;
}