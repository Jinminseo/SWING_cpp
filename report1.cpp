#include <iostream> // 전처리기에 내리는 지시문 + 입력, 출력시에 필요한 헤더
using namespace std; // std::을 생략할 수 있도록 함

int main() {

	char name[12]; // 문자열 크기 12의 name 선언
	int num; // 정수형 num 선언
	float cpro; // C프로그래밍 학점 저장 위함, 실수형 cpro 선언
	float computer; // 컴퓨터및정보보호개론 학점 저장 위함, 실수형 computer 선언
	float soft; // 소프트웨어개발실무영어 학점 저장 위함, 실수형 soft 선언
	float eng; // 대학고급영어 학점 저장 위함, 실수형 eng 선언

	cout << "이름 : "; // 이름 : 출력
	cin.getline(name, 12, '\n'); // 공백이 있는 이름을 입력받아 저장하기 위해 cin.getline를 사용하여 이름 입력받음
	cout << "학번 : "; // 학번 : 출력
	cin >> num; // 입력된 학번을 num에 저장
	cout << "반갑습니다." << name << "님" << endl; // 입력된 이름을 넣어 문장 출력

	cout << endl << "학점 입력을 시작합니다." << endl; //endl을 이용한 줄바꿈

	cout << endl << "================="<< "SWING 31" << "=================" << endl;
	cout << "C프로그래밍(3학점) : ";
	cin >> cpro; // 입력된 학점을 cpro에 저장
	cout << "컴퓨터및정보보호개론(3학점) : ";
	cin >> computer; //입력된 학점을 computer에 저장
	cout << "소프트웨어개발실무영어Ⅰ(1학점) : ";
	cin >> soft; // 입력된 학점을 soft에 저장
	cout << "대학고급영어(2학점) : ";
	cin >> eng; // 입력된 학점을 eng에 저장
	cout << "============================================" << endl; //endl을 이용한 줄바꿈

	cout << name << "(" << num << ")" << "님의 전체 학점은 " << (cpro*3 + computer*3 + soft + eng*2) / 9 << "입니다." << endl;
	// 입력받은 이름, 학번을 넣어 문장 출력, 입력받은 학점들을 이용해 평균을 구하는 계산식을 작성한 후 값을 출력함

	return 0; //main 함수에서는 return을 생략하여도 상관없지만 작성해보았다. 생략할 경우 자동으로 return 0이 실행된다.

}