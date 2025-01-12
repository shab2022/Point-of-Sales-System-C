#pragma once
#include "Product.h"
//Added tax fields and computePrice in LotteryTickets class and Tobacco class
class LotteryTickets :public Product
{
private:
	float cityTax = .02;
	float stateTax = .06;

public:
	LotteryTickets();
	LotteryTickets(string i, string c, string n, string ed, float p);

	float computePrice();
};

