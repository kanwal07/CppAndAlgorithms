//include the library for cin and cout
#include <iostream>

//for using standard keywords and avoid using std:: prefix
using namespace std;

int mainLaSalleLoops()
{
	//declaring the variables
	short numStudents;
	float total = 0.0, grade, best = 0.0, worst = 100.0;

	//displaying the title
	cout << "\t\t\tCOLLEGE LASALLE 1\n";
	cout << "\t\t\t-----------------\n";
	
	//loop: ask once and repeat 'while' the number of students is not between 2 to 20
	do 
	{
		cout << "Enter the number of students(max 20): ";
		cin >> numStudents;
	
	} while(numStudents < 2 || numStudents > 20);


	//loop: 'for' every student
	for (short i = 1; i <= numStudents; i++)
	{
	
		//loop: taking grade input for each student 'while' the grade value is between 0 to 100
		do
		{
			cout << "Enter grade " << i << " : ";
			cin >> grade;
			
			
		} while (grade < 0 || grade >100);

		//calculating the best and the worst grade
		
		(grade >= best) ? best = grade : best = best;

		//if (grade >= best)
		//{
		//	best = grade;
		//}

		(grade <= worst) ? worst = grade : worst = worst;
		
		//if (grade <= worst)
		//{
		//	worst = grade;
		//}

		//Sum of grades
		total += grade;
	
	}
	
	//calculating the class average: dividing total score by number of students
	cout << "The class average is " << (total/numStudents) << endl;


	//displaying the best and the worst grade by comparing all the grades
	cout << "The best grade is "<< best << endl;

	cout << "The worst grade is "<< worst << endl;


	//for the output to stay on the screen after build (stop the output screen from closing) 
	system("pause");

	return 0;
}