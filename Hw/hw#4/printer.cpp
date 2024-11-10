#include<iostream>
#include "printer.h"
using namespace std;

int main() {
    int printer, pages;
    char yn;
    InkJet* inkjet = new InkJet("Officejet V40", "Hp", 5, 10);
    Laser* laser = new Laser("SCX-6x45", "�Ｚ����", 3, 20);

    cout << "���� �۵����� 2 ���� �����ʹ� �Ʒ��� ����" << endl;
    cout << "��ũ�� : ";
    inkjet->show();
    cout << "������ : ";
    laser->show();
    cout << endl;

    while (true) {
        while (true) {
            cout << "������(1:��ũ��, 2:������)�� �ż� �Է�>>";
            cin >> printer >> pages;

            if (printer == 1) {
                if (inkjet->printInkJet(pages)) {
                    cout << "����Ʈ �Ͽ����ϴ�." << endl;
                    break;
                }
            }
            else if (printer == 2) {
                if (laser->printLaser(pages)) {
                    cout << "����Ʈ �Ͽ����ϴ�." << endl;
                    break;
                }
            }
            else {
                cout << "�����͸� �߸� �����ϼ̽��ϴ�. 1 �Ǵ� 2�� �Է��� �ּ���." << endl;
            }
        }
        inkjet->show();
        laser->show();
        while (true) {
            cout << "��� ����Ʈ �Ͻðڽ��ϱ�(y/n)>>";
            cin >> yn;

            if (yn == 'n') {
                delete inkjet;
                delete laser;
                return 0;
            }
            else if (yn == 'y') {
                break;
            }
            else {
                cout << "�߸� �Է��ϼ̽��ϴ�. y �Ǵ� n�� �Է��� �ּ���." << endl;
            }
        }
    }
}