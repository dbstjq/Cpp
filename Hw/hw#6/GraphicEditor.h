#include<iostream>
#include<vector>
#include"UI.h"
using namespace std;

class GraphicEditor {
    vector<Shape*> v;
    vector<Shape*>::iterator it;
public:
    GraphicEditor();
    void insert();
    void deleteShape();
    void showAll();
};