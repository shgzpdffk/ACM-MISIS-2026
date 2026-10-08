#include <iostream>
#include <vector>
#include <string>
using namespace std;

void mergeSort(vector<string>& a, vector<string>& b, int l, int r) {
    if (r - l <= 1) {
        return;
    }

    int m = l + (r - l) / 2;
    mergeSort(a, b, l, m);
    mergeSort(a, b, m, r);

    int i = l;
    int j = m;
    int k = l;

    while (i < m && j < r) {
        if (a[i] + a[j] >= a[j] + a[i]) {
            b[k] = a[i];
            i++;
        } else {
            b[k] = a[j];
            j++;
        }
        k++;
    }

    while (i < m) {
        b[k] = a[i];
        i++;
        k++;
    }

    while (j < r) {
        b[k] = a[j];
        j++;
        k++;
    }

    for (int p = l; p < r; p++) {
        a[p] = b[p];
    }
}

int main() {
    int n;
    cin >> n;

    vector<string> a(n);
    vector<string> b(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    mergeSort(a, b, 0, n);

    for (int i = 0; i < n; i++) {
        cout << a[i];
    }

    cout << '\n';
}