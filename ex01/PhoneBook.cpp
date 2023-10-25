#include "PhoneBook.hpp"

PhoneBook::PhoneBook() 
{
    contact_count = 0;
}

int PhoneBook::addContact(const Contact& newContact){
    if (contact_count < MAX_CONTACTS) {
        contacts[contact_count] = newContact;
        contact_count++;
        return 0;
    } 
    else {
        return -1;
    }
}

int PhoneBook::searchContact(const Contact& searchContact) {
    for (int i = 0; i < contact_count; i++) {
        if (contacts[i].getName() == searchContact.getName() && contacts[i].getPhoneNumber() == searchContact.getPhoneNumber()) {
            return i;
        }
    }
    return -1;
}