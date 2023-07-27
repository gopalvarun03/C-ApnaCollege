#include <iostream>
using namespace std;

class Point{
    private:
    int x,y;
    public:
    Point()
    {
        x=0;y=0;
        cout<<"x and y initialised at (0,0)"<<endl;
    }
    Point(int a,int b)
    {
        x=a;y=b;
        cout<<"x and y are initialised at "<<a<<" and "<<b<<endl;
    }
};
int main()
{
    cout<<"Start: "<<endl;
    Point *d;
    Point c;
    auto e=Point(2,3);
    d=&e;
    cout<<d<<endl;
    Point a;
    cout<<&a<<endl;
    a=Point(10,20);
    auto y=a;
    cout<<&a<<" "<<&y<<endl;
    Point b={20,20};
    return 0;
}
/*
#include<iostream>
using namespace std;

class Test{
    public:
        Test(){cout << "Default\n"; }
        Test(int x){cout << "Parameterised\n"; }
};

class Main{
    Test t;
    public:
        Main(){
            t=Test(10);
        }
};

int main()
{
    Main m;
    return 0;
}

Output:
Default
Parameterised

*/
/*
#include<iostream>
using namespace std;

class Test{
    public:
        Test(){cout << "Default\n"; }
        Test(int x){cout << "Parameterised\n"; }
};

class Main{
    Test t;
    public:
        Main(): t(10){
            
        }
};

int main()
{
    Main m;
    return 0;
}

Output:
Parameterised
*/