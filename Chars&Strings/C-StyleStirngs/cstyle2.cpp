#include <iostream>
#include <cstring> // * for c-style string funcs
#include <cctype>  // * for character-based funcs

using namespace std;

int main()
{
    char full_name[50]{};
    char temp[50]{};
    // cout << "Enter your full name : ";
    // cin >> full_name; //! notice default behavior of cin
    // cout << "Your full name is " << full_name << endl;

    cout << "Enter your full name: ";
    cin.getline(full_name, 50);
    cout << "Your full name is " << full_name << endl;

    cout << "..................................." << endl;
    strcpy(temp, full_name);

    if (strcmp(temp, full_name) == 0)
        cout << temp << " and " << full_name << " are the same " << endl;
    else
        cout << temp << " and " << full_name << " are different " << endl;

    cout << "..................................." << endl;

    for (size_t i{0}; i < strlen(full_name); i++)
    {
        if (isalpha(full_name[i]))
            full_name[i] = toupper(full_name[i]);
    }
    cout << "Your full name is " << full_name << endl;

    if (strcmp(temp, full_name) == 0)
        cout << temp << " and " << full_name << " are the same " << endl;
    else
        cout << temp << " and " << full_name << " are different " << endl;

    cout << "..................................." << endl;

    cout << "Result of comparing " << temp << " and " << full_name << ":" << strcmp(temp, full_name) << endl;

    cout << "Result of comparing " << full_name << " and " << temp << ":" << strcmp(full_name, temp) << endl;
    return 0;
}