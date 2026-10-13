#include <iostream>
#include <string>
#include <set>

struct Compare {
    bool operator()(const std::string& a,
        const std::string& b) const {
        if (a.size() != b.size()) {
            return a.size() < b.size();
        }
        return a < b;
    }
};

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;

    std::set<std::string, Compare> numbers;

    for (int i = 0; i < n; ++i) {
        std::string x;
        std::cin >> x;

        auto first = x.find_first_not_of('0');

        if (first == std::string::npos) {
            x = "0";
        }
        else {
            x.erase(0, first);
        }

        auto smaller = numbers.lower_bound(x);
        auto greater = numbers.upper_bound(x);

        if (smaller == numbers.begin()) {
            std::cout << -1;
        }
        else {
            --smaller;
            std::cout << *smaller;
        }

        std::cout << ' ';

        if (greater == numbers.end()) {
            std::cout << -1;
        }
        else {
            std::cout << *greater;
        }

        std::cout << '\n';

        numbers.insert(x);
    }

    return 0;
}
