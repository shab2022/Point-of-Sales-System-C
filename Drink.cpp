#include "Drink.h"

//Created this drink class and another candy class, both derive their constructors from parent Product class
Drink::Drink():Product()
{
}

Drink::Drink(string i, string c, string n, string ed, float p):Product(i, c, n, ed, p)
{
}

float Drink::computePrice()
{
	return getPrice();
}
