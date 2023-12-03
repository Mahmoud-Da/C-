#include "iostream"

using namespace std;

int main()
{
  string street;
  cout << "Street: ";
  getline(cin, street);

  string city;
  cout << "City: ";
  getline(cin, city);

  string state;
  cout << "State: ";
  getline(cin, state);

  string zipcode;
  cout << "Zipcode: ";
  getline(cin, zipcode);

  cout << street << endl
       << ", " << city << ", " << state << ", " << zipcode;
  return 0;
}