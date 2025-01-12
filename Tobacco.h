#pragma once
#include "Product.h"
class Tobacco :public Product
{
private:
	float specialTax = 1.09;

public:
	Tobacco();
	Tobacco(string i, string c, string n, string ed, float p);

	float computePrice();

};

