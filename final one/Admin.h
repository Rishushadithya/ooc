#pragma once

#include "Users.h"
#include <iostream>
#include <string>
using namespace std;

class Admin : public Users {
private:
    int admin_id;
    string name;

public:

    Admin();
    Admin(int admin_id, string name, string email, string password);
    void manage_all_recipe();
    void manage_all_user();
    void manage_admin_profile();
    void view_all_user_summary();
    void view_all_recipe_summary();
    void display();

    ~Admin();
};
