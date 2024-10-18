#include "User.h"

void User::view_All_Recipes()
{
	// Display all recipes function
}

void User::add_to_Favorite(int uID)
{
	// Add to favorite function
}

void User::download_Recipe(int uID)
{
	// Download recipe function
}

void User::contact_Us(int uID)
{
	// Contact us function
}

void User::display()
{
	cout << "User ID: " << user_ID << endl;
	cout << "User Name: " << user_Name << endl;
	cout << "User Contact Number: " << unser_Contact_Number << endl;
	cout << "Country: " << country << endl;
}

void User::update_Profile(int uID, string uName)
{
	// Update profile function
}

void User::delete_Profile(int uID, string uName)
{
	// Delete profile function
}

User::~User()
{
	// Destructor
}

