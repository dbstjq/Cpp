#include <iostream>
#include "Dept.h"
using namespace std;

Dept::~Dept() {
    if (scores)
        delete[] scores;
}

void Dept::read() {
    cout << "10�� ���� �Է�>> ";
    for (int i = 0; i < size; i++) {
        cin >> scores[i];
    }
}

bool Dept::isOver60(int index) {
    if (scores[index] >= 60) return true;
    return false;
}