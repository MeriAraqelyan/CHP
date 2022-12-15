#pragma once
#include "Header.h"

class Shablon : public Crypto {
public:
	virtual int encrypt(char* p_str, unsigned int src_size, char* p_out, unsigned int& out_size);
	virtual int decrypt(char* p_str, unsigned int src_size, char* p_out, unsigned int& out_size);
};