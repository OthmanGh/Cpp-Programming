#include "Account.h"

void Account::set_name(std::string n)
{
    this->name = n;
}

std::string Account::get_name()
{
    return this->name;
}

bool Account::deposite(double amount)
{
    this->balance += amount;
    return true;
}

bool Account::withdraw(double amount)
{
    if (this->balance - amount >= 0)
    {
        this->balance -= amount;
        return true;
    }
    else
    {
        return false;
    }
}