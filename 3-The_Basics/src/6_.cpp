#include "iostream"

using namespace std;

int main()
{
  int x = 10;

  std::cout << "x = ";
  std::cout << x; // result x = 10

  // simpfy our code
  std::cout << "x = " << x; // result x = 10

  x = 10;
  int y = 20;

  std::cout << "x = " << x << std::endl;
  std::cout << "y = " << y;
  // result
  // x = 10
  // y = 20

  // simpfy our code
  std::cout << "x = " << x << std::endl
            << "y = " << y;

  // result
  // x = 10
  // y = 20

  // we get ride of std by using {using namespace std}
  cout << "x = " << x << std::endl
       << "y = " << y;
  return 0;
}