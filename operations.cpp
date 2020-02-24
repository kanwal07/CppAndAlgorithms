#include <iostream>
#include <string>
using namespace std;

int mainOperation()
{
	//Declaring the variables
	float answer;
	char operation;
	int val1, val2;

	//Display Title
	cout << "\t\t\tVIDEOTRON INC. \n";
	cout << "\t\t\t-------------- \n\n";
	
	cout << "Enter first value: ";
	cin >> val1;
	cout << "Enter second value: ";
	cin >> val2;

	cout << "Enter the operation (+,-,*,/,%,\\): ";
	cin >> operation;
			
	if (operation == '+')
	{
		answer = val1 + val2;
		cout << "Addition\n" << val1 << " and " << val2 << "is " << answer << endl;
	}
	else if (operation == '-')
	{
		answer = val1 - val2;
		cout << "Subtraction\n" << val1 << " and " << val2 << "is " << answer << endl;
	}
	else if (operation == '*')
	{
		answer = val1 * val2;
		cout << "Multiplication\n" << val1 << " and " << val2 << "is " << answer << endl;
	}
	else if (operation == '/')
	{
		answer = val1 / val2;
		cout << "Division\n" << val1 << " and " << val2 << "is " << answer << endl;
	}
	else if (operation == '\\')
	{
		//answer = (val1+0.0) \ val2;
		answer = (float)val1 / val2;
		cout << "Floating division\n" << val1 << " and " << val2 << "is " << answer << endl;
	}
	else if (operation == '%')
	{
		answer = val1 % val2;
		cout << "Modulo\n" << val1 << " and " << val2 << "is " << answer << endl;
	}
	else
	{
		cout << "INVALID";
	}
	
	system("pause");
	return 0;
}


