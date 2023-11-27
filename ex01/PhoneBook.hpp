#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>

class PhoneBook
{
private:
    static const int MAX_CONTACTS = 8;
    Contact contacts[MAX_CONTACTS];
    int contact_count;
public:
    PhoneBook();
    void addContact();
    int searchContact();
    std::string printer(std::string str) const;
};

#endif
