#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int n = s.size();
    int i = 0;

    while (i < n) {
        if (!isupper(s[i])) {
            cout << "No";
            return 0;
        }

        int len = 1;
        i++;

        while (i < n && islower(s[i])) {
            len++;
            i++;
        }

        if (len < 2 || len > 4) {
            cout << "No";
            return 0;
        }
    }

    cout << "Yes";
    return 0;
}
