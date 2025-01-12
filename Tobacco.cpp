#include "Tobacco.h"

Tobacco::Tobacco():Product()
{
}

Tobacco::Tobacco(string i, string c, string n, string ed, float p):Product(i,c,n,ed,p)
{
}


float Tobacco::computePrice()
{
	return specialTax*getPrice();
}
