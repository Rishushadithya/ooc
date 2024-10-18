#include "Favorite.h"

Favorite::Favorite()
{
    Recipe_ID = 0;
    Favorite_ID = 0;
    User_ID = 0;
}

Favorite::Favorite(int Recipe_ID, int Favorite_ID, int User_ID)
{
    // Constructor
}

void Favorite::addToFavorite(User *u1, Recipe *r1)
{
    // Add to favorite function
}

void Favorite::removeFromFavorite(User *u1, Recipe *r1)
{
    // Remove from favorite function
}

void Favorite::display()
{
    // Display function
}

Favorite::~Favorite()
{
    // Destructor
}
