#include <iostream>
using namespace std;
main()
{

string month;
int stay;
string room;

cout<<"ENTER THE ROOM:";
cin>>room;
cout<<"ENTER THE MONTH:";
cin>>month;
cout<<"ENTER THE NUMBER OF STAYS:";
cin>>stay;

float spn;
float apn;
float dis;
 


 if(month == "may" || month =="october" && room == "studio")
  {
   
  
    
     if(stay>7 &&stay<14)
    {
     spn = 50 * stay;
     dis= spn * 5/100;
     spn=spn-dis;
     cout<<"spn :"<<spn;
     }
     if(stay>14)
    {
     spn = 50 * stay;
     dis= spn * 30/100;
     spn=spn-dis;
     cout<<"spn :"<<spn; 
    }
     else
     {
      spn = 50 * stay;
      cout<<"spn :"<<spn;
     }
  } 
     if(month == "may" || month =="october" && room == "apartement")
  {
   
  
    
     if(stay>14)
    {
     apn = 65 * stay;
    dis = apn * 10/100;
    apn= apn - dis;
    cout<<"apn:"<<apn;
     }   
     else
     {
      apn = 50 * stay;
      cout<<"apn :"<<apn;
     }
  } 

  
   if(month == "june" || month == "september")
   {
    
    
   
    if(room == "apartement")
    { 
     apn = 68.70;
     if(stay>14)
     {
      apn= 68.70 * stay;
      dis = apn * 10/100;
      apn = apn - dis;
      cout<<"apn:"<<apn;
     }
     else
     { 
      apn = 68.70 * stay;
      cout<<"apn:"<<apn;
      }
    }
     if(room == "studio")
     {
       spn = 75.20;
     if(stay>14)
     {
      spn= 75.20 * stay;
      dis = spn * 10/100;
      spn = spn - dis;
      cout<<"spn:"<<spn;
     }
     else
     { 
      spn = 75.20 * stay;
      cout<<"spn:"<<spn;
      }
  }
}
      

   if(month == "july" || month == "august")
   { 
    spn = 76;
    apn = 77;
    
    if(room == "apartement")
    { 
 
     if(stay>14)
     {
      apn= 77 * stay;
      dis = apn * 10/100;
      apn = apn - dis;
      cout<<"apn:"<<apn;
     }
     else
     { 
      apn = 77 * stay;
      cout<<"apn:"<<apn;
      }
    }
     if(room == "studio")
     {
       spn = 76;
     if(stay>14)
     {
      spn= 76* stay;
      dis = spn * 10/100;
      spn = spn - dis;
      cout<<"spn:"<<spn;
     }
     else
     { 
      spn = 76 * stay;
      cout<<"spn:"<<spn;
      }
  }
}
 }

