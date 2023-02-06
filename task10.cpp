#include <iostream>
using namespace std;

main()
{
  while (true)
  {
    string name;
    cout << "enter the country name:";
    cin >> name;

    int price, totalprice;
    float disc;
    cout << "enter the ticket price:";
    cin >> price;

    if (name == "pakistan")
    {
      disc = 5.0 / 100.0 * price;
      cout << "disc=" << disc << endl;

      totalprice = price - disc;
      cout << "total price is :" << totalprice << endl;
    }
    if (name == "ireland")
    {
      disc = 10.0 / 100.0 * price;
      cout << "disc=" << disc << endl;

      totalprice = price - disc;
      cout << "total price is :" << totalprice << endl;
    }
    if (name == "india")
    {
      disc = 20.0 / 100.0 * price;
      cout << "disc=" << disc << endl;

      totalprice = price - disc;
      cout << "total price is :" << totalprice << endl;
    }
    if (name == "england")
    {
      disc = 30.0 / 100.0 * price;
      cout << "disc=" << disc << endl;

      totalprice = price - disc;
      cout << "total price is :" << totalprice << endl;
    }
    if (name == "canada")
    {
      disc = 45.0 / 100.0 * price;
      cout << "disc=" << disc << endl;

      totalprice = price - disc;
      cout << "total price is :" << totalprice << endl;
    }
  }
}
