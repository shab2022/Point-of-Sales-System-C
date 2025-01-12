#pragma once
#include "Product.h"
class Candy : public Product
{
public:
	Candy();
	Candy(string i, string c, string n, string ed, float p);

	float computePrice();
};

