#include <iostream>
int main() {
    int n;
    std::cin >> n;

    long long x = 0;
    long long y = 1;

    for (int step = 2; step <= n; ++step) {
        long long new_x = x + y;
        long long new_y = y - x;

        x = new_x;
        y = new_y;
    }

    std::cout << x << ' ' << y << '\n';

    return 0;
}
