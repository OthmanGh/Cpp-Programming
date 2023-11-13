## std::string is a Class in the Standard Template Library

    - we must #include <string> header file
    - string are in the namespace (also true for standard string methods)
    - contiguous in memory
    - dynamic size
    - work with input and output streams
    - lots of useful memeber functions
    - our familiar operators can be used(+,=, <=, >=, +=< ==, !=, []...)
    - can be easily converted to C-style Strigns if needed
    - safe (since they provide methods that can bounce check and allow you to find errors in your code and fix them before program goes into production)

# Declare and initializing :

    * string s1; // Empty
    * string s2  {"Othman"}; // Othman
    * string s3 {s2};        // Othman
    * string s4 {"Othman", 3};  // Oth
    * string s5 {s3, 0, 2};     //Ot
    * string s6 (3, 'x');       // XXX

# Assignment :

    * string s1;
    s1 = "C++ Rocks!";

    string s2 {"Hello"};
    s2 = s1; // copy of s1

# Concatentation :

    * string part1{"C++"};
    * string part2 {"is a powerful"};
    * string sentence;
    * sentence = part1 + " " + part2 + " language";

    note we can't concatenate c style literals like "abc + " def" illegal

# Accessing String Elements :

    string s1;
    string s2 {"Othman"};

    cout << s2[0] << endl;
    cout << s2.at(0) << endl;

    rememebr at method perform a bounce check

# Comparing

    == , != , > , >= , < , <=

    The ojbects are compared character by character lexically

    some string methods : substr, find, erase, clear, length

    input >> and getline()

    getline(cin, nameofstring, delimeter) // stop reading when see delimeter
