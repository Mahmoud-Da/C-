#include "iostream"

using namespace std;

int main()
{
  // Narrowing: when we add varible with larger type and vlue to smaller type varible
  int number = 100000000;
  short another_number = number;
  cout << another_number; // result: -7936
  // to prevent that we add {}
  // short another_number{number}
  return 0;
}