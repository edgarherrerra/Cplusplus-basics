#include <iostream>

using namespace std;

int main()
{
  int list[] = {100, 200, 300};
  int limite = sizeof(list) / sizeof(list[0]);
  
  for (int i = 0; i < limite; i += 1)
  {
    cout << list[i] << endl;
    if (list[i] == 200)
    {
      break;
    }
  }
}