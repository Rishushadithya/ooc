#include"contactUS.h"

contactUs::contactUs(){
    
    message_ID = 0;
    email = "";
    message = "";
}
contactUs::contactUs(string email, string message ,int message_ID, int User_ID){

    // Constructor
}

void contactUs::display(){

    cout << "Email: " << email << endl;
    cout << "Message: " << message << endl;
}

string contactUs::sendMessage(string email, string message ,int message_ID, int User_ID){

    // Send message function
    return "Message sent successfully!";
}

contactUs::~contactUs(){

    // Destructor
}   

