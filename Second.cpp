#include<iostream>
#include<iomanip> //To use set precision
#include<limits> //To find maximum and minimum
int main()
{
    int a=4;
    float b=9.2312343449284048f; //precision of float is upto 7 significant digits
    long int c=4;
    long long int d=8;
//    long long long int de=16;doesn't exist
    short int e=4;
    double n=9.2312343449284048; //8 bits 15 digits precision
    long double m=39.394884848475l; //12 bits 18 digits precision
    std::cout<<"Size of int and long int and float is "<<sizeof(a)<<std::endl<<"Size of long long int is "<<sizeof(c)<<std::endl;
    std::cout<<"Size of short int is "<<sizeof(e)<<std::endl;
    std::cout<<"Floating point defaultly prints 6 significant digits same for all ex:double "<<b<<" "<<m<<" "<<n<<std::endl;
    std::cout<<"To set precision: "<<std::setprecision(15)<<std::endl;
     std::cout<<"After setting precision: "<<b<<" "<<m<<" "<<n<<std::endl;
     std::cout<<"The current precision is : "<<std::cout.precision()<<std::endl;
     std::cout<<"The numerical limits are : "<<std::numeric_limits<float>::digits10;

    return 0;
}