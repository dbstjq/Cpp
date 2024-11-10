#include<iostream>
using namespace std;

class printer {
private:
    string model, manufacturer;
    int printedCount, avaliableCount;
protected:
    printer(string model, string maufacturer, int avaliableCount) {
        this->model = model;
        this->manufacturer = maufacturer;
        this->avaliableCount = avaliableCount;
    }
    bool print(int pages) {
        if (avaliableCount < pages) {
            cout << "용지가 부족하여 프린트 할 수 없습니다." << endl;
            return false;
        }
        avaliableCount -= pages;
        printedCount += pages;
        return true;
    }
    string getModel() { return model; }
    string getmManufacturer() { return manufacturer; }
    int getAvaliablecount() { return avaliableCount; }
};


class InkJet :public printer {
    int availableInk;
public:
    InkJet(string model, string manufacturer, int avaliablecount, int availableInk) : printer(model, manufacturer, avaliablecount) {
        this->availableInk = availableInk;
    }
    bool printInkJet(int pages) {
        if (print(pages));
        else return false;
        if (availableInk < pages) {
            cout << "잉크가 부족하여 프린트 할 수 없습니다." << endl;
            return false;
        }
        availableInk-=pages;        
        return true;
    }
    void show() {
        cout << getModel() << " ," << getmManufacturer() << " ,남은 종이 " << getAvaliablecount() << "장 ,남은 잉크 " << availableInk << endl;
    }
};


class Laser : public printer {
    int availableToner;
public:
    Laser(string model, string manufacturer, int avaliablecount, int availableToner) : printer(model, manufacturer, avaliablecount) {
        this->availableToner = availableToner;
    }
    bool printLaser(int pages) {
        if (print(pages));
        else return false;
        if (availableToner < pages) {
            cout << "토너가 부족하여 프린트 할 수 없습니다." << endl;
            return false;
        }
        availableToner-=pages;
        return true;
    }
    void show() {
        cout << getModel() << " ," << getmManufacturer() << " ,남은 종이 " << getAvaliablecount() << "장 ,남은토너 " << availableToner << endl;
    }
};
