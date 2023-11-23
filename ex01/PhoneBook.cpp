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

std::string PhoneBook::printer(std::string str) const {
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return str;
}

int PhoneBook::searchContact(std::string searchContact) {
    std::cout << "index     " << "first name" << "last name " << "nickname" << std::endl;
    for (int i = 0; i < this->MAX_CONTACTS; i++) {
        if (!contacts[i].getName().empty()) {
            char output[43];
            snprintf(output, sizeof(output), "%-10d|%-10s|%-10s|%-10s", i, this->printer(contacts[i].getName()).c_str(), this->printer(contacts[i].getLastName()).c_str(), this->printer(contacts[i].getNickName()).c_str());
            std::cout << output << std::endl;
        }
    }

    for (int i = 0; i < contact_count; i++) {
        if (contacts[i].getName() == searchContact) {
            return i;
        }
    }
    return -1;
}
