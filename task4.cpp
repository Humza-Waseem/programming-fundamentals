#include <iostream>
using namespace std;
 
void add(int number1,int number2);
void multiply(int number1,int number2);
void divide(int number1,int number2);
void subtract(int number1,int number2);
 
main()  {
    
int number1,number2;
char operation;
cout<<"enter first num:";
cin>>number1;
cout<<"enter 2nd num:";
cin>>number2;
cout<<"enter operator";
cin>>operation;

add(number1,number2);
multiply(number1,number2);
divide(number1,number2);
subtract(number1,number2);


}
void add(int number1,int number2)
{
   int sum;
sum=number1+number2;
cout<<"sum:"<<sum<<endl;
}

void multiply(int number1,int number2)
{
int mul;
mul=number1*number2;
cout<<"multiplication is"<<mul<<endl;
}
void divide(int number1,int number2)
{
int div; 
div=number1/number2;
cout<<"division is :"<<div<<endl;
}
void subtract(int number1,int number2)
{
int sub ;
sub=number1-number2;
cout<<"sub is :"<<sub<<endl;
}


 