#include "Date.h"

Date::Date(int d, int m, int y)
{
	this->day = d;
	if (m < 1 || m > 12) {
		this->month = 1;
	} else {
		this->month = m;
	}
	this->year = y;
}

string Date::displayDate()
{
	string result = to_string(day) + "/" + to_string(month) + "/" + to_string(year);
	return result;
}

void Date::setDay(int d)
{
	this->day = d;
}

void Date::setMonth(int m)
{
	this->month = m;
}

void Date::setYear(int y)
{
	this->year = y;
}

int Date::getDay()
{
	return day;
}

int Date::getMonth()
{
	return month;
}

int Date::getYear()
{
	return year;
}
