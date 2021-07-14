#include <iostream>

using namespace std;

int main()
{
	int age = 0;

	cout << "age: ";
	cin >> age;

	if (age < 18)
	{
		cout << "You're under 18.";
	}
	else
	{
		cout << "You're over 18.";
	}
}