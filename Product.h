#pragma once
#include <string>
#include <iostream>
using namespace std;

//Generic product class which contains methods needed for most derived classes
class Product
{
private:
	string id;
	string category;
	string name;
	string expdate;
	float price;

public:

	virtual float computePrice();

	void setID(string i);
	string getID();

	void setCategory(string c);
	string getCategory();

	void setName(string n);
	string getName();

	void setExpDate(string ed);
	string getExpDate();

	void setPrice(float p);
	float getPrice();


	Product();
	Product(string i, string c, string n, string e, float p);
	


};

