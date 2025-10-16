#pragma once
#include "Cipher.h"
class Caesar :
    public Cipher
{
public:
    Caesar(int shift, bool encrypt);
    bool encrypt(const char* source, char* dest, const int length) const;
    bool decrypt(const char* source, char* dest, const int length) const;
private:
    int Shift;
};

