#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k, m;
    cin >> n >> k >> m;

    vector<int> p(n + 1);

    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        p[i] = p[i - 1] + x;
    }

    for (int i = 1; i + k <= n; i++) {
        if (p[i + k] - p[i - 1] == m) {
            cout << i << '\n';
            return 0;
        }
    }

    cout << 0 << '\n';
}