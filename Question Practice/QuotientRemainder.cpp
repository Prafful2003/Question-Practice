#include<iostream>
using namespace std;
int main()
{
    int dividend,divisor, quotient, remainder;
    cout<<"Enter dividend"<<endl;
    cin>>dividend;
    cout<<"Enter divisor"<<endl;
    cin>>divisor;
    quotient=dividend/divisor;
    remainder=dividend%divisor;
    cout<<"quotient="<<quotient<<endl;
    cout<<"remainder ="<<remainder;
    return 0;
}