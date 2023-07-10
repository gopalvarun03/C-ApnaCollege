#include<iostream>
#include<typeinfo>
using namespace std;
extern int g;
int y=300;
int main()
{
    int b=100;
    int &a=b; //Creates a new int variable with the name a which has the same address as b
    a=20;
    cout<<b;
    cout<<endl<<"The value of g is "<<g<<endl<<"The type of g is: "<<typeid(g).name()<<endl;
    float x=100.23f;
    int y= static_cast<int>(x);
    {
        int y=200;
        cout<<y<<" "<<::y<<endl;
    }
    cerr<<"Hello This is an error message"; //un buffered standard stream storage
    clog<<endl<<"This is enterd using a log stream"<<endl; //Buffered standard stream storage
    clog.flush();   
    string s,t;
    cin>>s;
    cout<<"Hello world"<<endl;
    string k;
    cin>>k;
    cout<<"The string s and k are: "<<s<<" "<<k<<" "<<endl; //This example of reading input as buffer is beautiful
    string path="C:\\";
    cout<<path+"new";

    return 0;
}
int g=200;
/*
#include<iostream>
#define Area(l,b)(l*b) // M-2 #define Area(l,b) l*b
using namespace std;
int main()
{
    int l=10,b=5;
    int c=Area(3,4); //Output is 12
    cout<<c<<endl;
    auto test=1.2;
    auto test1=1.2f;
    auto j="Hello";
    cout<<sizeof(test)<<endl<<sizeof(test1)<<endl<<sizeof(j);
    
    return 0;
}
*/
