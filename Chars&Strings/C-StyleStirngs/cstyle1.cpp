#include <iostream>
#include <cstring> // * for c-style string funcs
#include <cctype>  // * for character-based funcs

using namespace std;

int main()
{
    char first_name[20]{};
    char last_name[20]{};
    char full_name[50]{};
    char temp[50]{};

    // cout << first_name; // Will likely get garbage data

    cout << "Please enter your first name: ";
    cin >> first_name;

    cout << "Please enter your last name: ";
    cin >> last_name;
    cout << "...................................." << endl;

    cout << "Hello, " << first_name << "your first nae has " << strlen(first_name) << " characters" << endl;
    cout << " and your last name " << last_name << " has " << strlen(last_name) << " characters" << endl;

    // strlen() return a size_t (type) unsigned thing depends more on system

    strcpy(full_name, first_name);
    strcat(full_name, " ");
    strcat(full_name, last_name);
    cout << "Your full name is " << full_name << " of length " << strlen(full_name) << endl;

    cout << "...................................." << endl;

    return 0;
}