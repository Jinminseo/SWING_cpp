#include <iostream>

using namespace std;

int main() {
    srand(time(NULL));
    int num;
    int number = rand() % 100 + 1;
    cout << "������ �� : " << number << endl;
    cout << "Ư�� ��� ���� : ";
    cin >> num;

    int multiple;
    for (int i = 1; i <= num; i++) {
        cout << endl << i << "��° Ư�� ��� : ";
        cin >> multiple;
        cout << "<Ư�� ����� ����ϴ� ���α׷�>" << endl;
        for (int i = 1; i <= number; i++) {
            if (i % multiple == 0) {
                cout << i << ", ";
            }
            
        }
        cout << endl << "<Ư�� ��� ���� ����ϴ� ���α׷�>" << endl;
        for (int i = 1; i <= number; i++) {
            if (i % multiple != 0) {
                cout << i << ", ";
            }
        }
        continue;
    }
}