#include <iostream>
using namespace std;
main()
{
  int holidays;
  cout << "enter the number of holidays";
  cin >> holidays;
  int workingdays = 365 - holidays;

  int timeforgames = (workingdays * 63 + holidays * 127);

  int diff = 30000 - timeforgames;
  diff = diff / 60;
  cout << "hour for play =" << diff;
}
