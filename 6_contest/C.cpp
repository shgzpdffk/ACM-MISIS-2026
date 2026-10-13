#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k,g;
    string aa;
    vector<string> a;
    cin >> n;
    for (n; n != 0;n -= 1) {
        cin >> k;
        if (k == 1) {
            cin >> aa;
            a.push_back(aa);
        }
        else {
            cin >> aa;
            g = count(a.begin(), a.end(), aa);
            if (g == 0) cout << -1 << '\n';
            else cout << g << '\n';
        }
    }
    return 0;
}
