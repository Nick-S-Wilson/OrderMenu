// Main.cpp

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include "Menu.h"

int main()
{
	string name;
	char answer;
	int i, amount;

	menuItemType menuList[8];
	menuItemType * pMenu = new menuItemType[numOfItems];

	getData(menuList); // creates menu

	showMenu(menuList); // prints the menu


						// loop for ordering
	do {
		cout << "What would you like to order? ";
		getline(cin, name);

		for (i = 0; i < numOfItems; i++) // loop to see what item was ordered
		{

			if (name == menuList[i].menuItem)
			{
				cout << "How many: ";
				cin >> amount;
				menuList[i].count = amount; // set the count to the amount ordered
			}
		}
		cout << "would you like to order more? (y/n): ";
		cin >> answer;
		cout << endl;

		cin.ignore();
	} while (answer == 'y' || answer == 'Y');


	printCheck(menuList); // outputs the check

	system("pause");
	return 0;

}
