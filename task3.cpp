#include<iostream>
using namespace std;
main()
{
int date;
string month;
cout<<"enter the date of birth:";
cin>>date;
cout<<"enter the month of your birth:";
cin>>month;

if(month=="march")
 {
  if(date>=21)
  { cout<<"Aries";}
  if(date<=20)
  {cout<<"Pisces";}
  }
if(month == "april")
 {
  if(date<=19)
  {cout<<"Aries"; }
  if(date>=20)
  {cout<<"taurus";}
  }
if(month == "may")
 {
  if(date<=20)
  {cout<<"Taurus";}
  if(date>=21)
 { cout<<"Gemini";}
  }
if(month== "june")
 {
  if(date<=20)
  {cout<<"Gemini";}
  if(date>=21)
  {cout<<"Cancer";}
 }
if(month == "july")
{
  if(date<=22)
  {cout<<"Cancer";}
  if(date>=23)
  {cout<<"Leo";}
}

if(month == "august")
{
  if(date<=22)
 { cout<<"Leo";}
  if(date>=23)
  {cout<<"Virgo";}
}

if(month == "september")
{
  if(date<=22)
 { cout<<"Virgo";}
  if(date>=23)
  {cout<<"Libra";}
}




if(month == "october")
{
  if(date<=22)
  {cout<<"Libra";}
  if(date>=23)
  {cout<<"Scorpio";}
}

if(month == "november")
{
  if(date<=21)
 { cout<<"Scorpio";}
  if(date>=22)
  {cout<<"Saggittarius";}
}

if(month == "december")
{
  if(date<=21)
  {cout<<"Saggittarius";}
  if(date>=22)
  {cout<<"Capricorn";}
}

if(month == "january")
{
  if(date<=19)
  {cout<<"capricorn";}
  if(date>=20)
  {cout<<"Aquarius";}
}

if(month == "february")
{
  if(date<=18)
 {
  cout<<"Aquarius";
}
  if(date>=19)
 { cout<<"Pisces";}
}
  }