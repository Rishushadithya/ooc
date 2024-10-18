#pragma once
#include "User.h"
#include <iostream>
#include"Moderator.h"
#include <string>

using namespace std;
 class contactUs: public User{
 private:
    int message_ID;
    string email;
    string message;

 public:
    contactUs();
    contactUs(string email, string message ,int message_ID, int User_ID);
    void display();
    string sendMessage(string email, string message ,int message_ID, int User_ID);
    
    ~contactUs();

 };
