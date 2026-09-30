#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1, s2;
    int sc, sc1;
    cin >> s1 >> s2;
    for (int i = 0; i + s1.size() <= s2.size(); i++) {
        while (sc1 < s1.size() && s1[sc1] == s2[i + sc1]) {
            sc1++;
        }

        if (sc1 == s1.size()) {
            sc++;
        }
    }
    cout << sc;
}