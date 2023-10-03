#include<iostream>
using namespace std;
class StudentInfo
{
public:
	virtual void input_info(void)
	{
		cout << "Enter reg no. :" << endl;
		cin >> reg_no;
		cout << "Enter name :" << endl;
		cin >> name;
	} //Function to input information
	virtual void print_info(void)
	{
		cout << reg_no;
		cout << name;
	} //Function to print information
private:
	int reg_no; // To store registration # of student
	char name[15]; // To store name of student
};


class StudentResult :public StudentInfo
{
public:
	void input_info() {
		StudentInfo::input_info();
		cout << "Enter no. of sub 1,sub 2 and sub 3 respectively :" << endl;
		cin >> sub1;
		cin >> sub2;
		cin >> sub3;
		average = (sub1 + sub2 + sub3) / 3;
		total = sub1 + sub2 + sub3;
	} // Input marks of students
	void print_info() {
		StudentInfo::print_info();
		cout << "Subject 1 : " << sub1 << endl;
		cout << "Subject 2 : " << sub2 << endl;
		cout << "Subject 3 : " << sub3 << endl;

		cout << "Average : " << average << endl;
		cout << "Total : " << total << endl;

	} //Printing result card
private:
	float sub1; //Marks of subject 1
	float sub2; //Marks of subject 2
	float sub3; //Marks of Subject 3
	float average; //Average Marks
	float total; //Total Marks
};

class Shape {
	string type;
public:
	virtual int areaCalculator() = 0;
};


class Rectangle :public Shape {
	float height;
	float width;
	float area;
public:
	Rectangle(int h, int w) {
		height = h;
		width = w;
	}
	int areaCalculator() {
		return area = height * width;
	}
};


class Triangle :public Shape {
	float base;
	float height;
	float area;
public:
	Triangle(int b, int h) {
		base = b;
		height = h;
	}
	int areaCalculator() {
		return area = 0.5 * (base * height);
		//cout<<"Area of triangle :"<<area;
	}
};

class Circle :public Shape {
	float radius;
	float area;
public:
	Circle(int r) {
		radius = r;
	}
	int areaCalculator() {
		return area = 3.14 * (radius * radius);
	}
};



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


int main() {
	StudentInfo* ptr;
	StudentResult student;
	ptr = &student;
	ptr->input_info();
	ptr->print_info();
	system("pause");
	return 0;


	Shape* shapePtr;
	Triangle t(5, 5);
	shapePtr = &t;
	cout << "Triangle" << endl;
	cout << shapePtr->areaCalculator() << endl;

	Rectangle r(2, 3);
	shapePtr = &r;
	cout << "Rectangle" << endl;
	cout << shapePtr->areaCalculator() << endl;

	Circle c(10);
	shapePtr = &c;
	cout << "Cricle" << endl;
	cout << shapePtr->areaCalculator() << endl;





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