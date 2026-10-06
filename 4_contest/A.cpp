#include <iostream>
using namespace std;
int func(int a) {
    if (a == 0) return 1;
    int x;
    cin >> x;
    func(a - 1);
    cout << x << " ";
    return 1;
}
int main() {
    int a;
    cin >> a;
    func(a);
    return 0;
}
