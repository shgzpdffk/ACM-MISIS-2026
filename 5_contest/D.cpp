#include <iostream>
#include <vector>
#include <utility>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;

    std::vector<int> a(n);

    for (int i = 0; i < n; ++i) {
        a[i] = i + 1;
    }

    for (int i = 2; i < n; ++i) {
        std::swap(a[i], a[i / 2]);
    }

    for (int i = 0; i < n; ++i) {
        if (i > 0) {
            std::cout << ' ';
        }
        std::cout << a[i];
    }

    std::cout << '\n';
    return 0;
}