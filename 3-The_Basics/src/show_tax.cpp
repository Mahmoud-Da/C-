#include "iostream"
// show in console
// Sales = $95000
// state tax = 4%
// county tax = 2%
using namespace std;
int main()
{
  double sales = 95000;
  double state_tax = sales * 0.4;
  double county_tax = sales * 0.2;

  cout << "Sales = $" << sales << endl
       << "State Tax = $" << state_tax << endl
       << "county = $" << county_tax << endl;
  return 0;
}
