//operator overloading
#include<iostream>
using namespace std;
class Student {
private:
    string name;
    int age;
    int marks;

public:
    Student(){
        name = "";
        age = 0;
    }
    void setage(int a){
        age = a;
    }
    void operator+=(int a){
        age += a;
       marks += a;
    }
    void setmarks(int m){
        marks = m;
    }
    
    int getage() const{
        return age;
    }
    int getmarks() const{
        return marks;
    }
    void operator/=(int a){
        cout << "Dividing age by " << a << endl;
        age+= a;
        cout << "Dividing marks by " << a << endl;
        
        
    }
    Student operator-(const Student& s){
        Student temp;
        temp.age= age - s.age;
        temp.marks = marks - s.marks;
        return temp;
    }
    bool operator<(const Student& s){
        return age < s.age;    
    }

};
int main(){
    int x=2;
    int y=0;
    int z = x + y;
    Student student1;
    Student student2;
    student1+=5.0;
    student1 /= 5;
    Student student3;
    student1 = student2;
    student1.setage(18);
    student2.setage(20);
    student2.setmarks(100);
    student1.setmarks(90);
    student3 = student1 - student2;
    cout << "Student 3's age after subtracting Student 2's age from Student 1's age: " << student3.getage() << endl; // Output: -5
    if(student1<student2)
    return 0;
}