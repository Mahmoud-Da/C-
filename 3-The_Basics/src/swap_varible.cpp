#include <iostream>

// wirte a programe that swap the value between a and b
using namespace std;
int main()
{ 
  int a = 1;
  int b = 2;
  int temp = a; // to save a in memory
  a = b;
  b = temp;

  cout << a;
  return 0;
}
