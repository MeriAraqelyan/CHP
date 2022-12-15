// Nairi19-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Shablon.h"
using namespace std;

int main(){
    char input[4];
    char output[4];
    
    strcpy_s(input, 4, "aaa");
    unsigned int len = 3;
    Shablon sh;
    sh.encrypt(input, 3, output, len);
    *(output + len) = 0;
    cout << output;
}
 
