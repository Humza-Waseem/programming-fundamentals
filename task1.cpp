#include <iostream>
using namespace std;
main()
{
 string temp,humidity;
 cout<<"enter temp:";
 cin>>temp;
 cout<<"enter humidity:";
 cin>>humidity;

if(temp=="warm" )
{
  if(humidity=="dry")
  cout<<"play tennis";
  if(humidity=="humid")
  cout<<"swim";
}
 
if(temp=="cold")
{
  if(humidity=="dry")
  cout<<"play basketball";
  if(humidity=="humid")
  cout<<"watch TV";
}

}