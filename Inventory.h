#pragma once
#include <vector>
#include "Candy.h"
#include "Drink.h"
#include "LotteryTickets.h"
#include "Tobacco.h"

//Setting up inventory class
class Inventory
{
private:
	vector<Product*> products;

public:
	void addProduct(Product* p);
	void removeProduct(string p);
	void sellProduct(string p);
	void searchInventory(string s);
	void searchInventory(float minPrice, float maxPrice);
};

