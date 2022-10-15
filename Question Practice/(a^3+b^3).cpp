#include<iostream>
#include<math.h>
using namespace std;
int main ()
{
    int a,b;
    cout<<"Enter the value of a and b : "<<endl;
    cin>>a>>b;
    cout<<"a^3+b^3 ="<<(pow(a, 3)+pow(b, 3));
    return 0;
}