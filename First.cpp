#include<iostream>
#include<string>
// using namespace std;
using std::cout;
using std::cin;
class MyClass
{
    public:
        int height;
        void display()
        {
            cout<<height;
        }
};
int main()
{
    MyClass m;
    int a;
    m.height=50;
    m.display();
    cin>>a;
    const std::string str="Hello";
    cout<<std::endl<<"Hello World"<<std::endl<<str<<std::endl;
    return 0;
}
/*

namespace s1
{
    void sort()
    {
        cout<<"Hello";
    }
}
namespace s2
{
    void sort()
    {
        cout<<"Hey";
    }
}


*/