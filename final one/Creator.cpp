#include "Creator.h"

Creator::Creator()
{
	creator_ID = 0;
	title = " ";
	profile_Image = " ";
	bio = " ";
	year_Of_Experience = 0;
	current_Work = " ";

	for (int i = 0; i < 2; i++)
	{
		listOfRecipe[i] = new Recipe();
	}
}

Creator::Creator(int cID, string t, string pI, string b, int yOE, string cW)
{
	creator_ID = cID;
	title = t;
	profile_Image = pI;
	bio = b;
	year_Of_Experience = yOE;
	current_Work = cW;

	for (int i = 0; i < 2; i++)
	{
		listOfRecipe[i] = new Recipe();
	}

}



void Creator::create_Recipe()
{
	// Create recipe function
}

void Creator::edit_Recipe()
{
	// Edit recipe function
}

void Creator::delete_Recipe()
{
	// Delete recipe function
}

void Creator::manage_Profile()
{
	// Manage profile function
}

void Creator::display()
{
	cout << "Title: " << title << endl;
	cout << "Profile Image: " << profile_Image << endl;
	cout << "Bio: " << bio << endl;
	cout << "Year of Experience: " << year_Of_Experience << endl;
	cout << "Current Work: " << current_Work << endl;
}

Creator::~Creator()
{
	for (int i = 0; i < 2; i++)
	{
		delete listOfRecipe[i];
	}

}

