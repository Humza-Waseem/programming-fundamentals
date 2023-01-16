#include<iostream>
using namespace std;
main()
{

float english,maths,chemistry,ss,bio;

float total;
string name;
 cout<<"enter the name:";
 cin>>name;


 cout<<"enter the marks of maths:";
 cin>>maths;
 cout<<"enter the marks of english:";
 cin>>english;
 cout<<"enter the marks of chemistry:";
 cin>>chemistry;
 cout<<"enter the marks of social science:";
 cin>>ss;
 cout<<"enter the marks of bio:";
 cin>>bio;


total=maths + english + chemistry + ss + bio;

cout<<"total marks are :"<<total<<endl;

float percentage;
percentage = total / 500.0 * 100;
 cout<<"percentage :"<<percentage<<endl;

char grade;

if (percentage>=90 && percentage<100)
{cout<<"grade A+";}

if(percentage>=80 && percentage<90)
{cout<<"grade A";}

if(percentage>=70 && percentage<80)
{cout<<"grade B+";}

if(percentage>=60 && percentage<70)
{cout<<"grade B";}

if(percentage>=50 && percentage<60)
{cout<<" C ";}

if(percentage>=40 && percentage<50)
{cout<<" D ";}

if(percentage<40 ) 
{cout<<" F ";}
}





