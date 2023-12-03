#include "iostream"
#include "iomanip"

using namespace std;
int main()
{
  cout << left << setw(15) << "Course" << setw(10)
       << "Student" << endl
       << left << setw(15) << "C++" << setw(10) << right << 100 << endl
       << left << setw(15) << "JavaScript" << setw(10) << right << 50 << endl;
  // result
  //   Course         Student
  // C++                   100
  // JavaScript             50
  return 0;
}
