#include<iostream>
#include "printer.h"
using namespace std;

int main() {
    int printer, pages;
    char yn;
    InkJet* inkjet = new InkJet("Officejet V40", "Hp", 5, 10);
    Laser* laser = new Laser("SCX-6x45", "삼성전자", 3, 20);

    cout << "현재 작동중인 2 대의 프린터는 아래와 같다" << endl;
    cout << "잉크젯 : ";
    inkjet->show();
    cout << "레이저 : ";
    laser->show();
    cout << endl;

    while (true) {
        while (true) {
            cout << "프린터(1:잉크젯, 2:레이저)와 매수 입력>>";
            cin >> printer >> pages;

            if (printer == 1) {
                if (inkjet->printInkJet(pages)) {
                    cout << "프린트 하였습니다." << endl;
                    break;
                }
            }
            else if (printer == 2) {
                if (laser->printLaser(pages)) {
                    cout << "프린트 하였습니다." << endl;
                    break;
                }
            }
            else {
                cout << "프린터를 잘못 선택하셨습니다. 1 또는 2를 입력해 주세요." << endl;
            }
        }
        inkjet->show();
        laser->show();
        while (true) {
            cout << "계속 프린트 하시겠습니까(y/n)>>";
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
                cout << "잘못 입력하셨습니다. y 또는 n을 입력해 주세요." << endl;
            }
        }
    }
}