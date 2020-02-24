// including the library for cin and cout
#include <iostream>

//for using standard keywords and avoid using std:: prefix
using namespace std;

int mainMenu() {

	/*char answer;
	do{
		cout << "\tMAIN MENU\n";
		cout << "\t---------\n\n";

		cout << "Are you finished ? (Y/N) :";
		cin >> answer;



	} while (!(answer=='y' || answer=='Y'));

	cout << "Thank you! Bye.\n";*/


	//declaring the variables
	short choice;

	do {
		cout << "\tMAIN MENU\n";
		cout << "\t---------\n\n";
		cout << "1- Choice 1\n";
		cout << "2- Choice 2\n";
		cout << "3- Choice 3\n";

		cout << "Enter your choice (1-3): ";
		cin >> choice;

	} while (choice < 1 || choice >3);
		
	cout << "You chose "<< choice <<", Good choice!\n";

	system("pause");
	return 0;
	
}