#include "LazyVig.h"
#include <iostream>
#include <cctype>
#include <algorithm>

using namespace std;

LazyVig::LazyVig(bool encrypt) : Cipher(encrypt) {}

bool LazyVig::encrypt(const char* source, char* dest, const int length, char* key)
{
    for (int i = 0; i < length; i++)
    {
        dest[i] = source[i] + key[i];
    }
    return true;
}

bool LazyVig::decrypt(const char* source, char* dest, const int length, char* key)
{
    for (int i = 0; i < length; i++)
    {
        dest[i] = source[i] - key[i];
    }
    return true;
}
