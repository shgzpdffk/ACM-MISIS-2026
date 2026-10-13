#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::string s;
    int direction;

    std::cin >> n >> s >> direction;

    std::vector<std::string> suffixes;
    suffixes.reserve(n);

    std::string current;

    for (int i = n - 1; i >= 0; --i) {
        current = s[i] + current;
        suffixes.push_back(current);
    }

    std::sort(suffixes.begin(), suffixes.end());

    if (direction == -1) {
        std::reverse(suffixes.begin(), suffixes.end());
    }

    for (const std::string& suffix : suffixes) {
        std::cout << suffix << '\n';
    }

    return 0;
}
