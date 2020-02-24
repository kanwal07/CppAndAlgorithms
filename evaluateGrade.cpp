//include the library for cin and cout
#include <iostream>
//#include <string>

using namespace std;

int mainGrade()
{
	//declaring the variables
	char grade;

	//displaying the title
	cout << "\t\t\tTHE EVALUATOR\n";
	cout << "\t\t\t-------------\n";

	cout << "Enter your grade(A,B,C,D,E,F): ";
	cin >> grade;

	cout << "Your corresponding numeric grade range is ";

	switch (grade)
	{
		case 'a':
		case 'A':
			cout << "90 to 100.\n";
			break;
		case 'b':
		case 'B':
			cout << "80 to 89.\n";
			break;
		case 'c':
		case 'C':
			cout << "70 to 79.\n";
			break;
		case 'd':
		case 'D':
			cout << "60 to 69.\n";
			break;
		case 'e':
		case 'E':
			cout << "50 to 59.\n";
			break;
		case 'f':
		case 'F':
			cout << "0 to 50.\n";
			break;
		default:
			cout << "Please enter a valid grade.\n";
			break;
	}

	system("pause");
	return 0;
}