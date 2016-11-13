#include "data.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int option = 0;
	bool student_entered = false;
	StudentInfo student;

	while (option != 3)
	{
		//Show the menu
		cout << "\n\t\t\t STUDENT MAIN MENU" << endl;
		cout << "\n\t\t\t 01. ENTER INFORMATION" << endl;
		cout << "\n\t\t\t 02. SHOW INFORMATION" << endl;
		cout << "\n\t\t\t 03. EXIT" << endl;

		//Pick a choice
		cout << "\n\t\t\t Please Select Your Option (1-3): ";
		cin >> option;
		cout << endl;
		system("cls");

		if (option == 1)
		{
			student = get_data();
			student_entered = true;
		}

		else if (option == 2)
		{
			if (student_entered)
			{
				show_data(student);
			}
			else
			{
				cout << "Please enter the student data" << endl;
			}
		}

		else if (option == 3)
		{
			return 0;
		}

		else
		{
			cout << "Invalid choice!" << endl;
		}

		system("pause");
		system("cls");
	}

}