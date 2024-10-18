#pragma once
#include "Users.h"
#include "contactUs.h"
#include <iostream>
#include <string>
using namespace std;

class Moderator : public Users {
private:
	int moderator_ID;
	string moderator_Name;
	contactUs *C[2];
public:

	Moderator();
	Moderator(int moderator_ID, string moderator_Name, string email, string password);
	void filter_Count();
	void view_Summary();
	void manage_contactUs_messages(contactUs *c1 , contactUs *c2);
	void manage_Pending_Recipes();
	void manage_Profile();
	void display();

	~Moderator();
};
