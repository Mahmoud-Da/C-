#include "iostream"

int main()
{
  int x = 10;
  int y = 3;

  int z = x + y;
  z = x - y;
  z = x * y;
  z = x / y; // result 3 {if we want to get 3.33333 as float number we shoud set z to double and y or x eaither to double}
  z = x % y; // result: 1 remainder

  // we can use
  x++;    // x + 1
  x--;    // x - 1
  x += 3; // x + 3

  x = 10;
  int m = x++; // x = 11, m = 10 { x++ : x will be stored first then the increament will be applied }
  int n = ++x; // x = 11, n = 11 { ++x : increament first then the result will store in n }
  std::cout << z;
  return 0;
}
