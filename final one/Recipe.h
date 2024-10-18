#pragma once
#include <iostream>
#include <string>

using namespace std;


class Recipe {

private:
	int recipe_ID;
	string recipe_Name;
	int creator_ID;
	string cuisine;
	string status;
	int time;
	string description;
	int difficulty;
	int serves;
	string image;
	string ingredients;
	string method;
public:
	Recipe();
	Recipe(int recipe_ID, string recipe_Name, int creator_ID, string cuisine, string status, int time, int difficulty, int serves, string description, string ingredients, string method);
	void displya_Recipe();
	~Recipe();

};
