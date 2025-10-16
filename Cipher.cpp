#include "Cipher.h"

bool Cipher::isEncrypt() const
{
	return false;
}

Cipher::Cipher(bool encrypt):encr(encrypt){}