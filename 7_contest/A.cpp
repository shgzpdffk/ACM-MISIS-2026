#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }


    int m = 0, l = 0, r = 0;

    for (int i = 1; i < n; i++) {
        if (a[i] * a[l] > a[r] * a[m]) {
            l = m;
            r = i;
        }
        if (a[i] < a[m]) m = i;
    }

    if (l == r) cout << "0 0";
    else cout << l + 1 << ' ' << r + 1;
}