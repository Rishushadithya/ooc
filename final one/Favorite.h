#pragma once
#include "User.h"
#include "Recipe.h"
#include <iostream>
#include <string>

using namespace std;

class Favorite{
private:
    int Recipe_ID;
    int Favorite_ID;
    int User_ID;
public:
    Favorite();
    Favorite(int Recipe_ID, int Favorite_ID, int User_ID);
    void addToFavorite(User *u1, Recipe *r1);
    void removeFromFavorite(User *u1, Recipe *r1);
    void display();
    ~Favorite();
};