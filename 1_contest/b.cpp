#include <iostream>
#include <vector>
using namespace std;

int main() {
    int k;
    unsigned long long x, y;

    cin >> k;
    cin >> x >> y;

    vector<unsigned long long> nums(k + 1);

    nums[0] = x;
    nums[1] = y;

    for (int i = 2; i <= k; i++) {
        nums[i] = nums[i - 1] + nums[i - 2];
    }

    cout << nums[k];

}