#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    long long n, x, y;
    cin >> n >> x >> y;

    long long first = min(x, y);

    long long left = 0;
    long long right = (n - 1) * first;

    while (left < right) {
        long long mid = left + (right - left) / 2;

        if (mid / x + mid / y >= n - 1) {
            right = mid;
        } else {
            left = mid + 1;
        }
    }
    cout << first + left << '\n';
}