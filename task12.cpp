#include<iostream>
using namespace std;
main()
{
float redroses;
float whiteroses;
float tulips;

 cout<<"Red Rose:";
 cin>>redroses;
 cout<<"white roses:";
 cin>>whiteroses;
 cout<<"tulips:";
 cin>>tulips;
 
float redroseprice=2.00;
float whiteroseprice=4.10;
float tulipsprice=2.50;

float totalred;
float totalwhite;
float totaltulips;
 
   totalred=redroses*redroseprice;
   
   
   totalwhite=whiteroses*whiteroseprice;
 
  
   totaltulips=tulips*tulipsprice;
   
 
float totalprice;
   totalprice= totalred +totalwhite +totaltulips;
   cout<<"original price"<<totalprice<<endl;

      if(totalprice>=200)
      {
       float disc;
       disc= 0.2*totalprice;
       float disc2;
       disc2=totalprice-disc;
       cout << "price after discount"<<disc2;
      }   
}
