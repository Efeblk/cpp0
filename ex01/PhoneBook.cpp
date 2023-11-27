#include "PhoneBook.hpp"
#include <iomanip>

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

std::string PhoneBook::printer(std::string str) const {
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return str;
}

int PhoneBook::searchContact(std::string searchContact) {
    std::cout << std::left << std::setw(10) << "index" << std::setw(10) << "first name" << std::setw(10) << "last name" << std::setw(10) << "nickname" << std::endl;

    for (int i = 0; i < this->MAX_CONTACTS; i++) {
        if (!contacts[i].getName().empty()) {
            std::cout << std::left << std::setw(10) << i
                      << std::left << std::setw(10) << this->printer(contacts[i].getName())
                      << std::left << std::setw(10) << this->printer(contacts[i].getLastName())
                      << std::left << std::setw(10) << this->printer(contacts[i].getNickName())
                      << std::endl;
        }
    }

    for (int i = 0; i < contact_count; i++) {
        if (contacts[i].getName() == searchContact) {
            return i;
        }
    }
    return -1;
}

