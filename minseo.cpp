#include<iostream>
#include <string>
using namespace std;

void myaccount(int deposit, int savings, int housing, int stock) {

	cout << "-------------------- swing 계좌 정보 --------------------" << endl;
	cout << "|    예금    |    적금    |    주택청약    |    주식계좌    |" << endl;
	cout << "|    " << deposit << "    |    " << savings << "    |    " << housing << "    |    " << stock << "    |" << endl;
	cout << "---------------------------------------------------------" << endl;
}
//void로 함수를 선언해주어야하는줄 알고 void로 선언했는데 반환값 현식이 함수형식과 일치하지 않는다고 하여 찾아본결과 int로 해야하는것을 알게됨
int total(int deposit, int savings, int housing, int stock){
	int total_money = deposit + savings + housing + stock;
	return total_money;
}

//Member 구조체는 이름, 아이디, 비밀번호 정보를 담음
struct Member {
    string name;
    string id;
    string pw;
};

//회원들의 정보를 담기 위해 만든 배열
Member members[100];
int num_members = 0;//현재 등록된 회원 수를 0으로 초기화해줌

//회원가입 함수
void signup() {
    string name, id, pw;

    cout << "이름: ";
    cin >> name;

    cout << "아이디: ";
    cin >> id;

    cout << "비밀번호: ";
    cin >> pw;
    //이름, 아이디, 패스워드를 입력받아 저장함
    members[num_members] = { name, id, pw };  // members배열에 회원 정보 저장
    num_members++;//회원가입이 끝날때마다 가입자 수를 하나씩 올려줌

    cout << "==========회원가입 성공==========\n";
}

//로그인함수
bool login(string id, string pw) {//매개변수 : id, pw
    for (int i = 0; i < num_members; i++) {//등록된 회원수만큼 반복하도록 하여 회원가입된 사람들 중에서 로그인을 하는 것인지 확인해줌
        if (members[i].id == id && members[i].pw == pw) {//회원 정보와 id, pw가 일치할때
            cout << "==========로그인 성공==========\n";//로그인 성공 출력
            cout << members[i].name << "님 환영합니다.\n";  // 해당 회원의 이름 출력

            while (true) {//무한반복할 수 있도록 함
                cout << "**********swing 자산 관리 서비스 ********\n";
                cout << "1. 계좌 정보 출력\n";
                cout << "2. 총 자산 출력\n";
                cout << "3. 로그아웃\n";
                cout << "번호를 입력하세요 >> ";//세가지 중 선택할 수 있도록 함

                int choice;
                cin >> choice;//선택된 번호를 choice 변수에 삽입함

                switch (choice) {//입력된 choice를 스위치로 사용함
                case 1://계좌 정보 출력
                    myaccount(5000, 4000, 0, 10);//myaccount함수를 호출해줌
                    break;
                case 2://총 자산 출력
                    cout << "현재 swing 자산관리 서비스에 등록된 회원님의 총 자산은" << total(5000, 4000, 0, 10) << "원입니다." << endl;
                    //total함수에서 return된 값을 출력할 수 있도록 중간에 total함수를 넣어 실행
                    break;
                case 3://로그아웃
                    cout << "==========로그아웃==========\n";
                    cout << "로그아웃 되었습니다. 안녕히가세요";
                    exit(0);//프로그램 종료
                    break;
                default://1,2,3외에 다른 수 입력시 오류가 나도록 함
                    cout << "잘못된 입력입니다. 다시 입력하세요.\n";
                    break;
                }
            }
        }
    }
    cout << "아이디 혹은 비밀번호가 틀렸습니다.\n";//일치하지 않는 회원정보일 경우 오류가 나도록 함
    return false;
}

int main() {
    string id, pw;//로그인 시 필요한 변수들 선언

    while (true) {//무한으로 반복되어 실행되게 함
        cout << "**********swing 은행 ***********\n";
        cout << "1. 회원가입\n";
        cout << "2. 로그인\n";
        cout << "번호를 입력하세요 >> ";
        int choice;//선택한 번호를 저장할 변수
        cin >> choice;//번호를 입력받음

        switch (choice) {//선택한 번호를 키로하는 swich문 작성
        case 1://회원가입
            signup();//회원가입 함수로 이동하게 함
            break;
        case 2://로그인
            cout << "아이디: ";
            cin >> id;
            cout << "비밀번호: ";
            cin >> pw;
            //아이디와 비밀번호를 입력받아 각각 id와 pw에 저장
            login(id, pw);//로그인 함수로 이동하게 함(id, pw를 login에서 사용할 수 있도록 매개변수로 삼음)
            break;
        default:
            cout << "잘못된 입력입니다. 다시 입력하세요.\n";//메뉴 이외의 값이 입력된 경우 오류가 나도록 함
            break;
        }
    }
    return 0;
}