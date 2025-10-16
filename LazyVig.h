#pragma once
#include "Cipher.h"
class LazyVig :
    public Cipher
{
public:
    LazyVig(bool encrypt);
    bool encrypt(const char* source, char* dest, const int length, char* key);
    bool decrypt(const char* source, char* dest, const int length, char* key);
private:
    //p
};