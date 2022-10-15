#include<iostream>
using namespace std;
int main()
{
   int a=50,b=70.34;
double pie=3.14;
cout<<"Total of (a+b)= "<<a+b<<endl;
cout<<"The sizeof (a+b) : "<<sizeof(a+b)<<endl;
cout<<"the value of pie = "<<pie<<endl;
cout<<"The sizeof pie : "<<sizeof pie<<endl;
cout<<"the value of b : "<<(int(b))<<endl;
cout<<"The value of b : "<<int (b)<<endl;
cout<<"the value of : "<<a+ (int)b<<endl;
cout<<"The sizeof of :"<<a+ int (b)<<endl;
    return 0;
}