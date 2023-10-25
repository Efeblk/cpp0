#include <string>

class Contact {
private:
    std::string name;
    std::string phoneNumber;

public:
    Contact(const std::string& name, const std::string& phoneNumber);
    std::string getName() const;
    std::string getPhoneNumber() const;
};
