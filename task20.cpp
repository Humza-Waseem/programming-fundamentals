#include <iostream>
using namespace std;
main()
{
    int n;
    int arr[n];
    cout << "Enter the number of resistors:";
    cin >> n;

    float sum = 0;

    for (int i = 0; i < n; i++)
    {
        cout << "enter the resistor:" << arr[i] << endl;
        cin >> arr[i];
        sum = sum + arr[i];
    }
    cout << "Total resistance in the circuit is:" << sum << "ohms";
}