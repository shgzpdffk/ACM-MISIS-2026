#include <iostream>
void sol(int n, int from, int in, int temp) {
    if (n == 0) {
        return;
    }
    sol(n - 1, from, temp, in);
    std::cout << n << " " << from << ' ' << in << std::endl;
    sol(n - 1,temp, in, from);
}
int main() {
    int n;
    std::cin >> n;
    sol(n,1,3,2);
    return 0;
}
