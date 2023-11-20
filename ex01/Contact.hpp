#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>

class Contact {
private:
    std::string name;
    std::string lastName;
    std::string nickName;
    std::string phoneNumber;
    std::string darkestSecret;

public:
    Contact();
    void init(void);
    std::string getName() const;
    std::string getPhoneNumber() const;
};

#endif