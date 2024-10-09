#ifndef CALCULATOR_H 
#define CALCULATOR_H

#include<iostream>
#include <string>

using namespace std;

class Player {
private:
	string player[2];
public:
	void setPlayer();
	string *getPlayer();
};

class GamblingGame {
private: 
	int ranNum[3];
public:
	void gameStart(string p[2]);
};
#endif
