// Section 13
// Declare Classes and Objects
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player
{
    // * Attributes :
private:
    std::string name{"Player"};
    int health{100};
    int xp{3};
    // * Methods :

public:
    void talk();
    bool is_dead();
};

class Account
{
private:
    //* attributes
    string name{"Account"};
    double balance{0.0};

public:
    //* methods :
    bool deposite(double);
    bool withdraw(double);
};

int main()
{
    Player othman;
    Player hero;

    Player players[]{othman, hero};

    vector<Player> vec_player{hero};
    vec_player.push_back(othman);

    Player *enemy{nullptr};
    enemy = new Player;

    delete enemy;

    return 0;
}