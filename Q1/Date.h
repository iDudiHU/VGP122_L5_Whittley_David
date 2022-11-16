#pragma once

#include <iostream>
#include <string>

using namespace std;

class Date
{
private:
	int day, month, year;

public:
	Date(int, int, int);

	string displayDate();

	void setDay(int);

	void setMonth(int);

	void setYear(int);

	int getDay();

	int getMonth();

	int getYear();
};