
#include <iostream>
#include <string>
using namespace std;

int mainName()
{
	//Declaring the variables
	string name;
	char gender;

	//Display Title
	cout << "\t\t\tVIDEOTRON INC. \n";
	cout << "\t\t\t-------------- \n\n";

	cout << "Enter your name: ";
	cin >> name;
	cout << "Enter your gender (M/F): ";
	cin >> gender;
	if (gender == 'f' || gender == 'F')
	{
		cout << "Miss " ;
	}
	else
	{
		cout << "Mr. ";
	}
	cout << name << ", WELCOME!\n";

	system("pause");
	return 0;
}