#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
    cout<<INT_MAX<<endl<<INT_MIN<<endl;
    unsigned char a='2';
    cout<<(int)a<<" "<<(int)('a');
    a=98;
    cout<<endl<<"The chracter value of integer 98 is: "<<a<<endl;
    wchar_t ch='a';
    wcout<<ch<<endl;      //wchar_t is used for unicode and has 2 bytes whereas char has only 1 byte
    bool xi=1; // bool variables store generally 1 for true and 0 for false
    bool yi=false;   //similar to enum bool{false,true};
    void *ptr;
    ptr=&a;
    cout<<*(char *)(ptr)<<endl;
    cout<<xi+yi;
    cout<<endl<<sizeof(ch)<<endl;
    // << Insertion operator
    // >> extraction operator
    char name[20];
    cin>>name;   //Name with Varun Vaishnavi will be taken in as only Varun
    cout<<name<<endl<<"The size of name is: "<<sizeof(name);
    // && || !
    //Bitwise operators ! ~ << >> ^ | perform on 8 bits(a byte) at a times
    int x=26,y=9;
    cout<<endl<<(x&y)<<endl<<(x|y)<<endl<<(x^y)<<endl<<~x;
    // x<<n x*2^n
    // x>>n x/2^n and x<<=n is equivalent to x=x<<n
    
    return 0;
}