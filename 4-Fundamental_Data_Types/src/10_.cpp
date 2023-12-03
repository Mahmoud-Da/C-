#include "iostream"

using namespace std;

int main()
{
  // + before  char varible to see the intger presentation of that varible
  char a = 'a';

  cout << +a << endl;
  // result: 97

  char b = 98;
  cout << b << endl;
  // result:b {not recomended coz its hard to read}

  string name = "Moody";
  cout << name << endl;

  string userName;
  cout << "Enter name: ";
  cin >> name;
  cout << "Hi " << name << endl;
  // Enter name: Moody Dodo
  // result: Hi Moody           {what after space will ignore}

  // to aviod ignoring the space
  string anotherName;
  cout << "Enter name: ";
  getline(cin, anotherName);
  cout << "Hi " << anotherName << endl;
  // Enter name: Moody Dodo
  // result: Hi Moody Dodo
  return 0;
}
