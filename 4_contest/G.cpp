#include <iostream>
long soll(int t, int max) {
    if (t == 0) { return 1; }
    if (max <= 0) { return 0; }
    int w = soll(t, max - 1);
    if (t >= max) {
        w += soll(t - max, max - 1);
    }
    return w;
}
int main() {
    int n;
    std::cin >> n;
    std::cout << soll(n,n);
    return 0;
}
