#pragma once
#include "Users.h"
#include <iostream>
#include <string>
using namespace std;

class User : public Users{
private:
	int user_ID;
	string user_Name;
	int unser_Contact_Number;
	string country;
public:
	User();
	User(int uID, string uName, int uContact, string uCountry, string uEmail, string uPassword);
	void view_All_Recipes();
	void add_to_Favorite();
	void download_Recipe();
	void contact_Us();
	void become_a_Creator();
	void display();
	void update_Profile();
	void delete_Profile();

	~User();
};
