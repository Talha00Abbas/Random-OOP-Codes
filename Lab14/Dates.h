#pragma once
#include <iostream>
using namespace std;


class Date
{
public:
	Date() 
	{
		day = 0;
		month = 0;
		year = 0;
	}
	Date(int d,	int m, int y) 
	{
		day = d;
		month = m;
		year = y;
	}

	void setDay(int d) { day = d; }
	void setMonth(int m) { month = m; }
	void setYear(int y) { year = y; }

	int getDay() { return day; }
	int getMonth() { return month; }
	int getYear() { return year; }

	void Display() 
	{
		cout << day << "/" << month << "/" << year;
	}


private:
	int day, month, year;
};

class DateTime : public Date
{
public:
	DateTime() 
	{
		hour = 0;
		min = 0;
		sec = 0;
	}
	DateTime(int h, int m, int s) 
	{
		hour = h;
		min = m;
		sec = s;
	}

	void setHour(int d) { hour = d; }
	void setMin(int m) { min = m; }
	void setSec(int y) { sec = y; }

	int getHour() { return hour; }
	int getMin() { return min; }
	int getSec() { return sec; }

	void displayDateTime() 
	{
		Display();
		cout<< " : " << sec << " / " << min << " / " << hour << endl;
	}

private:
	int hour;
	int min;
	int sec;
};
