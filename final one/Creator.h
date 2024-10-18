#pragma once
#include "User.h"
#include "Recipe.h"
#include <iostream>
#include <string>
using namespace std;


class Creator: public User{
private:
	Recipe* listOfRecipe[2];
	
	int creator_ID;
	string title;
	string profile_Image;
	string bio;
	int year_Of_Experience;
	string current_Work;
public:
	Creator();
	Creator(int cID, string t, string pI, string b, int yOE, string cW);

	void create_Recipe();
	void edit_Recipe();
	void delete_Recipe();
	void manage_Profile();
	void display();

	~Creator(); 

};
