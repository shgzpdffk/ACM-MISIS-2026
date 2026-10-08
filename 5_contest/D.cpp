#include <iostream>
#include <vector>
using namespace std;

void mergeSort(vector<int>& a, vector<int>& b, int l, int r) {
    if (r - l <= 1) {
        return;
    }

    int m = l + (r - l) / 2;
    mergeSort(a, b, l, m);
    mergeSort(a, b, m, r);

    int i = l;
    int j = m;
    int p = l;

    while (i < m && j < r) {
        if (a[i] >= a[j]) {
            b[p] = a[i];
            i++;
        } else {
            b[p] = a[j];
            j++;
        }
        p++;
    }

    while (i < m) {
        b[p] = a[i];
        i++;
        p++;
    }

    while (j < r) {
        b[p] = a[j];
        j++;
        p++;
    }

    for (int t = l; t < r; t++) {
        a[t] = b[t];
    }
}

int main() {
    int n;
    int k;
    cin >> n >> k;

    vector<int> a(n);
    vector<int> b(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    mergeSort(a, b, 0, n);

    cout << a[k - 1] << '\n'; 
}