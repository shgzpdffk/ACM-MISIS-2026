#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, l;
    getline(cin, s);

    for(int i = 0; i < s.size(); i++){
        if(s[i] == '(' || s[i] == '{' || s[i] == '['){
            l += s[i];
        } else {
            if(l.empty()){
                cout << "NO" << endl;
                return 0;
            }

            int sc = l.size() - 1;

            if((s[i] == ')' && l[sc] == '(') || (s[i] == '}' && l[sc] == '{') || (s[i] == ']' && l[sc] == '[')){
                l.pop_back();
            } else {
                cout << "NO" << endl;
                return 0;
            }
        }
    }

    if(l.empty()){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}