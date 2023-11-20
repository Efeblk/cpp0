#include "PhoneBook.hpp"

PhoneBook::PhoneBook() 
{
    contact_count = 0;
}

void PhoneBook::addContact(){
    if(this->contact_count < MAX_CONTACTS){
        contact_count = 0;
    }
    contacts[contact_count].init();
    contact_count++;
}

int PhoneBook::searchContact(std::string searchContact) {
    for (int i = 0; i < contact_count; i++) {
        if (contacts[i].getName() == searchContact) {
            return i;
        }
    }
    return -1;
}