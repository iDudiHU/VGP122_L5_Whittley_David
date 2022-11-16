/* Create a class called Date that includes three pieces of information as data members—a month
(type int), a day (type int) and a year (type int). Your class should have a constructor with three
parameters that uses the parameters to initialize the three data members. For the purpose of this
exercise, assume that the values provided for the year and day are correct, but ensure that the
month value is in the range 1–12; if it isn’t, set the month to 1. Provide a set and a get function for
each data member. Provide a member function displayDate that displays the month, day and year
separated by forward slashes (/). Write a test program that demonstrates class Date’s capabilities. */

#include <iostream>
#include "Date.h"

using namespace std;


void main()
{
	int inDay = 1;
	int inMonth = 1;
	int inYear = 1;
	
	cout << "Enter the day: ";
	cin >> inDay;
	cout << "Enter the month: ";
	cin >> inMonth;
	cout << "Enter the year: ";
	cin >> inYear;

	Date inputedDate = Date(inDay, inMonth, inYear);

	cout << "You entered the date: " << inputedDate.displayDate() << endl;
	cout << "You entered the day: " << inputedDate.getDay() << endl;
	cout << "You entered the month: " << inputedDate.getMonth() << endl;
	cout << "You entered the year: " << inputedDate.getYear() << endl;
	cout << "You entered the date: " << inputedDate.displayDate() << endl;
	inputedDate.setDay(11);
	inputedDate.setMonth(11);
	inputedDate.setYear(1111);
	cout << "We reset the day to 11/11/1111: " << inputedDate.displayDate() << endl;
}

