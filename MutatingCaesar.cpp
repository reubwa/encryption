#include "MutatingCaesar.h"

MutatingCaesar::MutatingCaesar(int shift, bool encrypt) : Shift(shift), Cipher(encrypt) {}

bool MutatingCaesar::encrypt(const char* source, char* dest, const int length)
{
    for (int i = 0; i < length; i++)
    {
        dest[i] = source[i] + Shift;
        Shift++;
    }
    return true;
}

bool MutatingCaesar::decrypt(const char* source, char* dest, const int length)
{
    for (int i = 0; i < length; i++)
    {
        dest[i] = source[i] - Shift;
        Shift++;
    }
    return true;
}
