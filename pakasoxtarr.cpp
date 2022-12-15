//N  էլեմենտից բաղկացած զանգված ` միաչափ,որի մեջ չկրկնվող [1,n+1] թվեր են,գտնել որնա էտ չկրկնվող թիվը
#include<iostream>
using namespace std;

int main() {
    int n, s1 = 1, s2 = 1, i, res;
    cin >> n;
    int a[n];
    for(i = 0; i < n; i++){
        cin >> a[i];
    }
    i = 0;
    while(i < n){
        s1 = s1 * a[i];
        i++;
    }
    i = 1;
    while(i <= n + 1){
        s2 = s2 * i;
        i++;
    }
    res = s2 / s1;
    cout << "Pakasox tarry: " << res;
}
