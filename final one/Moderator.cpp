#include "Moderator.h"

Moderator::Moderator()
{
	moderator_ID = 0;
	moderator_Name = "";
}

Moderator::Moderator(int moderator_ID, string moderator_Name, string email, string password)
{
	// Constructor
}

void Moderator::filter_Count()
{
	// Implement filter count function
}

void Moderator::view_Summary()
{
	// Implement view summary function
}

void Moderator::manage_contactUs_messages(contactUs *c1 , contactUs *c2)
{
	C[0]=c1;
	C[1]=c2;
}

void Moderator::manage_Pending_Recipes()
{
	// Implement manage pending recipes function
}

void Moderator::manage_Profile()
{
	// Implement manage profile function
}

void Moderator::display()
{
	cout << "Moderator Name: " << moderator_Name << endl;
	cout << "Email: " << email << endl;
}

Moderator::~Moderator()
{
	// Destructor
}


