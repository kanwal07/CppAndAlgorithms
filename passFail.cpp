//including the library for cin and cout
#include <iostream>
//including the library for type string
#include <string>

using namespace std;

int mainLasalle()
{
	string name;
	char gender;
	float midTerm, finalTerm, proj1, proj2;
	float result;

	cout << "\t\t\tCOLLEGE LASALLE\n";
	cout << "\t\t\t---------------\n";

	cout << "Student name: ";
	//cin >> name;
	getline(cin, name);
	cout << "Student gender: ";
	cin >> gender;
	cout << "Student grade: \n\t-Mid term (20%) : ";
	cin >> midTerm;
	cout << "\t-Final Term (40%) : ";
	cin >> finalTerm;
	cout << "\t-Project 1 (15%) : ";
	cin >> proj1;
	cout << "\t-Project 2 (25%) : ";
	cin >> proj2;

	
	//Selecting the gender
	if (gender == 'f' || gender == 'F')
	{
		cout << "Miss ";
	}
	else if (gender == 'm' || gender == 'M')
	{
		cout << "Mr. ";
	}
	else
	{
		cout << "Invalid title selected." << endl;
	}

	cout << name << endl;
	
	result = ((midTerm * 0.20) + (finalTerm * 0.40) + (proj1 * 0.15) + (proj2 * 0.25)) ;

	if (result >= 60)
	{
		cout << "You PASS!\n You have ";
		
	}
	else
	{
		cout << "You FAIL!\n  You have ";
	}

	cout << result << " grade.\n";

	system("pause");
	return 0;
}