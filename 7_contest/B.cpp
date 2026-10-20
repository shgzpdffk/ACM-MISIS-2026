#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<long long> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int m = 0, l = 0, r = k + 1;

    for (int i = k + 1; i < n; i++) {
        int j = i - k - 1;

        if (a[j] > a[m]) m = j;

        if (a[m] + a[i] > a[l] + a[r]) {
            l = m;
            r = i;
        }
    }

    cout << l + 1 << ' ' << r + 1 << endl;
}