#include <iostream>
#include <vector>
#include <random>
#include <utility>

std::mt19937 rng(std::random_device{}());

void quickSort(std::vector<int>& a, int left, int right) {
    while (left < right) {
        std::uniform_int_distribution<int> dist(left, right);
        int pivot = a[dist(rng)];

        int lt = left;
        int i = left;
        int gt = right;

        while (i <= gt) {
            if (a[i] < pivot) {
                std::swap(a[i], a[lt]);
                ++i;
                ++lt;
            }
            else if (a[i] > pivot) {
                std::swap(a[i], a[gt]);
                --gt;
            }
            else {
                ++i;
            }
        }

        if (lt - left < right - gt) {
            quickSort(a, left, lt - 1);
            left = gt + 1;
        }
        else {
            quickSort(a, gt + 1, right);
            right = lt - 1;
        }
    }
}

int main() {


    int n;
    if (!(std::cin >> n) || n < 0) {
        return 1;
    }

    std::vector<int> a(n);

    for (int i = 0; i < n; ++i) {
        if (!(std::cin >> a[i])) {
            return 1;
        }
    }

    quickSort(a, 0, n - 1);

    for (int i = 0; i < n; ++i) {
        if (i > 0) {
            std::cout << ' ';
        }
        std::cout << a[i];
    }

    std::cout << '\n';
    return 0;
}