#include <iostream>
#include <string>
#include "Admin.h"
#include "ContactUs.h"
#include "Creator.h"
#include "Favorite.h"
#include "Moderator.h"
#include "Recipe.h"
#include "Users.h"
#include "User.h"
using namespace std;

int main()
{

	Users* users = new Users("tharanga@gmail.com", "pass@1234");
	User* user = new User("2", "tharanga", "0123456789", "India", "tharanga@gmail.com", "pass@1234");
	Creator* creator = new Creator("1", "Chef", "profile.jpg", "'I am a passionate chef with a deep love for creating flavorful and innovative dishes", "4", "Kandy"/*, "tharanga@gmail.com", "pass@1234"*/);
	Recipe* recipe = new Recipe("5", "Biriyani", "1", "Italian", "pending", "10", "20", "Biriyani is a South Asian mixed rice dish with its origins among the Muslims of the Indian subcontinent", "4", "5", "Biriyani.jpg", "Rice,egg,etc..", "cook rice and ..");
	Admin* admin = new Admin("1", "widura", "widura@gmail.com", "pass@4321");
	Moderator* moderator = new Moderator("1", "gunapala", "gunapala@gmail.com", "1234@pass");
	contactUs* contactus = new contactUs("Tharanga", "tharanga@gmail.com", "message here");
	Favorite* addfavorite = new Favorite("5", "1", "2");


	users->login();
	users->validate_User();
	users->display();
	users->logout();

	user->view_All_Recipes();
	user->add_to_Favorite();
	user->download_Recipe();
	user->contact_Us();
	user->become_a_Creator();
	user->display();
	user->update_Profile();
	user->delete_Profile();

	creator->create_Recipe();
	creator->edit_Recipe();
	creator->delete_Recipe();
	creator->manage_Profile();
	creator->display();

	recipe->displya_Recipe();

	admin->manage_all_recipe();
	admin->manage_all_user();
	admin->manage_admin_profile();
	admin->view_all_user_summary();
	admin->view_all_recipe_summary();
	admin->display();

	moderator->filter_Count();
	moderator->view_Summary();
	moderator->manage_contactUs_messages();
	moderator->manage_Pending_Recipes();
	moderator->manage_Profile();
	moderator->display();

	contactus->display();
	contactus->sendMessage();


	addfavorite->addToFavorite();
	addfavorite->removeFromFavorite();
	addfavorite->display();

	
	delete users;
	delete user;
	delete creator;
	delete recipe;
	delete admin;
	delete moderator;
	delete contactus;
	delete addfavorite;


	return 0;
}

