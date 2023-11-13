// Section 13
// Constructor Initialization Lists
#include <iostream>
#include <string>

using namespace std;

class Player
{
private:
    std::string name{"XXXXXXX"};
    int health;
    int xp;

public:
    // Overloaded Constructors
    Player();
    Player(std::string name_val);
    Player(std::string name_val, int health_val, int xp_val);
};

Player::Player() : name{"Othman"}, xp{10}, health{0}
{
    std::cout << "Hello from no args constructor " << std::endl;
    std::cout << name << " " << health << " " << xp << std::endl;
}

Player::Player(std::string name_val) : name{name_val}, health{0}, xp{10} {}

Player::Player(std::string name_val, int health_val, int xp_val)
    : name{name_val}, health{health_val}, xp{xp_val}
{
    cout << "Hello From 3 args constructor ";
    cout << name << " " << health << " " << xp;
}

int main()
{
    Player empty;
    Player frank{"Frank"};
    Player villain{"Villain", 100, 55};

    return 0;
}
