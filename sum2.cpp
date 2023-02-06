#include<iostream>
using namespace std;
void add(int a,int b);
void sub(int a,int b);
void mul(int a,int b);
void divide(int a,int b);
main()
{
    int a,b;
    cout<<"enter first num:";
    cin>>a;
    cout<<"enter second num:";
    cin>>b;
    char operation;
    cout <<"enter the opertion";
    cin>>operation;
  if(operation=='+')
  { 
   add(a,b);
  }
  if(operation=='-')
  {
   sub(a,b);
   }
  if (operation=='*')
  {
   mul(a,b);
  }
  if (operation=='/')
  {
   divide(a,b);
  }
}

void add(int a,int b)
{
   int sum;
   sum=a+b;
   cout<<"sum="<<sum;
}

void sub(int a,int b)
{
  int sub;
  sub=a-b;
  cout<<"subtraction="<<sub;
}

void mul(int a,int b)
{ 
  int mul;
  mul=a*b;
  cout<<"product is="<<mul;
}
 void divide(int a,int b)
{ 
  int divide;
  divide=a/b;
  cout<<"division is="<<divide;
}