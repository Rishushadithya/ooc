#include "Admin.h"

Admin::Admin()
{
	admin_id = 0;
	name = "";
}

Admin::Admin(int admin_id, string name, string email, string password)
{
	// Constructor
}

void Admin::manage_all_recipe()
{
	// Manage all recipe function
}

void Admin::manage_all_user()
{
	// Implement Manage all user function
}

void Admin::manage_admin_profile()
{
	// Implement Manage admin profile function
}

void Admin::view_all_user_summary()
{
	// Implement View all user summary function
}

void Admin::view_all_recipe_summary()
{
	// Implement View all recipe summary function
}

void Admin::display()
{
	cout << "Admin Name: " << name << endl;
	cout << "Email: " << email << endl;
	
}

Admin::~Admin()
{
	// Destructor
}


