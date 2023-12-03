#include "iostream"
#include "iomanip"

using namespace std;

int main()
{
  cout << "Spring"
       << "Nice" << endl
       << "Summer"
       << "Hot" << endl;
  // result:SpringNice
  //        SummerHot

  // add 10 char before the Spring
  cout << setw(10) << "Spring" << setw(10)
       << "Nice" << endl
       << "Summer"
       << "Hot" << endl;
  // result:    Spring      Nice
  //       SummerHot

  // add 10 char to the left the Spring
  // left is a sticky manipulate: still affect until we changed
  cout << left << setw(10) << "Spring"
       << setw(10)
       << "Nice" << endl
       << "Summer"
       << "Hot" << endl;
  // result:Spring    Nice
  //        SummerHot

  // columns and rows
  cout << left << setw(10) << "Spring"
       << setw(10)
       << "Nice" << endl
       << setw(10) << "Summer" << setw(10)
       << "Hot" << endl;
  // result:Spring    Nice
  //        Summer    Hot

  // formatting code
  // every setwith to left
  cout << left;
  cout << setw(10) << "Spring"
       << setw(10)
       << "Nice" << endl
       << setw(10) << "Summer" << setw(10)
       << "Hot" << endl;
  // result:Spring    Nice
  //        Summer    Hot

  // formatting Float
  cout << 12.34567 << endl;
  // result:12.3457 only 4 digit

  // fixed is a sticky manipulate
  // fixed show to 7 digit by defualt {when setting extra digits we will have 0 }
  cout << fixed << 12.34567 << endl;
  // result:12.345670

  // set the digits
  cout << fixed << setprecision(2) << 12.34567 << endl;
  // result:12.35
  return 0;
}
