#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    sort(a.begin(), a.end());
    
    long long count = 0;
    for (int i = 0; i < n; ++i) {
        int right = i + 2; 
        for (int j = i + 1; j < n; ++j) {
            long long sum = a[i] + a[j];

            while (right < n && a[right] < sum) {
                ++right;
            }

            count += max(0, right - j - 1);
        }
    }
    
    cout << count << endl;
    return 0;
}