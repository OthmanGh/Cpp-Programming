// Section 10
// Challenge -
// Substitution Cipher

/*
A simple and very old method of sending secret messages is the substitution cipher.
You might have used this cipher with your friends when you were a kid.
Basically, each letter of the alphabet gets replaced by another letter of the alphabet.
For example, every 'a' get replaced with an 'X', and every 'b' gets replaced with a 'Z', etc.

Write a program thats ask a user to enter a secret message.

Encrypt this message using the substitution cipher and display the encrypted message.
Then decryped the encrypted message back to the original message.

You may use the 2 strings below for  your subsitition.
For example, to encrypt you can replace the character at position n in alphabet
with the character at position n in key.

To decrypt you can replace the character at position n in key
with the character at position n in alphabet.

Have fun! And make the cipher stronger if you wish!
Currently the cipher only substitutes letters - you could easily add digits, puncuation, whitespace and so
forth. Also, currently the cipher always substitues a lowercase letter with an uppercase letter and vice-versa.
This could also be improved.

Remember, the less code you write the less code you have to test!
Reuse existing functionality in libraries and in the std::string class!
*/

#include <iostream>
#include <string>

int main()
{
    std::string alphabet{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    std::string key{"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};

    std::string secretMessage{};
    std::string encryptMessage{};
    std::cout << "\nEnter your message : ";
    std::getline(std::cin, secretMessage);

    for (size_t i = 0; i < secretMessage.length(); i++)
    {
        size_t alphabet_pos = alphabet.find(secretMessage[i]);

        if (alphabet_pos != std::string::npos)
            encryptMessage += key[alphabet_pos];
        else
            encryptMessage += secretMessage[i];
    }

    std::cout << "\nencrypted message...." << std::endl;
    std::cout << encryptMessage << std::endl;
    std::string decryptMessage{};

    for (size_t i = 0; i < encryptMessage.length(); i++)
    {
        size_t key_pos = key.find(decryptMessage[i]);

        if (key_pos != std::string::npos)
            decryptMessage += alphabet[key_pos];
        else
            decryptMessage += secretMessage[i];
    }

    std::cout << "\ndecrypted message...." << std::endl;
    std::cout << decryptMessage << std::endl;

    return 0;
}
