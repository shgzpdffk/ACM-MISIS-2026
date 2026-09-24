#include <iostream>
using namespace std;

//сортировка списком
const int max_n = 1e6;
int cnt[max_n];

int main() {
    int n;
    cin >> n;

    for(int i =  0; i < n; i++) {
        int x;
        cin >> x;
        cnt[x] += 1;
    }

    for(int i = 0; 1 < max_n; i++) {
        while(cnt[i]> 0) {
            cout << i << ' ';
            cnt[i] -= 1;
        }
    }

    return 0;
}