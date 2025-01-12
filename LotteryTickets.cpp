#include "LotteryTickets.h"

LotteryTickets::LotteryTickets():Product()
{
}

LotteryTickets::LotteryTickets(string i, string c, string n, string ed, float p):Product(i,c,n,ed,p)
{
}

float LotteryTickets::computePrice()
{
	return (cityTax*getPrice()) + (stateTax*getPrice() + getPrice());
}
