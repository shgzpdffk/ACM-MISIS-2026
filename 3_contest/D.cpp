#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    long long w, h, n;
    cin >> w >> h >> n;

    long long l = 0, r = max(w, h) * n;

    while (l < r) {
        long long m = l + (r - l) / 2;

        long long a = min(m / w, n);
        long long b = min(m / h, n);

        if (a * b >= n) {
            r = m;
        } else {
            l = m + 1;
        }
    }
    cout << l << '\n';
}