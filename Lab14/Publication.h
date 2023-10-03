#pragma once
#include <iostream>
using namespace std;

class Publications
{
private:
	string title;
	float price = 0;

public:
	Publications() 
	{
		price = 0;
		title = '\0';
	}
	
	Publications(float p, string t)
	{
		price = p;
		title = t;
	}

	void setTitle(string t) { title = t; }
	string getTitle() { return title; }
	void setPrice(float p) { price = p; }
	float getPrice() { return price; }
	void display() { cout << "Title of the item is : " << title << "\tPrice " << price << "$" << endl; }
};

class Book : public Publications 
{
private:
	int pageCount = 0;

public:
	Book() { pageCount = 0;	}
	Book(int pC) { pageCount = pC; }

	int getPageCount() { return pageCount; }
	void setPageCount(int i) { pageCount = i; }

	void AddPages(int i) { pageCount += i; }
	
	void displayBook() 
	{ 
		display();
		cout<<"Page Count of " << pageCount << endl; 
	}


};

class AudioTape : public Publications
{
private:
	float time = 0;

public:
	AudioTape() { time = 0; }
	AudioTape(float pC) { time = pC; }

	int getTime() { return time; }
	void setTime(float i) { time = i; }

	void AddTime(float i) { time += i; }
	void displayAudioTape() 
	{ 
		display();
		cout <<"Time Count of " << time << endl; 
	}


};
