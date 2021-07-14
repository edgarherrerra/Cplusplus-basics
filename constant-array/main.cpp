#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  int age = 18;

  /* Constant */
  const char letter = 'A';

  /* dataType arrayName[arraySize]; */

  // declare and initialize an array
  int ages[] = {18, 24, 16};
  ages[1] = 26;

  cout << age << endl;
  cout << letter << endl;
  cout << ages[1];

  return 0;
}
