#include "Contact.hpp"

Contact::Contact(){
    name = "";
    phoneNumber = "";
}

void Contact::init() {
    std::cout << "name: " << std::endl;
    std::getline(std::cin, this->name);
    std::cout << "phone number" << std::endl;
    std::getline(std::cin, this->phoneNumber);
}
std::string Contact::getName() const {
    return name;
}

std::string Contact::getPhoneNumber() const {
    return phoneNumber;
}