
#include <iostream>

using namespace std;

int main()
{
  while (true)
  {
    char answer;
    cout << "Do you want to continue?" << endl;
    cin >> answer;
    if (answer == 'y')
    {
      cout << "Today I Learned";
      break;
    }
  };

  do
  {
    char answer;
    cout << "Do you want to continue?" << endl;
    cin >> answer;
    if (answer == 'y')
    {
      cout << "Today I Learned";
      break;
    }
  } while (true);
}