#include "iostream"

using namespace std;
int main()
{
  int x = 0;

  double price = 99.99;
  // if we forget the f/F or l/L 1.3 will be saved as double when compile and cuz data lost
  float taxRate = 1.3f;
  // l confusing coz looks like 1 so it`s better to use L
  long fileSize = 1L;

  // when char using only single quotation
  char letter = 'a';
  bool isValid = false;

  // to make our varible type set according on the value
  auto name = 'a';
  /*
    if we set ronge value inside diffrent varible the compile will compile
    ex:
    int number = 1.2;
    cout << number; => result: 1

    to prevent that we can use {}
    int number = {1.2}; => result: redefinition of 'number'

    another useful for {}
    if we forget to add value the file will still compile
    int number {};
    cout << number; => result: 0 {if didn`t use it we will got the location in memory}
  */

  return 0;
}
