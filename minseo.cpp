#include <iostream>
using namespace std;

void swap(int &a, int &b) {
	int tmp;

	tmp = a;
	a = b;
	b = tmp;
	cout << "swap 함수 내부에서의 a: " << a << ", b: " << b << endl;
}

int main() {
	int n = 3, m = 1;
	cout << "swap 함수 실행 전의 n: " << n << ", m: " << m << endl;

	swap(n, m);
	cout << "swap 함수 실행 후의 n: " << n << ", m: " << m << endl;
}