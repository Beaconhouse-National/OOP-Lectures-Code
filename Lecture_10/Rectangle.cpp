#include "Rectangle.h"
#include<iostream>
using namespace std;
void Rectangle::setWidth(double w){
    width = w;
}
void Rectangle::setHeight(double h){
    height = h;
}
double Rectangle::getWidth() const{
    return width;
}
double Rectangle::getHeight() const{
    return height;
}
double Rectangle::getArea() const{
    return width * height;
}
Rectangle::Rectangle(double w, double h){
    width = w;
    height = h;
}
void Rectangle::print(){
    cout << "Width: " << width << endl;
    cout << "Height: " << height << endl;
    cout << "Area: " << getArea() << endl;
}
Rectangle::Rectangle(){
    width = 0;
    height = 0;
}

