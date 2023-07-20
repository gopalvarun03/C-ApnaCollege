#include<iostream>
#include<algorithm>
using namespace std;
void printel(int a)
{
    cout<<a<<" ";
}
/*
int fn()
{

    return NULL;
}
*/
int main()
{
    int arr[]{1,2,3};
    cout<<arr<<endl;
    for(int x:arr)
    {
        x=x*2;
        cout<<x<<" ";
    }
    cout<<"\n";
    int i=0;
    for(int &x:arr){
        x=x*2;
        cout<<arr[i]<<endl;
        i++;
    }
    for_each(arr,arr+3,printel);
    int *arr2;
    arr2=new int[4];
    delete[] arr2;
    int *ptr=arr;
    cout<<endl<<ptr<<" "<<&arr[0]<<" "<<arr<<endl;
    int (*ptr2)[3]=&arr;
    cout<<ptr2<<" "<<*ptr2<<" "<<**ptr2<<endl;
    cout<<ptr2+1<<" "<<ptr+1<<" "<<*(*ptr2+2)<<" "<<&arr<<endl;
    if(NULL==0)
    {
        cout<<"NULL is equivalent to 0"<<endl;
    //    cout<<"NULL is equal to "<<NULL; This is giving an error
    }
    return 0;
}