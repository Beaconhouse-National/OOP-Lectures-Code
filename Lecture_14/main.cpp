#include<iostream>
#include<string>
using namespace std;
class Student{
    private:
    string name;
    int age;
    public:
    Student(){
        name = "";
        age = 0;
    }
    Student(string n, int a){
        name = n;
        age = a;
    }
    void setName(string n){
        name = n;
        this->name = n;
        (*this).name = n;
        //this is a pointer to the object that is calling the function
    }
    void setAge(int a){
        age = a;
    }
    string getName() const{
        return name;
    }
    int getAge() const{
        return age;
    }
    void print(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
    void print() const{
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
int main(){
    Student s1;
    Student s2;
    s1.setName("Ali");
    return 0;
}