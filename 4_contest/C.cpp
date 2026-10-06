#include <iostream>
long long pow(long long a, long long b) {
    if (b == 1)
        return a;
    else { 
        return a* pow(a, b - 1); 
    }
}
int main() {
    long long n,m,p;
    std::cin >> n >> m >> p;
    std::cout << pow(n,p) % m;
    return 0;
}
