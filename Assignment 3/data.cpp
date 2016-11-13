#include "data.h"
#include <iostream>
#include <string>

using namespace std;

StudentInfo get_data()
{
	StudentInfo student;

	cout << "Enter the roll number of student: ";
	cin >> student.roll_number;
	cout << endl;

	cout << "Enter the name of student: ";
	cin.ignore(); 
	getline(cin, student.name);
	cout << endl;

	cout << "Enter the number of marks: ";
	cin >> student.num_marks;
	cout << endl;

	for (int i = 0; i < student.num_marks; i++)
	{
		cout << "The marks in class " << i + 1 << " out of 100: ";
		cin >> student.marks[i];
		cout << endl;
	}
	return student;
}

void show_data(StudentInfo student)
{
	cout << "Roll number of student: " << student.roll_number << endl;
	cout << endl;
	cout << "Name of student: " << student.name << endl;
	cout << endl;
	for (int i = 0; i < student.num_marks; i++)
	{
		cout << "The marks in class " << i + 1 << " out of 100: " << student.marks[i] << endl;
		cout << endl;
	}
}