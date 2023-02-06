#include <iostream>
using namespace std;
void printname();
void calculateAggregate1();
void calculateAggregate2();

main()
{
  string student1;
  string student2;

  printname();
  calculateAggregate1();

  cout << "enter student 2:" << endl;

  calculateAggregate2();

  cout << "enter student 3:" << endl;
}

void printname()
{
  cout << "********** University of Engineering & Technology **********" << endl
       << endl;
}

void calculateAggregate1()
{

  float student1Agg;

  float matricMarks, interMarks, ecatMarks;
  float matricPercent, ecatPercent, interPercent;
  string name;

  cout << "name:";
  cin >> name;
  cout << "matric marks:";
  cin >> matricMarks;
  cout << "inter marks:";
  cin >> interMarks;
  cout << "ecat marks:";
  cin >> ecatMarks;

  matricPercent = matricMarks / 1100.0 * 100 * 0.30;
  interPercent = interMarks / 510.0 * 100 * 0.30;
  ecatPercent = ecatMarks / 400.0 * 100 * 0.40;

  float total;
  total = matricPercent + interPercent + ecatPercent;
  cout << "aggregate: " << total << endl;

  student1Agg = total;
  cout << "student 1 aggregate is =" << total << endl;
}

void calculateAggregate2()
{

  float student2Agg;

  float matricMarks, interMarks, ecatMarks;
  float matricPercent, ecatPercent, interPercent;
  string name;

  cout << "name:";
  cin >> name;
  cout << "matric marks:";
  cin >> matricMarks;
  cout << "inter marks:";
  cin >> interMarks;
  cout << "ecat marks:";
  cin >> ecatMarks;

  matricPercent = matricMarks / 1100.0 * 100 * 0.30;
  interPercent = interMarks / 510.0 * 100 * 0.30;
  ecatPercent = ecatMarks / 400.0 * 100 * 0.40;

  float total;
  total = matricPercent + interPercent + ecatPercent;
  cout << "aggregate: " << total << endl;

  student2Agg = total;
  cout << "student 2 aggregate is:" << student2Agg;
}
