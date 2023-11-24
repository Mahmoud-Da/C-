#include "iostream"

using namespace std;
int main()
{
  // read from console
  cout << "Enter a value: ";

  // one value
  int value;
  // cin read from console
  cin >> value;

  cout << value;

  // multi values
  cout << "Enter values for x and y: ";
  double x;
  double y;

  cin >> x;
  cin >> y; // we can simpfy {cin >> x >> y;}

  cout << x + y;
  return 0;
}