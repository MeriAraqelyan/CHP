#pragma once
 class Crypto {
 public:
	virtual int encrypt(char* p_str, unsigned int src_size, char* p_out, unsigned int& out_size) = 0;
	virtual int decrypt(char* p_str, unsigned int src_size, char* p_out, unsigned int& out_size) = 0;
};

