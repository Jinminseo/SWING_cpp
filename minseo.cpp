#include <iostream>
using namespace std;

void swap(int &a, int &b) {
	int tmp;

	tmp = a;
	a = b;
	b = tmp;
	cout << "swap �Լ� ���ο����� a: " << a << ", b: " << b << endl;
}

int main() {
	int n = 3, m = 1;
	cout << "swap �Լ� ���� ���� n: " << n << ", m: " << m << endl;

	swap(n, m);
	cout << "swap �Լ� ���� ���� n: " << n << ", m: " << m << endl;
}