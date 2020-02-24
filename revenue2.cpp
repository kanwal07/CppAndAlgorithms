// including the library for cin and cout
#include <iostream>
// including the library for datatype string
#include <string>
//for using standard keywords and avoid using std:: prefix
using namespace std;

int mainFees() {

	//declaring the variables
	string name;
	char gender;
	short child ;
	float fees, total = 0.0;

	//displaying the title
	cout << "\t\t\tREVENUE QUEBEC\n";
	cout << "\t\t\t--------------\n";

	//read name
	cout << "Enter your name: ";
	getline(cin, name);

	//loop: ask the gender and repeat till the correct input is read
	
	do {
		cout << "Select gender(f/m): ";
		cin >> gender;
		cin.ignore();
		
		/*if (gender == 'm' || gender== 'M' || gender == 'f' || gender == 'F')
		{
			break;
		}*/
		
	} /*while ((gender != 'm' || gender != 'M' || gender != 'f' || gender != 'F'));*/
	while (!(gender == 'm' || gender == 'M' || gender == 'f' || gender == 'F'));
		
	
		//display the title according to the gender read
		cout << ((gender == 'f' || gender == 'F') ? "Miss " : "Sir ") << name << endl;

		//read the number of children
		cout << "How many children ?";
		cin >> child;

		//loop: keep asking the number till the correct input is read which is between 0 to 5
		while (child <= 0 || child >= 5)
		{
			cout << "Please, How many children (Max 5) ? ";
			cin >> child;
		}

		//loop: 'for' each child, read the fee
		for (int i = 1; i <= child; i++)
		{
			do {
				cout << "Fees for child " << i << " : ";
				cin >> fees;

			} while (fees < 0);
			
			//for calculating the sum of fees for every child
			total += fees;
		}

		//displaying the total fees for all children
		cout << "The total fees is " << total << endl;

	system("pause");
	return 0;
}