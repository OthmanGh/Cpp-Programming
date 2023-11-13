# What is a Pointer ?

    - a Variable
        * whose value is an address

    - What can be at that address?
        * another variable
        * a function

    - Pointers point to variables or functions ?

    - if x is an integer variable and its value is  10 then I can decalre a pointer that points to it

    - To use the data that the pointer is pointing to you must know its type

# Why use Pointers?

    - Inside functions, pointers can be used to access data that are defined outside the function those variables may not be in scope so you can't access them be their name

    - Pointers can be used to operate on arrays very efficiently

    - We can allocate memory dynamically on the heap or free store.
        * this memory doesn't even have a variable name
        * The only way to get to it is via pointer

    - Witht OO. pointers are how polymorphism works!!

    - Can access specific address in memory
        * useful in embedded and systems applications

# Declaring Pointers :

    - Always initialize pointers

    - Uninitialized pointers contain garbage data and can `point anywhere`

    - Initializing to zero or nullptr(C++ 11) represents address zero
        * implies that the pointer is `pointing nowhwere`

    - If you don't initialize a pointer to point to a variable or function then you should initialize it to nullptr to `make it null`

# Dynamic Memory Allocation :

    - We often don't know how much storage we need until we need it

    - We can allocate storage for a variable at run time

    - Recall C++ arrays
        * We had to explicitly provide the size and it was fixed

        * But vectors grow and shrink dynamically

    - We can use pointers to access newly allocated heap storage

# Using new to allocate Storage :

    - int *int_ptr {nullptr}
    - int_ptr = new int // allocate an integer on the heap

    cout << int_ptr << endl; // 0x2747f28

    cout << *int_ptr << endl; // 858956- garbage

    *int_ptr = 100;

    cout << *int_ptr << endl; // 100

# we use delete to deallocate storage :

    - delete int_ptr

# using new[] to allocate storage for an array :

    - array_ptr = new dataType[size] // allocate array on the heap

# we use delete[] to deallocate storage for an array :

    - delete [] array_ptrf

# Relationship Between Arrays and Pointers :

    - The value of an array name is the address of the first element in the array

    - The value of a pointer variable is an address

    - If the pointer points to the same data type as the array element then the pointer and array name can be used interchangeably (almost)

# Subscript and Offset notation equivalence :

    int array_name[] {1,2,3,4,5};
    int *pointer_name {array_name};

    - Subscript Notation :
        - array_name[index]
        - pointer_name[index]

    - Offset Notation
        - *(array_name + index)
        - *(pointer_name + index)

# Pointer Arithmetic

    - Pointer can be used in
        * Assignment expressions
        * Arithmetic expressions
        * Comparison expressions

    - C++ allows pointer arithmetic

    - Pointer arithmetic only makes sense with raw arrays


    - ++ and --
        * (++) increments a pointer to point to the nexxt array element

        * (--) decrements a pointer to point to the previouse array element


    - + and -
        * (+) increment pointer by n * sizeof(type)

        * (-) decrement pointer by n * sizeof(type)


    - Subtracting two pointers
        * Determine the number of elements between the pointers

        * Both pointers must point to the same data type
            - int n = int_ptr2 - int_ptr1


    - Comparing two pointers == and !=
        * does NOT compare the data where they point!

# Passing Pointers to a function :

    - const and Pointers :
    - There are several ways to qualify pinters using const :
        * pointers to constants
            data pointed to by the pointers is constant and cannot be changed

            The pointer itself can change and point somewhere else

            exa : const int *score_ptr

        * Constant pointers

            The data pointed to by the pointers can be changed

            The pointer itself cannot be change and point somewhere else

            exa: int *const score_ptr

        * Constant ponters to constants

            The data pointed to by the pointer is constant and cannot be changed

            The pointer itself cannot change and point somewhere  else

            const int *const score_ptr

# Passing pointers to a function :

    - Pass by reference with pointer parameters

    - We can use pointers and the dereference operator to achieve pass-by-reference

    - The Function parameter is a pointer

    - The actual parameter can be a pointer or address of a variable

# Potential Pointer Pitfalls

    - Uninitialized pointers:
        int *ptr --> point anywhere

    - Dangling Pointers
        * Pointer that is pointing to released memory
        * The other pointer accesses the release data

    - Not checking if new failed to allocate memory
        * We can use exception handling to catch exceptions
        * Dereferencing a null pointer will cause your program to crash

    - Leaking memory
        * Forgetting to release allocated memory with delete
        * if you lose your pointer to the storage allocated on the heap you have no way to get to that storage again
        * The memory is orphaned or leaked
        * One of the most common pointer problem

# What is a Reference ?

    * An alias for a variable
    * Must be initialized to a variable when declared
    * Cannot be null
    * Once initialized cannot be made to refer to a different variable
    * Very useful as function parameters
    * Might be helpful to think of a reference as a constant pointer that is automatically dereferenced

# l-values :

    * values that have names and are addressable
    * modifiable if they are not constants

# r-values :

    * a value that's not an l-value
        - on the right-hand side of an assignment expression
        - a literal
        - a temporary which is intended to be non-modifiable
