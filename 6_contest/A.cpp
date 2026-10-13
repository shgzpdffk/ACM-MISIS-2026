#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int n;
    std::cin >> n;
    std::string aaa;
    std::vector<std::string> a;
    for (int i = 0; i < n; i += 1) {
        std::cin >> aaa;
        a.push_back(aaa);
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i += 1) {
        std::cout << a[i] << std::endl;
    }
    return 0;
}
