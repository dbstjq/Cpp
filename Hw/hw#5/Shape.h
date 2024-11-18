#ifndef SHAPE_H
#define SHAPE_H
#include<iostream>
using namespace std;

class Shape {
    Shape* next;
protected:
    virtual void draw() = 0;
public:
    Shape() { next = NULL; }
    virtual ~Shape() {}
    void paint();
    Shape* add(Shape* p);
    Shape* getNext() { return next; }
    void setNext(Shape* p) { this->next = p->next; }
};

class Circle :public Shape {
protected:
    virtual void draw();
};

class Rect :public Shape {
protected:
    virtual void draw();
};

class Line :public Shape {
protected:
    virtual void draw();
};

class GraphicEditor {
    Shape* pStart;
    Shape* pLast;
    int count;
public:
    GraphicEditor();
    ~GraphicEditor();
    void Make(int num);
    void Delete(int num);
    void call();
};
#endif