#include "Caesar.h"
#include <iostream>
#include <cctype>
#include <algorithm>

using namespace std;

Caesar::Caesar(int shift, bool encrypt) : Shift(shift), Cipher(encrypt) {}

bool Caesar::encrypt(const char* source, char* dest, const int length) const
{
    for (int i = 0; i < length; i++)
    {
        dest[i] = source[i] + Shift;
    }
    return true;
}

bool Caesar::decrypt(const char* source, char* dest, const int length) const
{
    for (int i = 0; i < length; i++)
    {
        dest[i] = source[i] - Shift;
    }
    return true;
}
