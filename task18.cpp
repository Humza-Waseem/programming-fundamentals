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
    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "The largest number is: " << max << endl;
}