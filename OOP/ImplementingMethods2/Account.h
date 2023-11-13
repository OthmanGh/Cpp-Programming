#pragma
#include <string>

class Account
{
    std::string name;
    double balance;

public:
    void set_balance(double bal)
    {
        this->balance = bal;
    }

    double get_balance()
    {
        return this->balance;
    }

    // methods will be declared outside the class declaration
    void set_name(std::string n);
    std::string get_name();

    bool deposite(double amount);
    bool withdraw(double amount);
};
