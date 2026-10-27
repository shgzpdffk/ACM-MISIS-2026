#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n; int r;
    cin >> n >> r;
    vector<int> d(n);
    for (int& x : d) {
        cin >> x;
    }
    long long count = 0;
    int j = 1;

    for (int i = 0; i < n; ++i) {
        if (j <= i) j = i + 1;

        while (j < n && 1LL * d[j] - d[i] <= r) {
            ++j;
        }

        count += n - j;
    }
    cout << count << endl;
}
