#include<iostream>
#include<typeinfo>
using namespace std;
extern int g;
int main()
{
    int b=100;
    int &a=b; //Creates a new int variable with the name a which has the same address as b
    a=20;
    cout<<b;
    cout<<endl<<"The value of g is "<<g<<endl<<"The type of g is: "<<typeid(g).name();
    return 0;
}
int g=200;