// including the library for cin and cout
#include <iostream>
// including the library for datatype string
#include <string>

//for using standard keywords and avoid using std:: prefix
using namespace std;

int mainSalary() {

	//declaring the variables
	string name;
	char gender, married;
	short age, children;
	float grossIncome, deductions = 0.0;
	

	//displaying the title
	cout << "\t\t\tREVENUE QUEBEC\n";
	cout << "\t\t\t--------------\n";

	//read name
	cout << "Enter your name: ";
	getline(cin, name);

	//loop to read gender
	do {
		
		cout << "Select your gender(F/M): ";
		cin >> gender;
		cin.ignore();

	} while (!(gender == 'f'|| gender == 'm'|| gender == 'F'|| gender == 'M'));

	//loop to read age between 15 to 65
	do {

		cout << "Enter your age (15 to 65): ";
		cin >> age;

	} while (age < 15 || age >65);

	//loop to read marital status
	do {

		cout << "Are you married (Y/N): ";
		cin >> married;
	} while (!(married == 'y' || married == 'Y' || married == 'n' || married == 'N'));
	
	//loop to read positive gross income
	do {

		cout << "Enter your gross income $: ";
		cin >> grossIncome;
	} while (grossIncome < 0);

	//loop to read number of children
	do {
		
		cout << "How many children (max 10): ";
		cin >> children;
	} while (children < 0 || children >10);

	//display the title according to the gender
	cout << "Thank You.\n" << ((gender == 'f' || gender == 'F') ? "Miss " : "Sir ") << name << ", " << endl;
	
	cout << "Your total annual income is $" << grossIncome << endl;
	
	/*DEDUCTIONS
	1. Gender
		a. No gender deduction before 18 years of age
		b. Gender: Male -40%, Female -30%*/

	deductions = (age >= 18) ? ((gender == 'm' || gender == 'M') ? deductions - 40 : deductions - 30) : 0;
	
	//2. Marital status: married -10%, single -20%

	(married == 'y' || married == 'Y') ? deductions -= 10 : deductions -= 20;

	//3. Number of children : Each children +10%
	/*for (int i = 1; i <= children; i++)
	{
		deductions += 10;
	}*/
	
	deductions += children * 10;
	
	//% deductions
	deductions = (deductions *grossIncome) / 100;

	

	//Display final deduction in positive and total income 
	cout << "The total of your deductions is $"<< ((deductions < 0) ? deductions * -1 : deductions) << endl;
	
	cout << "Your annual net Salary is $" <<(grossIncome + deductions)<< endl ;
	
	system("pause");
	return 0;
}
