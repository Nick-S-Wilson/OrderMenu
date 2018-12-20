#pragma once
// Menu.h

#ifndef Menu_H
#define Menu_H
using namespace std;


#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <string.h>

struct menuItemType
{
	string menuItem;
	double menuPrice;
	int count;
};

const int numOfItems = 8;


void getData(menuItemType *pMenu);
void showMenu(menuItemType *pMenu);
void printCheck(menuItemType *pMenu);

#endif
