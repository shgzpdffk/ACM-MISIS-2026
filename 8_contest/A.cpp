#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

struct Box {
    long long c, w;
    int id;
};

bool cmp(const Box& a, const Box& b) {
    return a.c + a.w < b.c + b.w;
}

int main() {
    int n;
    cin >> n;

    vector<Box> boxes(n);

    for (int i = 0; i < n; i++) {
        cin >> boxes[i].c >> boxes[i].w;
        boxes[i].id = i + 1;
    }

    sort(boxes.begin(), boxes.end(), cmp);

    long long sum = 0;

    for (int i = 0; i < n; i++) {
        if (sum > boxes[i].c) {
            cout << -1 << '\n';
            return 0;
        }

        sum += boxes[i].w;
    }

    for (int i = n - 1; i >= 0; i--) {
        cout << boxes[i].id;
        if (i > 0) cout << ' ';
    }

    cout << '\n';
    return 0;
}