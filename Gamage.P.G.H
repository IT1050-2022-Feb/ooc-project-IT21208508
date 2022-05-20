// Gamage P.G.H IT21276828

//header file of Resturant class
#include"User.h"
#include"DeliveryRider.h"
#include"Menu.h"
class Restaurant
{
private:
	char res_Owner[20];
	int res_ID;
	char res_Email[30];
	int res_Contact;

	Menu*M1[50];
public:
	Restaurant();//default constructor
	Restaurant(const char r_owner[], int rID, const char r_Email[],int r_con, const char uName[], const char pw[], const char nameU[], const char r_Date[], const char add[]);//overloaded constructor
	void displayResDetails();
	~Restaurant(); //destructor
};


//header file Menu class
#include"Restaurant.h"

class Menu
{
private:
	int menu_ID;
	char m_Description[40];
	

	MenuItems *MI[50];//aggregation relationshipn between Menu class and MenuItems
public:
	Menu();//default constructor
	Menu(int mID, const char mDes[]); //overloaded constructor
	void displayMenuDetails();
	~Menu(); //destructor
};


//header file od Menu class

#include"Menu.h"
class MenuItems
{
private:
	int item_ID;
	float item_Price;
	char item_Description[40];
	Menu *menu[4];
public:
	MenuItems(); //default constructor
	MenuItems(int iID, float iPrice, const char iDes[]); //overloaded constructor
	void dispalyItems();
	~MenuItems(); //destructor
};

//implementation

//implimentation of Resturant class 

#include "Restaurant.h"
#include<iostream>
#include"User.h"
using namespace std;

Restaurant::Restaurant()
{
	strcpy(res_Owner, " ");
	res_ID = 0;
	strcpy(res_Email, "");
	res_Contact = 0;
}
//
Restaurant::Restaurant(const char r_owner[], int rID, const char r_Email[], int
	r_con, const char uName[], const char pw[], const char nameU[], const char
	r_Date[], const char add[]) : User(uName, pw, nameU, r_Date, add)
{
	strcpy(res_Owner, r_owner);
	res_ID = rID;
	strcpy(res_Email, r_Email);
	res_Contact = r_con;
}
void Restaurant::displayResDetails()
{
}
Restaurant::~Restaurant()
{

}


//implimentation of Menu class 
#include "Menu.h"

Menu::Menu()
{
	menu_ID = 0;
	strcpy(m_Description, "");
}
Menu::Menu(int mID, const char mDes[]) {
	menu_ID = mID;
	strcpy(m_Description, mDes);
}
void Menu::displayMenuDetails()
{
}
Menu::~Menu()
{
}

//implementation of Menuitmes
#include "MenuItems.h"

MenuItems::MenuItems()
{
	item_ID = 0;
	item_Price = 0.0;
	strcpy(item_Description, " ");
}
MenuItems::MenuItems(int iID, float iPrice, const char iDes[])
{
	item_ID = iID;
	item_Price = iPrice;
	strcpy(item_Description, iDes);
}
void MenuItems::dispalyItems()
{
}
MenuItems::~MenuItems()
{
}

