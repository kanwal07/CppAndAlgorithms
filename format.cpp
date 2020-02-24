//include the library for cin and cout
#include <iostream>
//include the library for string datatype
#include <string>
//include the library for layout keywords
#include <iomanip>

//for using standard keywords and avoid using std:: prefix
using namespace std;

int main()
{
	//Declaring the variables
	short students, best=-1, worst=101;
	float arrGrade[20];
	string arrName[20];
	
	//Displaying the title
	cout << "\t\t\tCOLLEGE LASALLE\n";
	cout << "\t\t\t---------------\n";

	//loop to read number of students limiting between 2 and 20
	do {
		cout << "Enter the number of students(max 20): ";
		cin >> students;
		cin.ignore();
	} while (students <2 || students >20);
	
	//loop to read name, grade and storing the result into respective arrays
	for (int i = 0; i <= students-1; i++)
	{
		cout << "Student "<< (i+1) <<endl;
		
		cout << "Name : ";
		getline(cin, arrName[i]);
		
		do {
		
			cout << "Grade : ";
			cin >> arrGrade[i];

		} while(arrGrade[i] < 0 || arrGrade[i] > 100);
		


		cin.ignore();
		
	}

	best = arrGrade[0];
	worst = arrGrade[0];
	//Displaying all students in the class with their grades and results
	cout << "\nThe students of the class are\n\n";
	
	cout << left << setw(30) << "Name" << setw(8) << "Grades" << setw(12) << "Result" << endl;

	for (int i = 0; i <= students-1; i++) {

		cout << left << setw(30) << arrName[i] << setw(8) << arrGrade[i] << setw(12) << ((arrGrade[i] > 59) ? "Pass" : "Fail") << endl;
		
		best = (best > arrGrade[i]) ? best : arrGrade[i];
		worst = (worst > arrGrade[i]) ? arrGrade[i] : worst;
	}

	cout << "The best students are: \n";
	for (int i = 0; i < students; i++)
	{
		if (arrGrade[i] == best)
		{
			cout << left << setw(30) << arrName[i] << setw(8) << arrGrade[i] << setw(12) << ((arrGrade[i] > 59) ? "Pass" : "Fail") << endl;
		}
	}
	
	cout << "The worst students are: \n";
	for (int i = 0; i < students; i++)
	{
		if (arrGrade[i] == worst)
		{
			cout << left << setw(30) << arrName[i] << setw(8) << arrGrade[i] << setw(12) << ((arrGrade[i] > 59) ? "Pass" : "Fail") << endl;
		}
	}
	
	/*
	for (int i = 0; i < best[20]; i++)
	{
		
		best[i] = (best[i] > arrGrade[i]) ? best[i] : arrGrade[i];
		cout << best[i] << endl;
		
	}
	cout << "The worst students are: \n";
	for (int i = 0; i < worst[20]; i++)
	{
		worst[i] = (worst[i] > arrGrade[i]) ? arrGrade[i] : worst[i];
		cout << worst[i] << endl;
	}*/
	system("pause");
	return 0;
}