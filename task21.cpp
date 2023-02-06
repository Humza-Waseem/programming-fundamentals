#include <iostream>
using namespace std;
main()
{
    int arr1[1];
    int size2;
    int arr2[size2];

    cout << "enter the number 1 of first array: ";
    cin >> arr1[0];
    cout << "enter the number 2 of first array:";
    cin >> arr1[1];
    cout << "enter the elements of second array:";
    cin >> size2;
    for (int i = 0; i < size2; i++)
    {
        cout << "enter the element:";
        cin >> arr2[i];
    }
    cout << arr1[0];
    for (int i = 0; i < size2; i++)
    {
        cout << arr2[i];
    }
    cout << arr1[1];
}