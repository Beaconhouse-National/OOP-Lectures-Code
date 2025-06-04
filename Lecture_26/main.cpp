#include<iostream>
using namespace std;
class Person {
    protected:
        string name;
        int age;
        int id;
        int score;
    public:
        Person() {
            name = "";
            
            id = 0;
            score = 0;
        }
        
        Person(string n, int a, int i) {
            name = n;
            score = a;
            id = i;
           
        }
        
        ~Person() {
            // Destructor logic if needed
        }
        
        void setName(string n) {
            name = n;
        }
        
        void setAge(int a) {
            age = a;
        }
        
        void setID(int i) {
            id = i;
        }
    void setscore(int s) {
        if(s < 0 || s > 100) {
             score = s;
        }
        
    }
    virtual char getScore() const {
        if (score >= 60 && score <= 100) {
            return 'P';
        }
        else
            return  'F'; 
    }
};
class Student :public Person{
    private:
        int rollNumber;
        
    public:
        Student() : Person() {
            rollNumber = 0;
        }
        
        Student(string n, int a, int i, int r) : Person(n, a, i), rollNumber(r) {
        }
        
        ~Student() {
            // Destructor logic if needed
        }
        
        void setRollNumber(int r) {
            rollNumber = r;
        }
        
        int getRollNumber() const {
            return rollNumber;
        }
         char getScore() const {
            if (score >= 80 && score <= 100) {
                return 'A';
            }
            else
                return  'D'; 
        }
        void display() const {
            cout << "Name: " << name << ", Age: " << age << ", ID: " << id << ", Roll Number: " << rollNumber << ", Score: " << getScore() << endl;
        }

        
};
class Employee :public Person{
    protected:
        int employeeID;
    public:
        Employee(): Person() {
            employeeID = 0;
        }
        Employee(string n, int a, int i, int eID) : Person(n, a, i), employeeID(eID) {

        }
        ~Employee() {
            // Destructor logic if needed
        }
        void setEmployeeID(int eID) {
            employeeID = eID;
        }
        int getEmployeeID() const {
            return employeeID;
        }

    
};
class Teacher :public Employee{
    private:
        string subject;
    public:
        Teacher() : Employee() {
            subject = "";
        }
        
        Teacher(string n, int a, int i, int eID, string sub) : Employee(n, a, i, eID), subject(sub) {
        }
        
        ~Teacher() {
            // Destructor logic if needed
        }
        
        void setSubject(string sub) {
            subject = sub;
        }
        
        string getSubject() const {
            return subject;
        }

    
};
void displayPersonInfo(const Person p) {
    cout<<"score:"<<p.getScore()<<endl;
    
}
int main(){
    Student s("John Doe", 20, 12345, 1);
    displayPersonInfo(s);
    
    return 0;
}