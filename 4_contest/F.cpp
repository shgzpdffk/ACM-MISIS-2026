#include <iostream>
struct coor {
    long long x;
    long long y;
};
coor frac(long long x, long long y, long long n, long long step, coor p) {
    if (step <= n) {
        p.x = x;
        p.y = y;
        return frac(x+y, y-x, n, step+1,p);
    }
    return p;
}
int main() {
    long long n;
    coor p = { 0,0 };
    std::cin >> n;
    p=frac(0, 1, n+1, 2, {0,0});
    std::cout << p.x << ' ' << p.y << std::endl;
    return 0;
}
