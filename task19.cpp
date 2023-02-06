#include <iostream>
using namespace std;
main()
{
    int size;
    cout << "Enter the no of elements:";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {

        cout << "Enter the elements:";
        cin >> arr[i];
    }
    int min = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < arr[0])
            min = arr[i];
    }
    cout << "the smallest no is:" << min;
}