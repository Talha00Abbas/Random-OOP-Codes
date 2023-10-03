#include<iostream>
using namespace std;

class Employee {

protected:
	//Data Members
	string Name;
	int empNumber;
public:
	Employee()
	{
		Name = " ";
		empNumber = 0;
	}

	Employee(string n, int num)
	{
		Name = n;
		empNumber = num;
	}

	void setName(string n)
	{
		Name = n;
	}

	void setempNumber(int num)
	{
		empNumber = num;
	}

	string getName()
	{
		return Name;
	}
	int getempNumber()
	{
		return empNumber;
	}
	virtual void displaySalary() = 0;
};



class ProductionWorker : public Employee
{
protected:
	//Data Members
	int shift;
	double hourlyRate;
	int hours;
public:

	ProductionWorker(string n, int num, int shift1, double rate1, int hours1) :Employee(n, num)
	{
		shift = shift1;
		hourlyRate = rate1;
		hours = hours1;
	}
	void setshift(int shift1)
	{
		shift = shift1;
	}
	void setrate(double rate1)
	{
		hourlyRate = rate1;
	}
	int getshift()
	{
		return shift;
	}
	double getrate()
	{
		return hourlyRate;
	}
	void displaySalary()
	{
		cout << hourlyRate * hours;
	}
	~ProductionWorker();
};

class TeamLeader :public ProductionWorker
{
protected:
	int Bonus;
	int Required_hours;
	int Attended_hours;
public:
	TeamLeader(int Bonus1, int Req_hours1, int Att_hours1, string n, int num, int shift1, int hours1, double rate1) :ProductionWorker(n, num, shift1, hours1, rate1)
	{
		Bonus = Bonus1; Required_hours = Req_hours1; Attended_hours = Att_hours1;
	}
	void setBonus(int Bonus1)
	{
		Bonus = Bonus1;
	}
	void setReqHours(int Req_hours1)
	{
		Required_hours = Req_hours1;
	}
	void setAttHours(int Att_hours1)
	{
		Attended_hours = Att_hours1;
	}
	int getreqhours()
	{
		return Required_hours;
	}
	int getattenhours()
	{
		return Attended_hours;
	}
	void displaySalary()
	{
		cout << hourlyRate * hours * Bonus;
	}
};

int main()
{
	Employee* obj = new ProductionWorker("ABC", 111, 1, 12, 10.0);
	obj->displaySalary();
	cout << endl;
	obj = NULL;
	Employee* obj1 = new TeamLeader(20, 5, 5, "DEF", 111, 1, 12, 10.0);
	obj1->displaySalary();
	cout << endl;
	obj1 = NULL;
	return 0;
}