#include<iostream>
#include "Student.h"
using namespace std;


int main(){
    Student a1;
    a1.setId(1);
    a1.setName("Ali");
    a1.setmarks(0, 90.0);
    a1.setmarks(1, 80.0);
    cout << "ID: " << a1.getId() << endl;
    cout << "Name: " << a1.getName() << endl;
    cout << "Marks: " << a1.getmarks(0) << endl;
    cout << "Marks: " << a1.getmarks(1) << endl;
    cout<<"-------------------------"<<endl;
    Student a2 = a1;
    cout << "ID: " << a2.getId() << endl;
    cout << "Name: " << a2.getName() << endl;
    cout<< "Marks: " << a2.getmarks(0) << endl;
    cout << "Marks: " << a2.getmarks(1) << endl;
    cout << "-------------------" << endl;
    a2.setId(2);
    a2.setName("Ahmed");
    a2.setmarks(0, 100.0);
    a2.setmarks(1, 95.0);
    cout << "ID: " << a2.getId() << endl;
    cout << "Name: " << a2.getName() << endl;
    cout << "Marks: " << a2.getmarks(0) << endl;
    cout << "Marks: " << a2.getmarks(1) << endl;
    cout << "-------------------" << endl;
    cout << "ID: " << a1.getId() << endl;
    cout << "Name: " << a1.getName() << endl;
    cout << "Marks: " << a1.getmarks(0) << endl;
    cout << "Marks: " << a1.getmarks(1) << endl;
    return 0;
}