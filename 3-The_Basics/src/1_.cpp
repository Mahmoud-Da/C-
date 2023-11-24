#include <iostream>

int main()
{
  // first way to define varible
  int file_size;
  file_size = 100;

  // second way to define and inizileze
  double sales = 9.9;
  std::cout << file_size;
  std::cout << sales;
  std::cout << "Hello World";

  // if we craete a varible and not initilaize it we will have garbage(data in memory not useful)
  int number;
  std::cout << number; // result : 1291911169 {location in memory} every time we run it we will have a diffrent value
  return 0;
}
