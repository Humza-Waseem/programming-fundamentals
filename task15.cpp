#include <iostream>
using namespace std;
main()
{
    int n;
    cout << "enter the number of elements:";
    cin >> n;
    int arr[n];
    int i;

    for (i = 0; i < n; i++)
    {
        cout << "enter the number:";
        cin >> arr[i];
    }

    for (int i = n - 1; i >= 0; i--)
    {

        cout << arr[i];
    }
}