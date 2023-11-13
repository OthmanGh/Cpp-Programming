#include <iostream>
using namespace std;

void print_arr(const int const *arr, int size)
{
    cout << "Array Elements : ";
    for (size_t i{0}; i < size; i++)
    {
        cout << arr[i] << ", ";
    }

    cout << endl;
    // ! arr[0] = 12; this probably a bug
}

void set_arr(int *arr, int size, int value)
{
    for (size_t i{0}; i < size; i++)
    {
        arr[i] = value;
    }
}

int main()
{
    int my_scores[]{100, 98, 90, 86, 84};

    print_arr(my_scores, 5);
    set_arr(my_scores, 5, 10);
    print_arr(my_scores, 5);
    return 0;
}