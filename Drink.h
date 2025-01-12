#pragma once
#include "Product.h"
class Drink :public Product
{
public:
	Drink();
	Drink(string i, string c, string n, string ed, float p);

	float computePrice();
};

