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

int PhoneBook::searchContact() {
    std::cout << std::left << std::setw(10) << "index" << std::setw(10) << "|first name" << std::setw(10) << "|last name" << std::setw(10) << " |nickname" << std::endl;
    std::cout << "-----------------------------------------" << std::endl;
    for (int i = 0; i < this->MAX_CONTACTS; i++) {
        if (!contacts[i].getName().empty()) {
            std::cout << std::right << std::setw(10) << i << "|"
                      << std::setw(10) << this->printer(contacts[i].getName()) << "|"
                      << std::setw(10) << this->printer(contacts[i].getLastName()) << "|"
                      << std::setw(10) << this->printer(contacts[i].getNickName())
                      << std::endl;
        }
    }
    int index;
    index = -1;
    std::string index_str;
    std::cout << "Please enter the contact index: " << std::endl;
    std::getline(std::cin, index_str);
    try {
        index = std::stoi(index_str);
    } catch (std::invalid_argument const &e) {
        std::cout << "Invalid input. Please enter an integer: " << std::endl;
    } catch (std::out_of_range const &e) {
        std::cout << "Integer out of range. Please enter a valid integer: " << std::endl;
    }
    if ((index >= 0 && index <= 7))
    {
        std::cout << "Name: " << this->contacts[index].getName() << std::endl;
        std::cout << "Surname: " << this->contacts[index].getLastName() << std::endl;
        std::cout << "Nickname: " << this->contacts[index].getNickName() << std::endl;
        std::cout << "Phone Number: "<< this->contacts[index].getPhoneNumber() << std::endl;
        std::cout << "Darkest Secret: " << this->contacts[index].getDarkest() << std::endl;
    }
    else if (index != -1)
    {
        std::cout << "wrong index range" << std::endl;
    }
    return -1;
}

