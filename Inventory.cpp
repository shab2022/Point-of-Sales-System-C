#include "Inventory.h"

void Inventory::addProduct(Product* p)
{
	products.push_back(p);
}

void Inventory::removeProduct(string p)
{
	for (vector<Product*>::iterator i = products.begin(); i != products.end(); i++) 
	{
		if ((*i)->getName() == p)
		{
			products.erase(i);
			cout << "Product removed!\n";
			return;
		}

	}

	throw 1;
}

void Inventory::sellProduct(string p)
{
	for (vector<Product*>::iterator i = products.begin(); i != products.end(); i++)
	{
		if ((*i)->getName() == p)
		{
			products.erase(i);
			cout << "Product sold!\n";
			return;
		}

	}

	throw 2;
}

//Implemented function overloading for search
//Update: having to rework search inventory functions
void Inventory::searchInventory(string s)
{
	for (vector<Product*>::iterator i = products.begin(); i != products.end(); i++) 
	{

		if ((*i)->getCategory() == s || (*i)->getName() == s) 
		{
			cout << "\nFound Product: " << endl<< "Name: " <<  (*i)->getName() << endl<< "ID: " <<
				(*i)->getID()<< endl << "Category: " << (*i)->getCategory()<< endl << "Expiration: " << (*i)->getExpDate()<<
				endl << "Price: " << (*i)->getPrice() << endl;
			return;
		}

	}
	throw 3;
}

void Inventory::searchInventory(float minPrice, float maxPrice)
{
	for (vector<Product*>::iterator i = products.begin(); i != products.end(); i++) 
	{
		float price = (*i)->getPrice();
		if (price >= minPrice && price <= maxPrice) 
		{
			cout << "\nFound Product: " << endl << "Name: " << (*i)->getName() << endl << "ID: " <<
				(*i)->getID() << endl << "Category: " << (*i)->getCategory() << endl << "Expiration: " << (*i)->getExpDate() <<
				endl << "Price: " << (*i)->getPrice() << endl;
			return;
		}

	}
	throw 3;
}

