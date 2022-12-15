#include "Shablon.h"
#include <iostream>
using namespace std;

int Shablon::encrypt(char* p_str, unsigned int src_size, char* p_out, unsigned int& out_size) {
	if (p_str == 0 || src_size == 0 || p_out == 0 || out_size == 0) {
		return -1;
	}

	for (int i = 0; i < src_size; i++){
		*(p_out + i) =  *(p_str + i) + 1;
	}
	out_size = src_size;
	return 0;
}

int Shablon::decrypt(char* p_str, unsigned int src_size, char* p_out, unsigned int& out_size) {
	if (p_str == 0 || src_size == 0 || p_out == 0 || out_size == 0) {
		return -1;
	}

	for (int i = 0; i < src_size; i++) {
		*(p_out + i) = (char)(p_str - 1);
	}
	return 0;
}