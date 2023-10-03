#include <iostream>
#include "Publication.h"
#include "Employee.h"
#include "Dates.h"

using namespace std;

int main() 
{
	//Q1
	Book book;
	book.setPrice(50);
	book.setTitle("Ways to Die");
	book.setPageCount(200);
	book.AddPages(550);
	book.displayBook();

	cout << endl;

	AudioTape tape;
	tape.setPrice(20);
	tape.setTitle("Kakarot");
	tape.setTime(400);
	tape.AddTime(25);
	tape.displayAudioTape();

	cout << endl << endl;


	//Q2
	ProductionWorker em(1, 500);
	em.setName("Talha");
	em.setAge(20);
	em.setAddress("ISB");
	em.setHireDate(2001);
	cout << "Pay of Employee is " << em.CalcPay() << endl;
	em.DisplayEmployee();
	
	cout << endl << endl;

	//Q3
	DateTime dt;

	dt.setHour(0);
	dt.setMin(0);
	dt.setSec(0);
	dt.setDay(19);
	dt.setMonth(12);
	dt.setYear(2022);

	dt.displayDateTime();

}