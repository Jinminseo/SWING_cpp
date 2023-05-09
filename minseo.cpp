#include<iostream>
#include <string>
using namespace std;

void myaccount(int deposit, int savings, int housing, int stock) {

	cout << "-------------------- swing ���� ���� --------------------" << endl;
	cout << "|    ����    |    ����    |    ����û��    |    �ֽİ���    |" << endl;
	cout << "|    " << deposit << "    |    " << savings << "    |    " << housing << "    |    " << stock << "    |" << endl;
	cout << "---------------------------------------------------------" << endl;
}
//void�� �Լ��� �������־���ϴ��� �˰� void�� �����ߴµ� ��ȯ�� ������ �Լ����İ� ��ġ���� �ʴ´ٰ� �Ͽ� ã�ƺ���� int�� �ؾ��ϴ°��� �˰Ե�
int total(int deposit, int savings, int housing, int stock){
	int total_money = deposit + savings + housing + stock;
	return total_money;
}

//Member ����ü�� �̸�, ���̵�, ��й�ȣ ������ ����
struct Member {
    string name;
    string id;
    string pw;
};

//ȸ������ ������ ��� ���� ���� �迭
Member members[100];
int num_members = 0;//���� ��ϵ� ȸ�� ���� 0���� �ʱ�ȭ����

//ȸ������ �Լ�
void signup() {
    string name, id, pw;

    cout << "�̸�: ";
    cin >> name;

    cout << "���̵�: ";
    cin >> id;

    cout << "��й�ȣ: ";
    cin >> pw;
    //�̸�, ���̵�, �н����带 �Է¹޾� ������
    members[num_members] = { name, id, pw };  // members�迭�� ȸ�� ���� ����
    num_members++;//ȸ�������� ���������� ������ ���� �ϳ��� �÷���

    cout << "==========ȸ������ ����==========\n";
}

//�α����Լ�
bool login(string id, string pw) {//�Ű����� : id, pw
    for (int i = 0; i < num_members; i++) {//��ϵ� ȸ������ŭ �ݺ��ϵ��� �Ͽ� ȸ�����Ե� ����� �߿��� �α����� �ϴ� ������ Ȯ������
        if (members[i].id == id && members[i].pw == pw) {//ȸ�� ������ id, pw�� ��ġ�Ҷ�
            cout << "==========�α��� ����==========\n";//�α��� ���� ���
            cout << members[i].name << "�� ȯ���մϴ�.\n";  // �ش� ȸ���� �̸� ���

            while (true) {//���ѹݺ��� �� �ֵ��� ��
                cout << "**********swing �ڻ� ���� ���� ********\n";
                cout << "1. ���� ���� ���\n";
                cout << "2. �� �ڻ� ���\n";
                cout << "3. �α׾ƿ�\n";
                cout << "��ȣ�� �Է��ϼ��� >> ";//������ �� ������ �� �ֵ��� ��

                int choice;
                cin >> choice;//���õ� ��ȣ�� choice ������ ������

                switch (choice) {//�Էµ� choice�� ����ġ�� �����
                case 1://���� ���� ���
                    myaccount(5000, 4000, 0, 10);//myaccount�Լ��� ȣ������
                    break;
                case 2://�� �ڻ� ���
                    cout << "���� swing �ڻ���� ���񽺿� ��ϵ� ȸ������ �� �ڻ���" << total(5000, 4000, 0, 10) << "���Դϴ�." << endl;
                    //total�Լ����� return�� ���� ����� �� �ֵ��� �߰��� total�Լ��� �־� ����
                    break;
                case 3://�α׾ƿ�
                    cout << "==========�α׾ƿ�==========\n";
                    cout << "�α׾ƿ� �Ǿ����ϴ�. �ȳ���������";
                    exit(0);//���α׷� ����
                    break;
                default://1,2,3�ܿ� �ٸ� �� �Է½� ������ ������ ��
                    cout << "�߸��� �Է��Դϴ�. �ٽ� �Է��ϼ���.\n";
                    break;
                }
            }
        }
    }
    cout << "���̵� Ȥ�� ��й�ȣ�� Ʋ�Ƚ��ϴ�.\n";//��ġ���� �ʴ� ȸ�������� ��� ������ ������ ��
    return false;
}

int main() {
    string id, pw;//�α��� �� �ʿ��� ������ ����

    while (true) {//�������� �ݺ��Ǿ� ����ǰ� ��
        cout << "**********swing ���� ***********\n";
        cout << "1. ȸ������\n";
        cout << "2. �α���\n";
        cout << "��ȣ�� �Է��ϼ��� >> ";
        int choice;//������ ��ȣ�� ������ ����
        cin >> choice;//��ȣ�� �Է¹���

        switch (choice) {//������ ��ȣ�� Ű���ϴ� swich�� �ۼ�
        case 1://ȸ������
            signup();//ȸ������ �Լ��� �̵��ϰ� ��
            break;
        case 2://�α���
            cout << "���̵�: ";
            cin >> id;
            cout << "��й�ȣ: ";
            cin >> pw;
            //���̵�� ��й�ȣ�� �Է¹޾� ���� id�� pw�� ����
            login(id, pw);//�α��� �Լ��� �̵��ϰ� ��(id, pw�� login���� ����� �� �ֵ��� �Ű������� ����)
            break;
        default:
            cout << "�߸��� �Է��Դϴ�. �ٽ� �Է��ϼ���.\n";//�޴� �̿��� ���� �Էµ� ��� ������ ������ ��
            break;
        }
    }
    return 0;
}