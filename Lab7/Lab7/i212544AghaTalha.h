#pragma once
#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;


class Car
{
public:
	int items = 5;
	string* carName = new string[items];
	int* carCC = new int[items];
	string* fuelType = new string[items];
	string* shiftType = new string[items];

	void setItems(int i) 
	{
		items = i;
	}

	void SetCarData() 
	{
		for (int i = 0; i < items; i++)
		{
			cout << endl << "Enter Car Data for " << i << " Car" << endl;

			cout << "Enter Car Name  :  ";		
			cin >> carName[i];
			cout << "Enter Car CC  :  ";		
			cin >> carCC[i];
			cout << "Enter Car Fuel Type  :  ";
			cin >> fuelType[i];
			cout << "Enter Car Shift Type  :  ";
			cin >> shiftType[i];


		}
	}

	void searchByName() 
	{
		string name;
		cout << "Enter car name you want to search" << endl;
		cin >> name;

		for (int i = 0; i < items; i++)
		{
			if (name == carName[i])
			{
				cout << "Car Name  :  " << carName[i] << endl;
				
				cout << "Car CC  :  " << carCC[i] << endl;
				
				cout << "Car Fuel Type  :  " << fuelType[i] << endl;
				
				cout << "Car Shift Type  :  " << shiftType[i] << endl;
				cout << endl;
			}


		}
	}

	void searchByCarCC()
	{
		int ccValue;
		cout << "Enter car CC you want to search" << endl;
		cin >> ccValue;

		for (int i = 0; i < items; i++)
		{
			if (ccValue == carCC[i])
			{
				cout << "Car Name  :  " << carName[i] << endl;

				cout << "Car CC  :  " << carCC[i] << endl;

				cout << "Car Fuel Type  :  " << fuelType[i] << endl;

				cout << "Car Shift Type  :  " << shiftType[i] << endl;
				cout << endl;
			}
		}
	}


};

class Student
{
public:
	string name;
	int id;
	float* gpa = new float[4];


	void setName() 
	{ 
		int n;
		cout << "Enter Name" << endl;
		cin >> n;
		name = n; 
	
	}
	void setID() 
	{ 
		int n;
		cout << "Enter ID" << endl;
		cin >> n;
		id = n; 
	}

	string getName() 
	{
		return name;
	}

	int getID() 
	{
		return id;
	}

	void generateRandomGPA() 
	{
		for (int i = 0; i < 4; i++)
		{
			
			gpa[i] = rand() % 4;
			cout << i + 1 << " Semester GPA is " << gpa[i] << endl;
		}
	}

	void CGPA() 
	{
		float cgpa = 0;
		for (int i = 0; i < 4; i++)
		{
			cgpa += gpa[i];
		}
		cgpa = cgpa / 4;

		cout << "Your CGPA is " << cgpa << endl;

	}
};

class Items
{
public:
	int itemID;
	string itemName;
	int quant;
	int price;

	int getID() { return itemID; }
	int getQuantity() { return quant; }
	int getPrice() { return price; }
	string getName() { return itemName; }

	void setID()
	{
		int n;
		cin >> n;

		itemID = n;

	}
	void setQuantity()
	{
		int n;
		cin >> n;

		quant = n;

	}
	void setPrice()
	{
		int n;
		cin >> n;

		price = n;

	}
	void setName()
	{
		string n;
		cin >> n;

		itemName = n;

	}
};

class Shopping
{
public:
	int itemsCount;
	int totalAmount = 0;
	Items* item = new Items[4];

	void enterItems() 
	{
		int n;
		cout << "Enter Items " << endl;
		cin >> n;
		itemsCount = n;
	}

	void Menu() 
	{
		for (int i = 0; i < itemsCount; i++)
		{
			cout << "Enter Item ID " << endl;
			item[i].setID();

			cout << "Enter Item Name " << endl;
			item[i].setName();

			cout << "Enter Item Price " << endl;
			item[i].setPrice();

			cout << "Enter Item Quantity " << endl;
			item[i].setQuantity();

		}

		for (int i = 0; i < itemsCount; i++)
		{
			cout << "Item " << i << "  " << item[i].getName() << "  " << item[i].getPrice() << "$s";
			cout << endl;
		}
	}

	void setShoppingCart() 
	{
		int ask = 1;
		int itemid;

		do
		{

			cout << "Enter Item ID you want to buy " << endl;
			cin >> itemid;

			for (int i = 0; i < itemsCount; i++)
			{
				if (item[i].itemID == itemid)
				{
					cout << "Item name is " << item[i].itemName << endl;
					totalAmount += item[i].price;
				}
			}
			cout << "Enter 1 to continue or press 0 to exit" << endl;
			cin >> ask;
		} while (ask != 0);

		cout << "Your Total Amount is " << totalAmount << "+ 200 Delivery Charges Paid in Cash " << endl;
		if (totalAmount >= 1000)
		{
			cout << "Discounted amount is " << totalAmount / 10 << endl;
		}
	}


};



