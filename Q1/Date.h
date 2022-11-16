#pragma once

#include <iostream>

using namespace std;

class Date
{
private:
	int day, month, year;

public:
	
	string displayDate;
	Date()
	{
		day = 1;
		month = 1;
		year = 1;
	}

	string displayDate(int day, int month, int year)
	{
		char d[2];
		char m[2];
		char y[4];	
		
		string dayStr = itoa(day, d, 10);
		string monthStr = itoa(month, m, 10);
		string yearStr = itoa(year, y, 10);
		string result = "You entered the date: " + dayStr + "/" + monthStr + "/" + yearStr + "/" + den2Str + "\br";
		return result;
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