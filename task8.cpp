#include<iostream>
void isEqual(int x,int y);
void isNotEqual(int x,int y);
using namespace std;
main()
{

 isEqual(6,6);
 isNotEqual(6,6); 
}
void isEqual(int x,int y)
{
  if(x==y)
  {
    cout<<"true";
  }
}
void isNotEqual(int x,int y)
{
   if(x!=y)
   { 
     cout<<"false";
   }
}