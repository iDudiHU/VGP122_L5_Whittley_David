#pragma once

#include <iostream>

using namespace std;

class Date
{
private:
	int day, month, year;

public:

	Date();
	~Date() {};

	void setDay(int);
	void setMonth(int);
	void setYear(int);
	int getDay();
	int getMonth();
	int getYear();
	void displayDate();

	Date()
	{
		day = 1;
		month = 1;
		year = 1;
	}

	void displayDate()
	{
		cout << day << "/" << month << "/" << year << endl;
	}

	void setDay(int d)
	{
		day = d;
	}

	void setMonth(int m)
	{
		if (m < 1 || m > 12)
			cout << "The Month you entered is not valid. Please enter a valid date";
		else
			month = m;
	}

	void setYear(int y)
	{
		year = y;
	}

	int getDay()
	{
		return day;
	}

	int getMonth()
	{
		return month;
	}

	int getYear()
	{
		return year;
	}
};