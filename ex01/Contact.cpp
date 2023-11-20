#include "Contact.hpp"

Contact::Contact(){
    name = "";
    phoneNumber = "";
}

void Contact::init() {
    while (this->name.compare("") == 0)
    {
        std::cout << "name: " << std::endl;
        std::getline(std::cin, this->name);
    }
    while (this->lastName.compare("") == 0)
    {
        std::cout << "last name: " << std::endl;
        std::getline(std::cin, this->lastName);
    }
    while (this->nickName.compare("") == 0)
    {
        std::cout << "nickname " << std::endl;
        std::getline(std::cin, this->nickName);
    }
    while (this->phoneNumber.compare("") == 0)
    {
        std::cout << "phone number" << std::endl;
        std::getline(std::cin, this->phoneNumber);
    }
    while (this->darkestSecret.compare("") == 0)
    {
        std::cout << "darkest secret" << std::endl;
        std::getline(std::cin, this->darkestSecret);
    }   
}

std::string Contact::getName() const {
    return name;
}

std::string Contact::getPhoneNumber() const {
    return phoneNumber;
}