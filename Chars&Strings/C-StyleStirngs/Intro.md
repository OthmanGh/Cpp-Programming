# Characters and Strings :

    * Character functions
    * C-style Strings
    * Working with C-style Strings
    * C++ Strings
    * Working with C++ Strings

C++ support to type of libraries c-style and c++ Strings

We can think of Strings as a sequence of characters

cctype libaray provide useful simple function for testing and converting character case to use that we need to include cctype

# Testing Chars :

    - isalpha(c) --> if c is a letter (true)
    - isalnum(c) --> if c letter or digit (ture)
    - isdigit(c) --> if c is digit (true)
    - islower(c) --> if c lowercase letter (true)
    - isprint(c) --> if c is a printable char (true)
    - isunct(c) if c is a punctuation char (true)
    - isupper(c) if c is uppercase letter (true)
    - isspace(c) if c is whitespace

# Converting Functions :

    - tolower(c) --> return lowercase of c
    - toupper(c) --> return uppercase of c

### C-style Strings :

    * Sequence of Characters
        * contiguous in memory
        * implemented as an array of characters
        * terminated by a null character (null)
        (null -character with a value of zero)
        * Referred to as zero or null terminated Strings:

    - String literal:
        - sequence of characters in double quotes, e.g. "Jack"
        - Constant
        - terminated with null character

# C-Style Functions (using cstring library)

- Copying
- Concatenation
- Comparison
- Searching
- and others

note : all of these functions rely on one thing, that the sequence of character that they work on is terminated with null character

# ANOTHER LIBRARY : <cstdlib>

Includes Functions to convert C-style Strings to other types

- integer
- float
- long
  \*etc...
