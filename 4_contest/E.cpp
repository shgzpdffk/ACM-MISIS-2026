#include<iostream>
int del(int n);

int rec(int n) {
	if (n == 0) {
		return 0;
	}
	if (n == 1) {
		std::cout << 1 << " ";
		return 0;
	}
	rec(n - 1);
	del(n - 2);
	std::cout << n << " ";
	rec(n - 2);
	return 0;
}

int del(int n) {
	if (n == 0) {
		return 0;
	}
	if (n == 1) {
		std::cout << -1 << " ";
		return 0;
	}
	del(n - 2);
	std::cout << -n << " ";
	rec(n - 2);
	del(n - 1);
	return 0;
}

int main() {
	int n;
	std::cin >> n;
	rec(n);
}
