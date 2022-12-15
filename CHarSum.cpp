#include "CharSum.h"
#include <iostream>
using namespace std;

int CharSum::encrypt(char* p_str, unsigned int src_size, char* p_out, unsigned int& out_size) {
	if (p_str == 0 || src_size == 0 || p_out == 0 || out_size == 0) {
		return -1;
	}
	string str;
	for (int i = 0; i < src_size; i++){
	    int index = 0;
	    int count = 0;
	    char ch = *(p_str + i);
	    for (int j = i+1; j < src_size; j++) {
	        if(ch == *(p_str + j)){
	            count++;
	        }
	    }
	    str.append((p_str + i));
	    str.append(to_string(count));
	}
	out_size = src_size;
	cout << str;
	return 0;
}

int CharSum::decrypt(char* p_str, unsigned int src_size, char* p_out, unsigned int& out_size) {
	if (p_str == 0 || src_size == 0 || p_out == 0 || out_size == 0) {
		return -1;
	}

	for (int i = 0; i < src_size; i++) {
		
	}
	return 0;
}
