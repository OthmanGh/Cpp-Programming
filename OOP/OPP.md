# Procedural programming :

    - Focus is on processes or actions that a program takes
    - Programs are typically a collection of functions
    - Data is declared separetely
    - Data is passed as arguments into functions
    - Fairly easy to learn

# # Procedural programming - Limitations :

    - Functions need to know the structure of the data
        * if the structure of the data changes many functions must be changed

    - As programs get larger they become more :
        * difficult to understand
        * difficult to maintain
        * difficult to extend
        * difficult to debug
        * difficult to reuse code
        * fragile and easier to break

# What is Object-Oriend Programming :

    - Classes Objects
        * Focus is on classes that model real-world domain entities
        * allows developers to think at a higher level of abstraction
        * used successfully in very large programs

    - Encapsulation
        * objects contain data and operations that work on that data
        *Abstarct  Data Type (ADT)

    - Information-hiding
        * implementation-specific logic can be hidden
        * users of the class code to the interface since they don't need to knkow the implementation
        * more abstraction
        * easier to test, debug, maintain and extend

    - Reusability
        * easier to reuse classes in other applications
        * faster to development
        * higher quality

    - Inheritance
        * can create new classes in term of existing classes
        * reusability
        * polymorphic classes

    - Polymorphism and more....

# Limitations :

    - Not a panacea
        * OO programming won't make bad code better
        * not suitable for all types of problems
        * not everything decomposes to class

    - Learning curve
        * usually a steeper learning curve, especially for C++
        * many OO languages, many variations of OO concepts

    - Desgin
        * usually more up-front desgin is necesary to create good models and hierarchies

    - Programs can be :
        * Larger in size
        * slower
        * more complex

# Classes :

    - Blueprint from which objects are created
    - a user-defined data-type
    - has attributes (data)
    - has method (functions)
    - can hide data and methods
    - provides a public interface

# Example classes :

    - Account
    - Employee
    - Image
    - std::vector
    - std::string

# Objects :

    - created from a class
    - represents a specific instance of a class
    - can create many, many objects
    - each has its own identity
    - each can use the defined class methods

# Eaxmple Account Objects :

    - Frank's account is an in an instance of an Account
    - Jim's account is an in an instance of an Account
    - Each has it own balance, can make deposits, withdrawals, etc...

# Accessing Class Members

    - We can access :
        * class attributes
        * class methods

    - Some class members will not be accessible

    - We need an obejct to access instance variables

# Class Member Access Modifiers :

    - public
        * accessible everywhere

    - private
        * accessible only by members or friends of the class

    - protected
        * used with inheritance

# Implementing Member Methods :

    - Very similar to how we implemented functions

    - Member methods have access to member attributes
        * so you don't need to pass them as arguments!

    - Can be implemented inside the class declaration
        * Implicitly inline

    - Can separate specification from implementation
        * .h file for the class declaration
        * .cpp file for the class implementation

# Include Guards :

    - an include guard is just a series of pre-proccessor directives that guarantees the file will only be included once.

        #ifndef _ACCOUNT_H_
        #define _ACCOUNT_H_

            // Account class declaration

        #endif

    or
        #pragma once

# Constructors :

    - Special member method
    - Invokeed during object creation
    - Useful for initialization
    - Same name as the class
    - No return type is specified
    - Can be overloaded

# Destructos :

    - Special member method
    - Same name as the class proceeded with a tilde (~)
    - Invoked automatically when an object is destroyed
    - No return type and no parameters
    - Only 1 destructor is allowed per class - cannot be overloaded !
    - Useful to release memory and other resources

# The Default Constructor :

    - Does not expect any arguments
        * Also called the no-args constructor

    - if your write no constructors at all for a class
        * C++ will generate a Default Constructor that does nothing

    - Called when you instantiate a new object with not arguments

# Overlaoding Constructors :

    - Classes can have as many constructors as necessary

    - Each must have a unique signature

    - Default constructor is no longer compiler-generated once another constructor is declared

# Constructor Initialization Lists

    - Constructor initialization lists

        * are more efficient

        * initialization list immediately follows the parameter list

        * initializes the data members as the object is created !

        * order of initialization is the order of declaration in the class

# Delegating Constructors :

    - Often the code for constructors is very similar

    - Duplicated code can lead to errors

    - C++ allows delegating constructors
        * code for one constructor can call another in the initialization llist
        * avoids duplicating code

# Default Constructor Parameters

    - Can often simplify our code and reduce the number of overloaded constructors

    - Same rules apply as we learned with non-member functions

# Copy Constructor :

    - When objects are copied C++ must create a new object from an existing object

    - When is a copy of an object made ?
        * passing object by value is a parameter
        * returning an object from a function by vlue
        * constructing one object based on another of the same class

    - C++ must have a way of accomplishing this so it provdies a compiler-defined copy constructor if you don't


    - if you don't provide your own way of copying objects by value then the compiler provides a default way of copying objects

    - Copies the valuees of each data member to the new object
        * default memberwise copy

    - Perfectly fine in may cases

    - Beware if you have a pointer data member
        * Pointer will be copied
        * Not what it is pointing to
        * Shallow vs Deep copy

    - Best Practices :
        * Provide a copy constructor when your class has raw pointer member
        * Provide the copy constructor with a const reference parameter
        * Use STL classes as they already provide copy constructor
        * Avoid using raw pointer data memebrs if possible

# Shallow vs. Deep Copying

    - Consider a class that contains a pointer as a data member
    - Constructor allocates storage dynamically and initializes the pointer
    - Destructor releases the memory allocated by the constructor
    - What happens in the default copy constructor ?

    Default copy constructor :  (Shallow Copy)

    - memberwise copy
    - Each data memebr is copied from the source object
    - The pointer is copied NOT what it points to (shallow copy)
    -Problem : When we release the storage in the desttructor, the other object still refers to the released storage!
