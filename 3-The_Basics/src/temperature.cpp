// Write a program to convert a temperature from fahrenheit
// to celsius.

#include "iostream"

using namespace std;
int main()
{
  cout << "Fahrenheit: ";
  int fahrenheit;
  cin >> fahrenheit;
  double celesius = (fahrenheit - 32) / 1.8;
  cout << celesius;
  return 0;
  // result
  // Fahrenheit: 87
  // 30.5556
}
