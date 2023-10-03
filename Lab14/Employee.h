#pragma once
#include <iostream>
using namespace std;

class Person
{
private:
	string name;
	int age;
	string address;

public:
	Person() 
	{
		name = '\0';
		age = 0;
		address = '\0';
	}

	Person(string n, int a, string add) 
	{
		name = n;
		age = a;
		address = add;
	}
	
	string getName() { return name; }
	void setName(string s) { name = s; }
	int getAge() { return age; }
	void setAge(int a) { age = a; }
	string getAddress() { return address; }
	void setAddress(string add) { address = add; }

	void display()
	{
		cout << "Age " << age << " Name " << name << " Address " << address << endl;
	}


};

class Employee : public Person
{
public:
	Employee() 
	{
		empNum = 0;
		hireDate = 000;
	}
	Employee(int eN, int hD) 
	{
		empNum = eN;
		hireDate = hD;
	}

	int getEmpNum() { return empNum; }
	void setEmpNum(int en) { empNum = en; }
	float getHireDate() { return hireDate; }
	void setHireDate(int en) { hireDate = en; }

	void DisplayEmployee() 
	{
		display();
		cout << "Employee Number " << empNum << "\t hired on " << hireDate << endl;
	}

private:
	int empNum;
	float hireDate;
};

class ProductionWorker : public Employee
{
public:
	ProductionWorker() 
	{
		shift = 1;
		payRate = 1;
	}
	ProductionWorker(int s, int pr)
	{
		if (s != 1 || s != 2)
		{
			s = 1;					//day by default
		}
		shift = s;
		payRate = pr;
	}

	

	double CalcPay() 
	{
		int hoursWorked;
		cout << "Enter hours Worked " << endl;
		cin >> hoursWorked;
		return payRate * shift * hoursWorked;
	}

	void displayProdWorker() 
	{
		DisplayEmployee();
		cout <<"Shift " << shift << "\t and PayRate of " << payRate << endl;
	}

private:
	int shift = 1;						//can be 1 or 0
	double payRate = 1;
};

