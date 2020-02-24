#include <iostream>
#include <string>

using namespace std;

int main()
{
	string name;
	char gender;
	short val1, val2, val3;
	
	cout << "\t\t\tCOMPARATOR\n";
	cout << "\t\t\t----------\n";

	cout << "Select gender(M/F): ";
	cin >> gender;

	cout << "Enter first value: ";
	cin >> val1;
	
	cout << "Enter second value: ";
	cin >> val2;
	
	cout << "Enter third value: ";
	cin >> val3;

	cin.ignore();
	
	cout << "Enter name: ";	
	getline(cin, name);

	//if (gender == 'f' || gender == 'F')
	//{
	//	cout << "Miss ";
	//}
	//else
	//{
	//	cout << "Sir ";
	//}
	cout << ((gender == 'f' || gender == 'F') ? "Miss " : "Sir ");

	cout  << name << endl <<"The maximum is ";

	//if (val1 > val2)
	//{
	//	cout << val1 << endl ;
	//}
	//else
	//{
	//	cout << val2 << endl ;
	//}

	cout << ((val1 > val2 || val1==val2 && val1 > val3) ? val1 : val2);
	cout << endl;

	system("pause");
	return 0;
}