#include <iostream>

using namespace std;

void findPosition(int h, int xCoordinate, int yCoordinate);

main()
{

  int h, xCoordinate, yCoordinate;

  cout << "Enter the  height: ";

  cin >> h;

  cout << "Enter the x-cordinate: ";

  cin >> xCoordinate;

  cout << "Enter the y-cordinate: ";

  cin >> yCoordinate;

  findPosition(h, xCoordinate, yCoordinate);
}

void findPosition(int h, int xCoordinate, int yCoordinate)

{

  int base = h * 3;

  int height = h * 4;

  if ((xCoordinate > 0 && xCoordinate < base) && (yCoordinate > 0 && yCoordinate < h))

  {

    cout << "inside ";
  }

  else if ((xCoordinate > h && xCoordinate < h * 2) && (yCoordinate > 0 && yCoordinate < height))

  {

    cout << "inside ";
  }

  else
  {
    cout << "outside";
  }

  if ((xCoordinate == 0 || xCoordinate == base) && (yCoordinate >= 0 && yCoordinate <= h))

  {

    cout << "border ";
  }

  else if ((yCoordinate == 0) && (xCoordinate >= 0 && xCoordinate <= base))

  {

    cout << "border ";
  }

  else if ((yCoordinate == h) && ((xCoordinate >= 0 && xCoordinate <= h) || (xCoordinate >= h * 2 && xCoordinate <= base)))

  {

    cout << "border ";
  }

  else if ((xCoordinate == h || xCoordinate == h * 2) && (yCoordinate >= h || yCoordinate <= h * 2))

  {

    cout << "border ";
  }

  else if ((yCoordinate == height) && (xCoordinate >= h && xCoordinate <= h * 2))

  {

    cout << "border ";
  }
}