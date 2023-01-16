#include <iostream>
using namespace std;
main(){
 char sc;
 int n;
 string time;

 cout<<"ENTER THE SERVICE CODE(r/p):";
 cin>>sc;
 
 if(sc=='p')
  {
  cout<<"enter period of time either ( day  or night ):";
  cin>>time;
   }


 cout<<"ENTER THE number of minutes used:";
 cin>>n;

 float rs,ps;
 rs=10.00;
 ps=25.00;
 float costpm;
 float bill;
 
   
  if (sc== 'p' && time=="day")
  {
   if(n<=75)
    {
      cout<<ps<<"$";
    }
    if(n>75)
     {  
      costpm= 0.10 * n;
   bill=costpm + 75 ;
   cout<<bill<<"$";
      }                          
  }
  if(sc == 'p' && time=="night")
    {
     if(n<=100)
      {
       cout<<ps<<"$";
       }
      if(n>100)
      {
       costpm= 0.05 * n;
       bill= costpm + 100 ;
       cout<<bill<<"$"; 
      }                          
   
     
     } 

 
  if( sc == 'r' && n<=50)
  {
   cout<<rs<<"$";
   }
  if(sc == 'r' && n>50)
  { 
   costpm= 0.20 * n;
   bill=  costpm + 50 ; 
    cout<<bill<<"$";}                          
   
 
}