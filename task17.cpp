#include <iostream>
using namespace std;
main()
{
    int size, n;
    int sc_product;
    cout << "Enter the number of elements:";
    cin >> size;
    cout << "Enter ANOTHER number which you want to multiply with :";
    cin >> n;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "enter the elements:";
        cin >> arr[i];
        sc_product = n * arr[i];
        cout << n << "*" << arr[i] << "=" << sc_product << endl;
    }
}