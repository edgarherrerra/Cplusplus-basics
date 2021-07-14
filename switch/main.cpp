#include <iostream>

using namespace std;

int main()
{
  int option = 0;
  
  cout << "Enter an option: ";
  cin >> option;

  switch (option)
  {
  case 1:
    cout << "Option 1";
    break;
  case 2:
    cout << "Option 2";
    break;
  default:
    cout << "Default value";
    break;
  }
}