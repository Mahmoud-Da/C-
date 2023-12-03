#include "iostream"
using namespace std;
int main()
{
  // sizeof to check the byte of varible
  cout << sizeof(int) << endl;
  // result: 4

  // numeric_limits is generic class
  cout << numeric_limits<int>::min() << endl
       << numeric_limits<int>::max() << endl;
  // result: -2147483648
  //         2147483647

  int number = numeric_limits<int>::max();
  number++;
  cout << number << endl;
  // result:-2147483648 {called overflow }
  // overflow integer: overflow occurs when an arithmetic operation attempts to create
  // a numeric value that is outside of the range that can be
  // represented with a given number of digits – either higher than the maximum
  // or lower than the minimum representable value.
  // other word:
  // when we want to store a value more than type range(ex: int) so it's wrapped to the type of minnumem {-}

  // underflow is the opposite
  int another_number = numeric_limits<int>::min();
  another_number--;
  cout << another_number << endl;
  // result:2147483647 {called underflow }
  return 0;
}
