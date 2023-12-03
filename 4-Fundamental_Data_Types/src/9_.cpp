#include "iostream"

using namespace std;

int main()
{
  bool isNewUser = false;
  cout << isNewUser << endl;
  // result:0  {coz boolean represent in C++ true=1, false=0 }
  // so we can use 0 or 1 {but the ideal is to use true or false}
  bool isNewUser2 = 0;
  cout << isNewUser2 << endl;
  // result:0

  // boolalpha sticky manipulate to show false or true on console
  cout << boolalpha << isNewUser << endl;

  // the opposite of boolalpha
  cout << noboolalpha << isNewUser << endl;
  // result:0
  return 0;
}
