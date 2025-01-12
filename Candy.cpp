#include "Candy.h"

Candy::Candy():Product()
{
}

Candy::Candy(string i, string c, string n, string ed, float p):Product(i, c, n, ed, p)
{
}

float Candy::computePrice()
{
	return getPrice();
}
