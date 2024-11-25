#ifndef SHAPE_H
#define SHAPE_H
#include<iostream>
#include<vector>
using namespace std;

class Shape {
protected:
    virtual void draw() = 0;
public:
    void paint();
};
#endif