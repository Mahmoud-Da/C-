#include "iostream"
#include "cstdlib"
#include "ctime"

using namespace std;

int main()
{
  int number1 = rand();
  srand(1);                // number of randoms
  cout << number1 << endl; // result: 16807 but every time we called we have the same number

  // create random number every time we run the file
  long elapsedSeconds = time(0); // current Time in seconds {1700990421}
  srand(elapsedSeconds);
  /*
    now every time we run
    1- the programe the running time will change elapsedSeconds will be diffrent number
    2- srand(the number of rounds will change)
    3- rand() numbers changed coz srand(elapsedSeconds);
  */

  int number2 = rand();
  cout << number2 << endl; // the result changes every time we run the programe
  // 1247596107
  // 1247612914

  // to show only the first number
  int number3 = rand() % 10;
  cout << number3;
  // 2
  // 7
  // 5
  return 0;
}