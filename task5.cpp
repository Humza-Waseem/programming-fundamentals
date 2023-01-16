#include <iostream>
using namespace std;
main()
{
string fruit,day;

float b=2.50,a=1.20,o=0.85,gf=1.45,k=2.70,p=5.50,g=3.85;
float bw=2.70,aw=1.25,ow=0.90,gfw=1.60,kw=3.00,pw=5.60,gw=4.20;

cout<<"ENTER THE FRUIT:";
cin>>fruit;
 
cout<<"ENTER THE DAY OF WEEk:";
cin>>day;

float price;
float n;
cout<<"ENTER QUANTITY:";
cin>>n;

if(day=="sunday" || day == "saturday")
{
 if(fruit =="banana")
  {
    price=n*bw;
    cout<<price;
   }
  if(fruit =="apple")
   {
    price=n*aw;
    cout<<price;
   }
  if(fruit == "orange")
   {
     price=n*ow;
     cout<<price;
    }
   if(fruit == "grapefruit")
   {
     price=n*gfw;
     cout<<price;
    }
     if(fruit == "kiwi")
   {
     price=n*kw;
     cout<<price;
    }
   if(fruit == "pineapple")
   {
     price=n*pw;
     cout<<price;
    }
   if(fruit == "grapes")
   {
     price=n*gw;
     cout<<price;
    }
}
   
  if(day!="sunday" && day!="saturday")
  {
    if(fruit == "banana")
   {
     price=n*b;
     cout<<price;
    }

   if(fruit == "apple")
   {
     price=n*a;
     cout<<price;
    }
   if(fruit == "orange")
   {
     price=n*o;
     cout<<price;
    }
    if(fruit == "grapefruit")
   {
     price=n*gf;
     cout<<price;
    }
    if(fruit == "kiwi")
   {
     price=n*k;
     cout<<price;
    }
    if(fruit == "pineapple")
   {
     price=n*p;
     cout<<price;
    }
    if(fruit == "grapes")
   {
     price=n*g;
     cout<<price;
    }
 }

}