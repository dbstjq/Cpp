#include<iostream>
#include"Shape.h"
#include"Circle.h"
#include"Rect.h"
#include"Line.h"
#include"GraphicEditor.h"
using namespace std;
void GraphicEditor::insert() {
    int n = UI::shapeMenu();
    if (n == 1)
        v.push_back(new Line());
    else if (n == 2)
        v.push_back(new Circle());
    else if (n == 3)
        v.push_back(new Rect());
    else cout << "입력 에러" << endl;
}
void GraphicEditor::deleteShape(){
    int n = UI::deleteMenu();
    Shape* del;
    it = v.begin();
    for (int i = 0; i < n; ++i)
        ++it;
    del = *it;
    it = v.erase(it);
    delete del;
}
void GraphicEditor::showAll() {
    for (int i = 0; i < v.size(); ++i) {
        cout << i << ": ";
        v[i]->paint();
    }
}
GraphicEditor::GraphicEditor() {
    cout << "그래픽 에디터입니다" << endl;
    while(true) {
        int m = UI::mainMenu();
        if (m == 1)
            insert();
        else if (m == 2)
            deleteShape();
        else if (m == 3)
            showAll();
        else if (m == 4) break;
        else cout << "입력 에러 " << endl;
    }
}