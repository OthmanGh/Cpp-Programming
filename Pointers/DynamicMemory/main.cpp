// Section 12
// Dynamic Memory
#include <iostream>

using namespace std;

int main()
{
    int num = 23;
    int *num_ptr{nullptr};
    num_ptr = &num;

    // Allocation on run time:
    int *ptr_alloc = new int;

    *ptr_alloc = num;

    cout << *ptr_alloc << endl;

    // free memory  :
    delete ptr_alloc;

    // Allocate array on the heap
    int size;
    cout << "Enter size of double array : ";
    cin >> size;

    double *ptr_array = new double[size];

    // Set value for ptr_array

    for (size_t i{0}; i < size; i++)
    {
        cout << "Enter arr " << i + 1 << " value :  ";
        cin >> *(ptr_array + i);
    }

    for (size_t i{0}; i < size; i++)
    {
        cout << *(ptr_array + i) << ", ";
    }
    cout << endl;

    int j = 0;

    delete[] ptr_array;
    return 0;
}
