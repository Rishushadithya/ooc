#pragma once
#include <iostream>
#include <string>
using namespace std;


class Users {
protected:
	string email;
	string password;
public:
	Users();
	Users(string email, string password);
	void login();
	void validate_User();
	void display();
	void logout();
	~Users();
};