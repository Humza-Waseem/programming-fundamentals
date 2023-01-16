#include <iostream>
using namespace std;

void time(int startingHours, int startingMinutes, int arrivalHours, int arrivalMinutes);

main()

{

    int startingHours, startingMinutes, arrivalHours, arrivalMinutes;

    cout << "Enter exam starting time (Hours): ";

    cin >> startingHours;

    cout << "Enter exam starting time (Minutes): ";

    cin >> startingMinutes;

    cout << "Enter arrival time (Hours): ";

    cin >> arrivalHours;

    cout << "Enter arrival time (Minutes): ";

    cin >> arrivalMinutes;

    time(startingHours, startingMinutes, arrivalHours, arrivalMinutes);
}

void time(int startingHours, int startingMinutes, int arrivalHours, int arrivalMinutes)

{
    int diff, tArrivalMinutes, tStartingMinutes, outputHours, outputMinutes;

    tArrivalMinutes = (arrivalHours * 60) + arrivalMinutes;

    tStartingMinutes = (startingHours * 60) + startingMinutes;

    if ((tArrivalMinutes - tStartingMinutes) > 0)

    {

        cout << "Late" << endl;
    }

    else if ((tStartingMinutes - tArrivalMinutes) >= 0 && (tStartingMinutes - tArrivalMinutes) <= 30)

    {

        cout << "On time" << endl;
    }

    else if ((tStartingMinutes - tArrivalMinutes) > 30)

    {

        cout << "Early" << endl;
    }

    if (((tStartingMinutes - tArrivalMinutes) > 1) && ((tStartingMinutes - tArrivalMinutes) < 60))

    {

        diff = tStartingMinutes - tArrivalMinutes;

        cout << diff << " minutes before the start." << endl;
    }

    if ((tStartingMinutes - tArrivalMinutes) >= 60)

    {
        diff = tStartingMinutes - tArrivalMinutes;

        outputHours = diff / 60;

        outputMinutes = diff % 60;

        cout << outputHours << ":" << outputMinutes << " hours before the start." << endl;
    }

    if (((tArrivalMinutes - tStartingMinutes) > 1) && ((tArrivalMinutes - tStartingMinutes) < 60))

    {

        diff = tArrivalMinutes - tStartingMinutes;

        cout << diff << " minutes after the start." << endl;
    }

    if ((tArrivalMinutes - tStartingMinutes) >= 60)

    {

        diff = tArrivalMinutes - tStartingMinutes;

        outputHours = diff / 60;

        outputMinutes = diff % 60;

        cout << outputHours << ":" << outputMinutes << " hours after the start." << endl;
    }
}