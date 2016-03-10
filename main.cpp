#include <cstdlib>
#include <iostream>
#include "SList.h"


using namespace std;

int main(int argc, char const *argv[])
{	
	SList shopping;
	int menu;
	int z = 1;
	bool remain  = true;
	string name;
	int key;

	while(remain)
	{
		cout << "\t\t Welcome to Shopping List" << endl;
		cout << "\t\t ========================" << endl << endl;

		cout << "\t 1) Display products" << endl;
		cout << "\t *-----------------------*" << endl;
		cout << "\t 2) Add a product" << endl;
		cout << "\t *-----------------------*" << endl;
		cout << "\t 3) Eliminate a product" << endl;
		cout << "\t *-----------------------*" << endl;
		cout << "\t 4) Exit" << endl;
		cout << "\t *-----------------------*" << endl << endl;
		cout << "\t Choose a option =>";
		cin >> menu;
		system("clear");

		switch(menu)
		{
			case 1:
				shopping.printList();
			case 2:
				cout << "Product name => ";
				cin >> name;
				cout << endl << "number of product do you want to add => ";
				cin >> key;
				shopping.addNode(z, name, key);
				z++;
			case 3:
				shopping.printList();
				cout << endl << "Id product to eliminate => ";
				cin >> key;
				shopping.deleteNode(key);
			case 4:
				cout << "Exiting the app, thanks for using the ShoppingList app..." << endl;
				return EXIT_SUCCESS;
				break;
		}

	}

	return EXIT_SUCCESS;
}


