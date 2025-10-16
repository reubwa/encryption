#include <iostream>
#include <crtdbg.h>
#include "Caesar.h"

using namespace std;

int main()
{
#ifdef _DEBUG
    // _CrtSetBreakAlloc(10);
    _onexit(_CrtDumpMemoryLeaks);
#endif

    // strings are just an array of characters
    string text;

    int shift;
    cout << "Please enter shift: ";
    cin >> shift;

    // TODO: Create a new instance of a Ceaser object
    Cipher* cipher = new Caesar(shift,true);

    cout << "Enter some text: ";
    cin >> text;

    // get the array of characters that makes up the string
    const char* characters = text.c_str();

    // get the length of the string
    int length = (int)text.length();

    // TODO: 
    // use malloc to allocate an array of characters large enough 
    // to hold hold our decrypted character array
    // don't forget to free that memory
    char* output = (char*)malloc(sizeof(char)*length);

    if (output == nullptr || cipher == nullptr)
        cout << "read the TODO messages - you need to do this\n";
    else
    {
        cipher->decrypt(characters, output, length);

        // print back the encrypted text
        cout << "Encrypted: ";
        for (int i = 0; i < length; i++)
            cout << output[i];
    }

    //cout << "Check for memory leaks\n";
    delete cipher;
    cipher = nullptr;
    free(output);
    output = nullptr;

    return 0;
}
