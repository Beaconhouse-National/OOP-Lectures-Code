#include<iostream>
using namespace std;
class Employee{
    private:
        int employeeID;
    public:
        Employee() {
            employeeID = 0;
            cout << "Employee default constructor called" << endl;
        }
        Employee(int id) {
            employeeID = id;
            cout << "Employee parameterized constructor called" << endl;
        }
        ~Employee() {
            cout << "Employee destructor called" << endl;
        }
        void setEmployeeID(int id) {
            employeeID = id;
        }
};
class Person{
    private:
        string name;
        int age;
    public:
        Person() {
            name = "";
            age = 0;
            cout << "Person default constructor called" << endl;
        }
        Person(string n, int a) {
            name = n;
            age = a;
            cout << "Person parameterized constructor called" << endl;
        }
        ~Person() {
            cout << "Person destructor called" << endl;
        }
        void setName(string n) {
            name = n;
        }
        
        void setAge(int a) {
            age = a;
        }
};
class Student : private Person {
    private:
        int rollNumber;
    public:
        Student() : Person() {
            rollNumber = 0;
            cout << "Student default constructor called" << endl;
        }
        
        Student(string n, int a, int r) : Person(n, a), rollNumber(r) {
            cout << "Student parameterized constructor called" << endl;
        }
        ~Student() {
            cout << "Student destructor called" << endl;
        }
       
        void setRollNumber(int r) {
            rollNumber = r;
        }
        void setName(string n) {
           cout << "Setting name in Student class" << endl;
        }
};
class Graduate : private Student {
    private:
        string thesisTopic;
    public:
        Graduate() : Student() {
            thesisTopic = "";
            cout << "Graduate default constructor called" << endl;
        }
        
        Graduate(string n, int a, int r, string t) : Student(n, a, r), thesisTopic(t) {
            cout << "Graduate parameterized constructor called" << endl;
        }
        
        ~Graduate() {
            cout << "Graduate destructor called" << endl;
        }
        
        void setThesisTopic(string t) {
            thesisTopic = t;
            // Example of setting age in Graduate class
        }
};
class Faculty : public Person , private Employee, protected Student {
    private:
        string department;
    public:
        Faculty() : Person() {
            department = "";
            cout << "Faculty default constructor called" << endl;
        }
        
        Faculty(string n, int a, string d) : Person(n, a), department(d) {
            cout << "Faculty parameterized constructor called" << endl;
        }
        
        ~Faculty() {
            cout << "Faculty destructor called" << endl;
        }
        
        void setDepartment(string d) {
            department = d;
        }
};

int main(){
    Graduate grad;
    
   
    return 0;
}