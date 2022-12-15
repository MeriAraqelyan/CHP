#include <iostream>
#include <cstring>

using namespace std;

void change(char*);

int main(){
    
    string str = "";
    getline(cin, str);
    change(&str[0]);
}


void change(char* s){
    for (int i = 0; i < strlen(s); i++) {
        cout<<((char)(*(s + i)+1));
    }
}
