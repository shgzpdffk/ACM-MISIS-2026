#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    int sc = 0;
    getline(cin,  s);
    for(int i = 0; i < s.size(); i++){
        if (s[i] = '()'){
            sc += 1;
        } else {
            sc -= 1;
        } if(sc < 0) {
            cout << "NO" << endl;
            return 0;
        }

    }
    if(sc == 0){
        cout << "YES" << endl; 
    }
}