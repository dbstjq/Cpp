#include <iostream>
#include <string>
#include <random>
#include <ctime>

#include "gamble.h"

using namespace std;

void Player::setPlayer() {
	cout << "첫번째 선수 이름>>";
	getline(cin, player[0], '\n');
	cout << "두번째 선수 이름>>";
	getline(cin, player[1], '\n');
}

string* Player::getPlayer() {
    return player;
}

void GamblingGame::gameStart(string p[2]) {
    srand(time(NULL));
    string enter[1];
    do {
        for (int j = 0; j < 2; j++) {
            cout << p[j] << ": <Enter>";
            getline(cin, enter[0]);

            if (enter[0] == "") {
                for (int i = 0; i < 3; i++) {
                    int random = rand() % 3;
                    ranNum[i]= random;
                    cout << random << "   ";
                }

                if (ranNum[0] == ranNum[1] && ranNum[1] == ranNum[2]) {
                    cout << p[j] << "님 승리!" << endl;
                    return;
                }
                else {
                    cout << "아쉽군요!" << endl;
                }
            }
        }
    } while (true);
}
