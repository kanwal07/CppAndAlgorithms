// including the library for cin and cout
#include <iostream>

//for using standard keywords and avoid using std:: prefix
using namespace std;

int mainArrays() {

	//Declare the variable
	short students;
	float arrGrade[20], best=0.0, worst = 100.0;

	//Display the title
	cout << "\t\t\tCOLLEGE LASALLE\n";
	cout << "\t\t\t---------------\n";

	// loop to read the number of students and limit them between 0 to 20
	do {
		cout << "Enter the number of students(max 20): ";
		cin >> students;
	} while (students < 0 || students > 20);

	// loop to enter grades for all students

	for (int i = 0; i <= students-1; i++)
	{
		cout << "Enter the grade " << (i+1) << " :";
		cin >> arrGrade[i];

	}

	cout << "The class grades are\n";
	
	//loop to print all the grades in a single line

	for (int i = 0; i <= students-1; i++)
	{
		cout << arrGrade[i] << " ";

		best = (best > arrGrade[i]) ? best : arrGrade[i];
		worst = (worst > arrGrade[i]) ? arrGrade[i] : worst;
	}

	cout << "\nThe best grade is " << best << endl;
	cout << "The worst grade is " << worst << endl;
	

	system("pause");
	return 0;
}