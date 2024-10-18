#include "Recipe.h"

Recipe::Recipe()
{
	recipe_ID = 0;
	recipe_Name = "";
	creator_ID = 0;
	cuisine = "";
	status = "";
	time = 0;
	description = "";
	difficulty = 0;
	serves = 0;
	image = "";
	ingredients = "";
	method = "";
}

Recipe::Recipe(int recipe_ID, string recipe_Name, int creator_ID, string cuisine, string status, int time, int difficulty, int serves, string description, string ingredients, string method)
{
	// Constructor function implementation
}

void Recipe::displya_Recipe()
{
	cout << "Recipe Name: " << recipe_Name << endl;
	cout << "Cuisine: " << cuisine << endl;
	cout << "Status: " << status << endl;
	cout << "Time: " << time << endl;
	cout << "Description: " << description << endl;
	cout << "Difficulty: " << difficulty << endl;
	cout << "Serves: " << serves << endl;
	cout << "Image: " << image << endl;
	cout << "Ingredients: " << ingredients << endl;
	cout << "Method: " << method << endl;
}

Recipe::~Recipe()
{
	// Destructor function
}
