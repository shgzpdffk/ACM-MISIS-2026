#include <iostream>
using namespace std;

int main() {
    long long x1, y1, r1;
    long long x2, y2, r2;

    cin >> x1 >> y1 >> r1;
    cin >> x2 >> y2 >> r2;

    long long dx = x1 - x2;
    long long dy = y1 - y2;

    long long dist = dx * dx + dy * dy;

    long long rs = r1 + r2;
    long long rd = r1 - r2;

    long long mds = rs * rs;
    long long minds = rd * rd;

    if (minds <= dist && dist <= mds) {
        cout << "Yes";
    } else {
        cout << "No";
    }
}