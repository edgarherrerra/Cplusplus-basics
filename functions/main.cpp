#include <iostream>

using namespace std;

int sum(int a, int b)
{
  return a + b;
}

int multiply(int a, int b = 2)
{
  return a * b;
}

int main()
{
  cout << multiply(200);
}