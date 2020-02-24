//Include the libraries
#include <iostream>
#include <string>

using namespace std;

int mainCompare()
{
	//Declaring the variables
	string name;
	char gender;
	float val1, val2, val3, max;

	//Display the title
	cout << "\t\t\tTHE COMPARATOR\n";
	cout << "\t\t\t--------------\n";


	cout << "Enter your name: ";
	cin >> name;
	cout << "Select your gender (M/F): ";
	cin >> gender;
	cout << "Enter first value: ";
	cin >> val1;
	cout << "Enter second value: ";
	cin >> val2;
	cout << "Enter the third value: ";
	cin >> val3;

	//Select and display the title
	if (gender == 'f' || gender == 'F')
	{
		cout << "Miss " << name << endl;
	}
	else if (gender == 'm' || gender == 'M')
	{
		cout << "Mr. " << name << endl;
	}
	else
	{
		cout << "Invalid title selected." << endl;
	}
	

	//Comparing the three values which are input from the user
	if (val1 > val2 || val1 == val2)
	{
		max = val1;
	}
	else
	{
		max = val2;
	}
	if (val3 > max || val3 == max)
	{
		max = val3;
	}
	
	cout << "The maximum value between " << val1 << "," << val2 << " and " << val3 << " is " << max << endl;


	system("pause");
	return 0;
}