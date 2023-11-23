#include "PhoneBook.hpp"

PhoneBook::PhoneBook() 
{
    contact_count = 0;
}

void PhoneBook::addContact(){
    if(this->contact_count >= MAX_CONTACTS){
        this->contact_count = 0;
    }
    contacts[contact_count].init();
    contact_count++;
}

int PhoneBook::searchContact(std::string searchContact) {
    std::cout << "index     " << " first name" << " last name " << " nickname" << std::endl;
    for (int i = 0; i < contact_count; i++) {
        std::cout << i << "         " << "|" << contacts[i].getName() <<std::endl; 
    }
    for (int i = 0; i < contact_count; i++) {
        if (contacts[i].getName() == searchContact) {
            return i;
        }
    }
    return -1;
}