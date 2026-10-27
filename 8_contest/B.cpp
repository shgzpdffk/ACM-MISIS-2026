#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

struct Manul {
    long long a, b;
    int id;
};

bool cmp(const Manul& x, const Manul& y) {
    return x.a + x.b > y.a + y.b;
}

int main() {
    int n;
    cin >> n;

    vector<Manul> m(n);
    long long remaining = 0;

    for (int i = 0; i < n; i++) {
        cin >> m[i].a;
        m[i].id = i + 1;
        remaining += m[i].a;
    }

    for (int i = 0; i < n; i++) {
        cin >> m[i].b;
    }

    sort(m.begin(), m.end(), cmp);

    for (int i = 0; i < n; i++) {
        remaining -= m[i].a;

        if (remaining >= m[i].b) {
            cout << -1 << '\n';
            return 0;
        }
    }

    for (int i = 0; i < n; i++) {
        if (i > 0) cout << ' ';
        cout << m[i].id;
    }

    cout << '\n';
    return 0;
}