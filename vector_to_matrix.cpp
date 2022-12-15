#include <iostream>
using namespace std;

void encode(char*, int, int, char*);

int main(){
    char ch[9] = {'A', 'B', 'C', 'A', 'B', 'C', 'A', 'B','C'};
    char matrix[3][3];
    cout << endl;
    encode(&matrix[0][0], 3, 3, &ch[0]);
   
   
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\n" ;
    encode(&matrix[0][0], 3, 3, &ch[0]);
   
   
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
    
    cout << "\n" ;
    encode(&matrix[0][0], 3, 3, &ch[0]);
   
   
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout <<endl;
    }
    
  
    return 0;
}

void encode(char* el, int m, int n, char* ch) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            *((el + 3*j)+i) = *((ch + j) + 3*i);
        }
    }
   for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            *((ch + j) + 3*i) = *((el + 3*i)+j);
        }
    }
}
