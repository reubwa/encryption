#pragma once
#include "Cipher.h"
class MutatingCaesar :
    public Cipher
{
public:
    MutatingCaesar(int shift, bool encrypt);
    bool encrypt(const char* source, char* dest, const int length);
    bool decrypt(const char* source, char* dest, const int length);
private:
    int Shift;
};