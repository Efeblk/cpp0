#include "Contact.hpp"

Contact::Contact(){
    name = "";
    phoneNumber = "";
}

Contact::Contact(const std::string& name, const std::string& phoneNumber) {
    this->name = name;
    this->phoneNumber = phoneNumber;
}

std::string Contact::getName() const {
    return name;
}

std::string Contact::getPhoneNumber() const {
    return phoneNumber;
}