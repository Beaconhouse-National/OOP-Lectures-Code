#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>
using namespace std;
class Student{
    private:
        int id;
        string name;
        int numofbooks;
        double *marks;

        void createmarksarray(int Size);

    public:
        Student(string studentname = " ", int numofbooks = 5);
        Student(Student &s);
        ~Student();
        void setmarks(int index, double value);
        double getmarks(int index) const;

        void setId(int i);
        void setName(string n);
        int getId() const;
        string getName() const;
};
#endif