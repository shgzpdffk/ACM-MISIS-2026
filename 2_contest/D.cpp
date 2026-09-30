#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, l;
    int sc = 0;
    cin >> s;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            sc = sc * 10 + (s[i] - '0');
        } else {
            for (int j = 0; j < sc; j++) {
                l += s[i];
            }
            sc = 0;
        }
    }
    cout << l;
}