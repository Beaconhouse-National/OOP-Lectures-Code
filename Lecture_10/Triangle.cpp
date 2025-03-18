#include "Triangle.h"
#include<iostream>
using namespace std;
Triangle::Triangle(double b, double h){
    base = b;
    height = h;
}
Triangle::Triangle(){
    base = 0;
    height = 0;
}
double Triangle::getArea() const{
    return 0.5 * base * height;
}
void Triangle::setBase(double b){
    base = b;
}
void Triangle::setHeight(double h){
    height = h;
}
double Triangle::getBase() const{
    return base;
}
double Triangle::getHeight() const{
    return height;
}
void Triangle::print(){
    cout << "Base: " << base << endl;
    cout << "Height: " << height << endl;
    cout << "Area: " << getArea() << endl;
}
Triangle::~Triangle(){
    cout << "Triangle destructor called" << endl;
}
