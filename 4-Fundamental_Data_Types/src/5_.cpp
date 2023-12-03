#include "iostream"

using namespace std;

int main()
{
  int number = 1000000;
  short another = number;
  cout << another << endl; // result:16960 coz narrowing conversion

  // to prevent code from compiling is better to use {} when assign varible
  int number2 = 1000000;
  short another2{number2};
  cout << another2; // result:non-constant-expression cannot be narrowed from type 'int' to 'short' in initializer list [-Wc++11-narrowing]
  return 0;
}
