#include <iostream>
using namespace std;
main()
{
    int n;
    cout << "enter the number of elements:";
    cin >> n;

    int arr[n];
    int b;

    for (int i = 0; i < n; i++)
    {
        cout << "enter the numbers:";
        cin >> arr[i];
    }
    cout << "enter another number:";
    cin >> b;

    // cout << "The numbers stored in the array are: ";
    for (int i = 0; i < n; i++)
    {
        // cout << arr[i];
        if (b == arr[i])
            cout << "already entered";
        // else
        // {
        //     continue;
        // }
    }
}