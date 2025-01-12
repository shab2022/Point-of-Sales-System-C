#include "Inventory.h"

int main()
{
    Inventory inventory;

    Tobacco* tobaccoProduct = new Tobacco("T1", "Tobacco", "Cigarette", "12/2025", 6.99);
    LotteryTickets* lotteryProduct = new LotteryTickets("L1", "LotteryTickets", "CheapLottoTicket", "N/A", 2.99);
    Candy* candyProduct = new Candy("C1", "Candy", "Skittles", "11/2027", 3.99);
    Drink* drinkProduct = new Drink("D1", "Drink", "Gatorade", "11/2024", 2.79);

    inventory.addProduct(tobaccoProduct);
    inventory.addProduct(lotteryProduct);
    inventory.addProduct(candyProduct);
    inventory.addProduct(drinkProduct);
    try 
    {
        string id, name, expDate, category;
        float price, minPrice, maxPrice;
        string productNamer, productNames;
        int searchChoice, choice;

        do 
        {
            cout << "\nMenu: \n";
            cout << "1. Search Inventory\n";
            cout << "2. Sell Products\n";
            cout << "3. Add New Inventory\n";
            cout << "4. Remove Inventory\n";
            cout << "5. Exit\n";
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice) 
            {
            case 1:
                cout << "\nChoose search type:\n";
                cout << "1. By category or product name\n";
                cout << "2. By price range\n";
                cout << "Enter your choice: ";
                cin >> searchChoice;
                if (searchChoice == 1) {
                    string searchString;
                    cout << "Enter the category or product name to search: ";
                    cin >> searchString;
                    inventory.searchInventory(searchString);
                }
                else if (searchChoice == 2) {
                    float minPrice, maxPrice;
                    cout << "Enter the minimum price: ";
                    cin >> minPrice;
                    cout << "Enter the maximum price: ";
                    cin >> maxPrice;
                    inventory.searchInventory(minPrice, maxPrice);
                }
                else {
                    cout << "Invalid choice. Please try again.\n";
                }
                break;
            case 2:
            {
                cout << "\nEnter name of product to sell: ";
                cin >> productNames;
                inventory.sellProduct(productNames); }
                break;
            case 3:
            {
                cout << "\nEnter the ID of the new product: ";
                cin >> id;
                cout << "Enter the category of the new product: ";
                cin >> category;
                cout << "Enter the name of the new product: ";
                cin >> name;
                cout << "Enter the expiration date of the new product: ";
                cin >> expDate;
                cout << "Enter the price of the new product: ";
                cin >> price;
                Product* newProduct = new Product(id, category, name, expDate, price);
                inventory.addProduct(newProduct);
                cout << "Product added successfully!" << endl; }
                break;
            case 4: {
                cout << "\nEnter the name of the product to remove: ";
                cin >> productNamer;
                inventory.removeProduct(productNamer); }
                break;
            }

        } while (choice != 5);


    }

    catch (int x)
    {
        switch (x) 
        {
        case 1:
            cout << "Product cannot be removed, does not exist!";
            break;
        case 2:
            cout << "Product cannot be sold, does not exist!";
            break;
        case 3:
            cout << "Incorrect search parameters!";
        }
    }
}
