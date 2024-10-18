#include "Users.h"

Users::Users()
{
	email = "";
	password = "";
}

Users::Users(string email, string password)
{
	// Constructor
}

void Users::login()
{
	cout << "Enter email: ";
	cin >> email;
	cout << "Enter password: ";
	cin >> password;
}

void Users::validate_User()
{
	// Check email and password are correct 
}

void Users::display() 
{
	cout << "Email: " << email << endl;
	cout << "Password: " << password << endl;
}

void Users::logout()
{
	cout << "Logged out!" << endl;
}

Users::~Users()
{
	// Destructor
}


