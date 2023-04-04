#include <iostream>

using namespace std;

int main() {
    srand(time(NULL));
    int num;
    int number = rand() % 100 + 1;//랜덤한 수를 100개로 정해놓음.
    cout << "랜덤한 수 : " << number << endl;//랜덤한 수를 확인할 수 있도록 함.
    cout << "특정 배수 개수 : ";//for문을 몇번 반복할 것인지 선택
    cin >> num;

    int multiple;
    for (int i = 1; i <= num; i++) {
        cout << endl << i << "번째 특정 배수 : ";
        cin >> multiple;//몇의 배수를 구할 것인지 입력받음.
        cout << "<특정 배수만 출력하는 프로그램>" << endl;
        for (int i = 1; i <= number; i++) {
            if (i % multiple == 0) {
                cout << i << ", ";//입력한 수의 배수만 출력하기 위해 %2가 0인 것만 확인함.
            }
            
        }
        cout << endl << "<특정 배수 제외 출력하는 프로그램>" << endl;
        for (int i = 1; i <= number; i++) {
            if (i % multiple != 0) {
                cout << i << ", ";//%2가 0이 아닌 것만 출력하도록 함.
            }
        }
        continue;
    }
}