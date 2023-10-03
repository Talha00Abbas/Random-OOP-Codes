#pragma once
#include <iostream>
using namespace std;


//---Task#01---//
class Distance {
private:
	int inches;
	int feets;
public:
	Distance() 
	{
		inches = 0;
		feets = 0;
	}
	Distance(int f, int i) 
	{	
		
		inches = i;
		feets = f;					//6ft 2inches 

	}
	void setInches(int n) { inches = n; }
	int getInches() { return inches; }
	void setFeets(int n) { feets = n; }
	int getFeets() { return feets; }
	Distance operator+(const Distance& a) 
	{
		Distance temp;
		temp.inches = inches + a.inches;
		temp.feets = feets + a.feets;

		while (temp.inches > 12)
		{
			temp.inches -= 12;
			temp.feets += 1;
		}

		return temp;
	}
	Distance operator-(const Distance& a) 
	{
		Distance temp;
		temp.inches = inches - a.inches;
		temp.feets = feets - a.feets;

		return temp;
	}
	bool operator==(const Distance& a) 
	{
		if (inches == a.inches && feets == a.feets)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};

//---Task#02---//
class Product {
private:
	int quantity;
	static int objCount;
	int serialNo;
public:
	Product() 
	{
		quantity = 0;
		objCount = 0;
		serialNo = 0;
	}
	Product(int q, static int oC, int sNo) 
	{
		quantity = q;
		objCount = oC;
		serialNo = sNo;
	}
	Product(int q, int oC)
	{
		quantity = q;
		objCount = oC;
	
	}

	static void incrementProductCount() 
	{
		objCount++;
	}
	void setSerial(int a) 
	{
		serialNo = a;
	}
	int getSerialNo() 
	{
		return serialNo;
	}
	void setQuantity(int a) 
	{
		quantity = a;
	}
	int getQuantity() 
	{
		return quantity;
	}
	Product operator=(Product& p) 
	{

		quantity = p.quantity;
		objCount = p.objCount;
		serialNo = p.serialNo;


		return p;
	}
	Product operator-=(int c) 
	{
		this->quantity -= c;
		return *this;
	}
};
int Product::objCount = 0;

class Vector
{
private:
	int length = 3;
	int* arr = new int[length];

	

public:
	Vector()
	{
		for (int i = 0; i < length; i++)
		{
			arr[i] = 0;
		}
	}

	void setArray(int x = 0) 								//: Will set the values to either the passed x or straight zero by default.
	{
		for (int i = 0; i < length; i++)
		{
			arr[i] = x;
		}
	}
	int* getArray()										//: Will display the entire array of the object it has been called for.
	{
		for (int i = 0; i < 3; i++)
		{
			cout << arr[i] << endl;
		}
		return arr;
	}

	Vector operator+(Vector v1)					//: Will add two vectorsand return a resultant temporary Vector.
	{
		for (int i = 0; i < 3; i++)
		{
			this->arr[i] += v1.arr[i];
		}
		return *this;
	}
	Vector operator-(Vector v1)					//: Will subtract two vectors and return a resultant temporary Vector.
	{
		for (int i = 0; i < 3; i++)
		{
			this->arr[i] -= v1.arr[i];
		}
		return *this;
	}

};
