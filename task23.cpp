#include <iostream>
using namespace std;
main()
{
    string arr;
    cout << "enter the string";
    cin >> arr;

    for (int i = 0; i < arr.length(); i++)
    {
        if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u')
        {
            continue;
        }
        cout << arr[i];
    }
}