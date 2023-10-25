#include "Contact.hpp"

class PhoneBook
{
private:
    static const int MAX_CONTACTS = 8;
    Contact contacts[MAX_CONTACTS];
    int contact_count;
public:
    PhoneBook();
    int addContact(const Contact& newContact);
    int searchContact(const Contact& Contact);
};