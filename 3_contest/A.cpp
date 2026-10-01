#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    cin >> m;

    for (int i = 0; i < m; ++i) {
        int x;
        cin >> x;

        int left = 0;
        int right = n;

        while (left < right) {
            int mid = left + (right - left) / 2;

            if (a[mid] <= x) {
                left = mid + 1;
            } else {
                right = mid;
            }
        }
        if (i > 0) {
            cout << ' ';
        }
        cout << left;
    }
    cout << '\n';
}
