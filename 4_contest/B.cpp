#include <iostream>
long long gcd(long long a, long long b) {
    return b == 0 ? a : gcd(b, a % b);
}
long long lcm(long long a, long long b) {
    if (a == 0 || b == 0) return 0;
    return (a / gcd(a, b)) * b;
}
int main() {
    long long a;
    long long b;
    std::cin >> a >> b;

    std::cout << lcm(a, b) - gcd(a, b);

    return 0;
}
