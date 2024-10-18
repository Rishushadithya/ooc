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
	void view_All_Recipes();
	void add_to_Favorite(int uID);
	void download_Recipe(int uID);
	void contact_Us(int uID);
	void display();
	void update_Profile(int uID, string uName);
	void delete_Profile(int uID, string uName);

	~User();
};
