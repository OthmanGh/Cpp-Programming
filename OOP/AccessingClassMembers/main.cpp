// Section 13
// Accessing Class Members
// Section 13
// Declare Classes and Objects
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player
{
    // * Attributes :
public:
    std::string name;
    int health;
    int xp;
    // * Methods :

    void talk(string text_to_say)
    {
        std::cout << this->name << " says " << text_to_say << std::endl;
    };
    bool is_dead();
};

class Account
{
public:
    //* attributes
    string name{"Account"};
    double balance{0.0};

    //* methods :
    void deposite(double bal)
    {
        this->balance += bal;
        std::cout << "In deposite" << std::endl;
    };
    void withdraw(double bal)
    {
        if (this->balance - bal > 0)
        {
            this->balance -= bal;
            std::cout << "In withdraw" << std::endl;
        }
        else
        {
            std::cout << "You don't have enough money in your account " << std::endl;
        }
    };
};

int main()
{
    Player othman;
    othman.name = "Othman";
    othman.health = 100;
    othman.xp = 12;
    othman.talk("Hi there");

    Player *enemy = new Player(); // here enemy will have garbage data
    (*enemy).name = "Enemy";
    (*enemy).health = 100;
    enemy->xp = 15;

    enemy->talk("I will destroy you !!!");

    Account ahmad;
    ahmad.name = "Ahmad";
    ahmad.balance = 12320;
    ahmad.withdraw(1200);

    return 0;
}