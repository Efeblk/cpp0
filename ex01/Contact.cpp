#include "Contact.hpp"

Contact::Contact(){
    name = "";
    phoneNumber = "";
}

void Contact::init() {
    std::cout << "name: " << std::endl;
    while (std::getline(std::cin, this->name) && this->name.empty())
        std::cout << "name: " << std::endl;
    std::cout << "last name: " << std::endl;
    while ( std::getline(std::cin, this->lastName) && this->lastName.empty())
        std::cout << "last name: " << std::endl;
    std::cout << "nickname " << std::endl;
    while ( std::getline(std::cin, this->nickName) && this->nickName.empty())
        std::cout << "nickname " << std::endl;
    std::cout << "phone number" << std::endl;
    while (std::getline(std::cin, this->phoneNumber) && this->phoneNumber.empty())
        std::cout << "phone number" << std::endl;
    std::cout << "darkest secret" << std::endl;
    while (std::getline(std::cin, this->darkestSecret) && this->darkestSecret.empty())
        std::cout << "darkest secret" << std::endl;
}

std::string Contact::getName() const {
    return name;
}

std::string Contact::getPhoneNumber() const {
    return phoneNumber;
}

std::string Contact::getLastName() const {
    return lastName;
}

std::string Contact::getNickName() const {
    return nickName;
}

std::string Contact::getDarkest() const {
    return darkestSecret;
}