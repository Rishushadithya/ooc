#include "User.h"

User::User()
{
	// Default constructor
	
}

User::User(int uID, string uName, int uContact, string uCountry, string uEmail, string uPassword)
{
	user_ID = uID;
	user_Name = uName;
	unser_Contact_Number = uContact;
	country = uCountry;
	email = uEmail;
	password = uPassword;

}

void User::view_All_Recipes()
{
	// Display all recipes function
}

void User::add_to_Favorite()
{
	// Add to favorite function
}

void User::download_Recipe()
{
	// Download recipe function
}

void User::contact_Us()
{
	// Contact us function
}

void User::become_a_Creator()
{
	// Become a creator function
}

void User::display()
{
	cout << "User ID: " << user_ID << endl;
	cout << "User Name: " << user_Name << endl;
	cout << "User Contact Number: " << unser_Contact_Number << endl;
	cout << "Country: " << country << endl;
}

void User::update_Profile()
{
	// Update profile function
}

void User::delete_Profile()
{
	// Delete profile function
}

User::~User()
{
	// Destructor
}

