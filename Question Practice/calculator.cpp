 #include<iostream>
using namespace std;
int main()
{
int a,b;
char op;
cout<<"Enter Operator: +,*,-,/,%"<<endl;
cin>>op;
cout<<"Enter the value of a : "<<endl;
cin>>a;
cout<<"Enter value of b : "<<endl;
cin>>b;
switch (op)
{
case '+':
cout<<a<<"+"<<b<<"="<<a+b;
break ;
case '*':
cout<<a<<"*"<<b<<"="<<a*b;
break;
case '-':
cout<<a<<"-"<<b<<"="<<a-b;
break;
case '/':
cout<<a<<"/"<<b<<"="<<a/b;
break;
case '%':
cout<<a<<"%"<<b<<"="<<a%b;
break;
default:
//operator is more than +,*,-,/,% or error showing message
cout<<"Enter Operator is wrong";
break;
}
return 0;
}