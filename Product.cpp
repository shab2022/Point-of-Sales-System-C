#include "Product.h"

float Product::computePrice()
{
	return price;
}

void Product::setID(string i)
{
	id = i;
}

string Product::getID()
{
	return id;
}

void Product::setCategory(string c)
{
	category = c;
}

string Product::getCategory()
{
	return category;
}

void Product::setName(string n)
{
	name = n;
}

string Product::getName()
{
	return name;
}

void Product::setExpDate(string ed)
{
	expdate = ed;
}

string Product::getExpDate()
{
	return expdate;
}

void Product::setPrice(float p)
{
	price = p;
}

float Product::getPrice()
{
	return price;
}

Product::Product()
{
	setID("Not Set Yet");
	setCategory("Not Set Yet");
	setName("Not Set Yet");
	setExpDate("Not Set Yet");
	setPrice(0.00);
}

Product::Product(string i, string c, string n, string e, float p)
{
	setID(i);
	setCategory(c);
	setName(n);
	setExpDate(e);
	setPrice(p);
}
