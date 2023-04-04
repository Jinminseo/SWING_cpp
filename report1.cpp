#include <iostream>

using namespace std;

int main() {
    srand(time(NULL));
    int num;
    int number = rand() % 100 + 1;
    cout << "랜덤한 수 : " << number << endl;
    cout << "특정 배수 개수 : ";
    cin >> num;

    int multiple;
    for (int i = 1; i <= num; i++) {
        cout << endl << i << "번째 특정 배수 : ";
        cin >> multiple;
        cout << "<특정 배수만 출력하는 프로그램>" << endl;
        for (int i = 1; i <= number; i++) {
            if (i % multiple == 0) {
                cout << i << ", ";
            }
            
        }
        cout << endl << "<특정 배수 제외 출력하는 프로그램>" << endl;
        for (int i = 1; i <= number; i++) {
            if (i % multiple != 0) {
                cout << i << ", ";
            }
        }
        continue;
    }
}