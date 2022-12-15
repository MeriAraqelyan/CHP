//RLE
#include <iostream>
#include <map>
using namespace std;

void findChars(map<char, int>* , string*);

int main()
{
    string s;
    getline(cin, s);
    map<char, int> myMap;
    findChars(&myMap, &s);
    return 0;
}

void findChars(map<char, int>* map, string* str){
    int count = 1;
    for (int i = 0; i < str->length(); i++) {
        char a = str->at(i);
        for (int j = i+1; j < str->length(); j++) {
            if(a == str->at(j)){
                count++;
            }
        }
        map->insert({a, count});
        count = 1;
    }
    cout << endl;
    for (auto i = map->begin(); i!= map->end(); i++) {
        cout<<i->first<<i->second;
    }
}
