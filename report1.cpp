#include <iostream>

using namespace std;

int main() {
    srand(time(NULL));
    int num;
    int number = rand() % 100 + 1;//������ ���� 100���� ���س���.
    cout << "������ �� : " << number << endl;//������ ���� Ȯ���� �� �ֵ��� ��.
    cout << "Ư�� ��� ���� : ";//for���� ��� �ݺ��� ������ ����
    cin >> num;

    int multiple;
    for (int i = 1; i <= num; i++) {
        cout << endl << i << "��° Ư�� ��� : ";
        cin >> multiple;//���� ����� ���� ������ �Է¹���.
        cout << "<Ư�� ����� ����ϴ� ���α׷�>" << endl;
        for (int i = 1; i <= number; i++) {
            if (i % multiple == 0) {
                cout << i << ", ";//�Է��� ���� ����� ����ϱ� ���� %2�� 0�� �͸� Ȯ����.
            }
            
        }
        cout << endl << "<Ư�� ��� ���� ����ϴ� ���α׷�>" << endl;
        for (int i = 1; i <= number; i++) {
            if (i % multiple != 0) {
                cout << i << ", ";//%2�� 0�� �ƴ� �͸� ����ϵ��� ��.
            }
        }
        continue;
    }
}