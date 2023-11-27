#include <iostream>
#include "PhoneBook.hpp"
   
int main(void) {
    PhoneBook book;
    std::string input = "";
    while (input.compare("EXIT")) {
        if (input.compare("ADD") == 0)
            book.addContact();
        else if (input.compare("SEARCH") == 0) {
            book.searchContact();
        }
        std::cout << "> " << std::flush;
        std::getline(std::cin, input);
    }
    return 0;
}