#include <iostream>
using namespace std;

int mainAge()
{
	//Declaring the variables
	short yearB, currYear = 2019, age;

	//Display Title
	cout << "                  AGE CALCULATOR " << endl;
	cout << "                  -------------- " << endl;

	//Read year of birth
	cout << "Enter your year of birth: ";
	cin >> yearB;
	age = currYear - yearB;
	
	cout << "Your age is " << age << " years" << endl;

	system("pause");
	return 0;
}