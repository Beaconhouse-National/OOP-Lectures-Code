#include "Student.h"

void Student:: createmarksarray(int Size){
    this->numofbooks = Size;
    marks = new double[numofbooks];
    for (int i = 0; i < numofbooks; i++){
        marks[i] = 0.0;
    }
}
Student :: Student(string studentname, int numofbooks){
    this->id = 0;
    this->name = studentname;
    createmarksarray(numofbooks);
}
Student :: Student(Student &s){
    this->id = s.id;
    this->name = s.name;
    this->numofbooks = s.numofbooks;
    this->marks = new double[numofbooks];
    for (int i = 0; i < numofbooks; i++){
        this->marks[i] = s.marks[i];
    }
}
Student :: ~Student(){
    delete[] marks;
}
void Student :: setmarks(int index, double value){
    if (index >= 0 && index < numofbooks){
        this->marks[index] = value;
    }
}
double Student :: getmarks(int index) const{
    return marks[index];
}
void Student :: setId(int i){
    id = i;
}
void Student :: setName(string n){
    name = n;
}
int Student :: getId() const{
    return id;
}
string Student :: getName() const{
    return name;
}