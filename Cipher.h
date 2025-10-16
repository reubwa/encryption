#pragma once
class Cipher
{
public:
	virtual bool encrypt(const char* source, char* dest, const int length) const = 0;
	virtual bool decrypt(const char* source, char* dest, const int length) const = 0;
	bool isEncrypt() const;
	Cipher(bool encrypt);
private:
	bool encr;
};

