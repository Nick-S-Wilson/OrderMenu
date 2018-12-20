// Menu.cpp

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include "Menu.h"

using namespace std;

void getData(menuItemType *pMenu)
{
	if (numOfItems == 1)
	{
		pMenu[0].menuItem = "Plain egg";
		pMenu[0].menuPrice = 1.45;
	}
	else if (numOfItems == 2)
	{
		pMenu[0].menuItem = "Plain egg";
		pMenu[0].menuPrice = 1.45;
		pMenu[1].menuItem = "Bacon and egg";
		pMenu[1].menuPrice = 2.45;
	}
	else if (numOfItems == 3)
	{
		pMenu[0].menuItem = "Plain egg";
		pMenu[0].menuPrice = 1.45;
		pMenu[1].menuItem = "Bacon and egg";
		pMenu[1].menuPrice = 2.45;
		pMenu[2].menuItem = "Muffin";
		pMenu[2].menuPrice = 0.99;
	}
	else if (numOfItems == 4)
	{
		pMenu[0].menuItem = "Plain egg";
		pMenu[0].menuPrice = 1.45;
		pMenu[1].menuItem = "Bacon and egg";
		pMenu[1].menuPrice = 2.45;
		pMenu[2].menuItem = "Muffin";
		pMenu[2].menuPrice = 0.99;
		pMenu[3].menuItem = "French Toast";
		pMenu[3].menuPrice = 1.99;
	}
	else if (numOfItems == 5)
	{
		pMenu[0].menuItem = "Plain egg";
		pMenu[0].menuPrice = 1.45;
		pMenu[1].menuItem = "Bacon and egg";
		pMenu[1].menuPrice = 2.45;
		pMenu[2].menuItem = "Muffin";
		pMenu[2].menuPrice = 0.99;
		pMenu[3].menuItem = "French Toast";
		pMenu[3].menuPrice = 1.99;
		pMenu[4].menuItem = "Fruit Basket";
		pMenu[4].menuPrice = 2.49;
	}
	else if (numOfItems == 6)
	{
		pMenu[0].menuItem = "Plain egg";
		pMenu[0].menuPrice = 1.45;
		pMenu[1].menuItem = "Bacon and egg";
		pMenu[1].menuPrice = 2.45;
		pMenu[2].menuItem = "Muffin";
		pMenu[2].menuPrice = 0.99;
		pMenu[3].menuItem = "French Toast";
		pMenu[3].menuPrice = 1.99;
		pMenu[4].menuItem = "Fruit Basket";
		pMenu[4].menuPrice = 2.49;
		pMenu[5].menuItem = "Cereal";
		pMenu[5].menuPrice = 0.69;
	}
	else if (numOfItems == 7)
	{
		pMenu[0].menuItem = "Plain egg";
		pMenu[0].menuPrice = 1.45;
		pMenu[1].menuItem = "Bacon and egg";
		pMenu[1].menuPrice = 2.45;
		pMenu[2].menuItem = "Muffin";
		pMenu[2].menuPrice = 0.99;
		pMenu[3].menuItem = "French Toast";
		pMenu[3].menuPrice = 1.99;
		pMenu[4].menuItem = "Fruit Basket";
		pMenu[4].menuPrice = 2.49;
		pMenu[5].menuItem = "Cereal";
		pMenu[5].menuPrice = 0.69;
		pMenu[6].menuItem = "Coffee";
		pMenu[6].menuPrice = 0.50;
	}
	else if (numOfItems == 8)
	{
		pMenu[0].menuItem = "Plain egg";
		pMenu[0].menuPrice = 1.45;
		pMenu[1].menuItem = "Bacon and egg";
		pMenu[1].menuPrice = 2.45;
		pMenu[2].menuItem = "Muffin";
		pMenu[2].menuPrice = 0.99;
		pMenu[3].menuItem = "French Toast";
		pMenu[3].menuPrice = 1.99;
		pMenu[4].menuItem = "Fruit Basket";
		pMenu[4].menuPrice = 2.49;
		pMenu[5].menuItem = "Cereal";
		pMenu[5].menuPrice = 0.69;
		pMenu[6].menuItem = "Coffee";
		pMenu[6].menuPrice = 0.50;
		pMenu[7].menuItem = "Tea";
		pMenu[7].menuPrice = 0.75;
	}

}

void showMenu(menuItemType *pMenu)
{
	for (int menuSize = 0; menuSize < numOfItems; menuSize++)
	{
		cout << setw(15) << left << pMenu[menuSize].menuItem << "$" << setprecision(2) << fixed << setw(15) << left << pMenu[menuSize].menuPrice << endl;
	}
	cout << endl << "To order an item, type the full name of the item (case sensitive)." << endl << endl;
}

void printCheck(menuItemType *pMenu)
{

	cout << endl << endl << "Thank you for shopping at Nick's deli!" << endl << endl;

	int j;
	double price, totalPrice = 0, tax, checkTotal;
	for (j = 0; j < numOfItems; j++)
	{
		if (pMenu[j].count > 0)
		{
			cout << setw(15) << left << pMenu[j].menuItem << setw(15) << left << pMenu[j].count << setprecision(2) << fixed << "$" << pMenu[j].menuPrice << endl;
			price = pMenu[j].count * pMenu[j].menuPrice;
			totalPrice += price;
		}
	}

	tax = totalPrice*.05;
	checkTotal = tax + totalPrice;

	cout << setw(30) << left << "SubTotal" << setprecision(2) << fixed << "$" << totalPrice << endl;
	cout << setw(30) << left << "Tax" << setprecision(2) << fixed << "$" << tax << endl;
	cout << setw(30) << left << "Total" << setprecision(2) << fixed << "$" << checkTotal << endl << endl;

}