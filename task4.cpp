#include <iostream>
using namespace std;
main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "enter number:";
        cin >> arr[i];
    }
    cout << "first element of an array:" << arr[0] << endl;
    cout << "last element of an array is:" << arr[4];
}