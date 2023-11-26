// Write a program for rolling dice.
// [rand() % (maxValue - minValue + 1)] + minValue

#include "iostream"
#include "cstdlib"
#include "ctime"

using namespace std;

int main()
{
  srand(time(0));
  const short maxValue = 6;
  const short minValue = 1;
  const short first_number = (rand() % (maxValue - minValue + 1)) + minValue;
  const short second_number = (rand() % (maxValue - minValue + 1)) + minValue;
  cout << first_number << ", " << second_number;
  return 0;
  // result: 2, 5      first time
  // result: 4, 1      sec time
}