#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int n; cin >> n;
    vector<long long> futb(n);
    for (long long & x : futb) {
        cin >> x;
    }

    int m; cin >> m;
    vector<long long> pants(m);
    for (long long & x : pants) {
        cin >> x;
    }

    int index_shirt = 0;
    int index_pants = 0;
    long long best = abs(futb[0] - pants[0]);

    int i = 0; int j = 0;
    while (i < n && j < m) {
        long long diff = abs(futb[i] - pants[j]);
        if (diff < best) {
            best = diff;
            index_shirt = i;
            index_pants = j;
        }
        if (diff == 0) break;

        if (futb[i] < pants[j]) {
            ++i;
        } else {
            ++j;
        }
    }
    cout << futb[index_shirt] << ' ' << pants[index_pants] << endl;
}