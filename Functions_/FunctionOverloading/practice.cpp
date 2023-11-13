// Funcion overloading

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void print(int num)
{
    cout << num << endl;
}

void print(string s)
{
    cout << s << endl;
}

void print(string s, string t)
{
    cout << "Printing 2 strings : " << s << " and " << t << endl;
}

void print(vector<string> v)
{
    cout << "Printing the vector of strings : ";

    for (auto str : v)
    {
        cout << str << ", ";
    }
    cout << endl;
}

int main()
{
    print(100);
    print('B');
    print("C-style strings");

    string s{"C++ stringg"};

    print(s);

    print("C-style string", s);

    vector<string> three_stooges{"Larry", "Moe", "Curly"};

    print(three_stooges);

    cout << endl;

    return 0;
}