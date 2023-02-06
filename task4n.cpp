#include <iostream>
using namespace std;
main()
{
    string name;

    cout << "enter the name:";
    cin >> name;
    if (name == "irzam")
    {
        cout << name;
    }
    else
    {
        cout << "enter name:";
        cin >> name;
    }
}