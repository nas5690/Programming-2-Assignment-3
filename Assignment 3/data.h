#pragma once
#include <iostream>
#include <string>
using namespace std;

const int MAX_MARKS = 50;

struct StudentInfo
{
	int roll_number;
	string name;
	int num_marks;
	float marks[MAX_MARKS];
};

StudentInfo get_data();

void show_data(StudentInfo student);