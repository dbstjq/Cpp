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
            cout << "������ �����Ͽ� ����Ʈ �� �� �����ϴ�." << endl;
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
            cout << "��ũ�� �����Ͽ� ����Ʈ �� �� �����ϴ�." << endl;
            return false;
        }
        availableInk-=pages;        
        return true;
    }
    void show() {
        cout << getModel() << " ," << getmManufacturer() << " ,���� ���� " << getAvaliablecount() << "�� ,���� ��ũ " << availableInk << endl;
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
            cout << "��ʰ� �����Ͽ� ����Ʈ �� �� �����ϴ�." << endl;
            return false;
        }
        availableToner-=pages;
        return true;
    }
    void show() {
        cout << getModel() << " ," << getmManufacturer() << " ,���� ���� " << getAvaliablecount() << "�� ,������� " << availableToner << endl;
    }
};
